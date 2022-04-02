# Mounting SCSI Disks

[Mount Storage Volumes onto Linux Operating Systems](https://levelup.gitconnected.com/mount-storage-volumes-onto-linux-operating-systems-24283d9a676e)
[C.4. Device Names in Linux](https://help.ubuntu.com/lts/installation-guide/armhf/apcs04.html#:~:text=The%20partitions%20on%20each%20SCSI,disk%20drive%20in%20your%20system.)

---

## At `/dev/sda1`

```
/ dev / sda1
        --              Prefix
          --            Suffix
```

### The Prefix

```
/dev/sda1
     --

     sd                 // SCSI Disk
                           -    -

                           SCSI: Small Computer System Interface
```

### The Suffix

```
/dev/sda1
       -

	   a                // 1st mounted SCSI device

     sda, sdb, ...      // 1st, 2nd, ... mounted SCSI device, respectively
       -    -



/dev/sda1
        -

        1               // 1st partition within the 1st disk (sda)

     sda1, sda2, ...    // 1st, 2nd, ... partition within the 1st disk (sda),
        -     -                          respectively
```

