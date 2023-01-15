#! /usr/bin/env bash

OPT1='Create a disk'
OPT2='First time setup'
OPT3='After partition'
OPT4='Boot normally'
OPT5='Install MASM from disk'
SETUP_OPT=($OPT1 $OPT2 $OPT3 $OPT4 $OPT5)

MASM_SETUP_IMG='../masm/masm40.img'

DOS_IMAGE_PREFIX='../ms-dos'
DOS_IMAGE1='DISK01.IMG'
DOS_IMAGE2='DISK02.IMG'

MAIN_DISK_PREFIX="."
MAIN_DISK_NAME='local_disk_c'
MAIN_DISK_FORMAT='qcow2'
MAIN_DISK="${MAIN_DISK_NAME}.${MAIN_DISK_FORMAT}"

MACHINE='pc'
CPU='486'
MEMORY='2M'


select OPT in $SETUP_OPT
do
    case $OPT in
        $OPT5)
            install_masm_from_disk()
            break
            ;;
        $OPT4)
            normal_boot()
            break
            ;;
        $OPT3)
            boot_from_floppy()
            break
            ;;
        $OPT2)
            first_install()
            break
            ;;
        $OPT1)
            create_disk()
            break
            ;;
        *)
            echo "Please select an option from the list to continue."
            exit 1
            ;;
    esac
done


# Create the main disk "disk_c.qcow2"
create_disk() {
    qemu-img create -f $MAIN_DISK_FORMAT $MAIN_DISK 256M
}

# Install MS-DOS on the main disk
first_install() {
    qemu-system-i386 \
        -machine $MACHINE \
        -cpu $CPU \
        -m $MEMORY \
        -hda "${MAIN_DISK_PREFIX}/${MAIN_DISK}" \
        -fda "${DOS_IMAGE_PREFIX}/${DOS_IMAGE1}" \
        -fdb "${DOS_IMAGE_PREFIX}/${DOS_IMAGE2}"

    # Manual disk partition
    echo "Partition the main disk manually (using 'FDISK') on the popped-up QEMU window"
    echo "After done partitioning, run the next setup script."
}

# Boot from the floppy disk
boot_from_floppy() {
    qemu-system-i386 \
        -machine $MACHINE \
        -cpu $CPU \
        -m $MEMORY \
        -hda "${MAIN_DISK_PREFIX}/${MAIN_DISK}" \
        -fda "${DOS_IMAGE_PREFIX}/${DOS_IMAGE1}" \
        -fdb "${DOS_IMAGE_PREFIX}/${DOS_IMAGE2}" \
        -boot a

    # Manual partition format
    echo "Format the created partition (using 'FORMAT C: /S' -- /S for System)"

    # Copy system files to the 'C:\DOS'
    echo "Copy system files to the 'C:\DOS'"
    echo "0. MD C:\DOS"
    echo "1. COPY A:\ C:\DOS"
    echo "2. COPY B:\ C:\DOS"
}

# Normal boot
normal_boot() {
    qemu-system-i386 \
        -machine $MACHINE \
        -cpu $CPU \
        -m $MEMORY \
        -hda "${MAIN_DISK_PREFIX}/${MAIN_DISK}"
}

# Mount MASM image
install_masm_from_disk() {
    qemu-system-i386 \
        -machine $MACHINE \
        -cpu $CPU \
        -m $MEMORY \
        -hda "${MAIN_DISK_PREFIX}/${MAIN_DISK}" \
        -fda "$MASM_SETUP_IMG"
}
