# buildx - uncomment the line below to specify a target platform
# ARG     TARGETPLATFORM="linux/amd64"

# build info
FROM    ubuntu:20.04
LABEL   os=${TARGETOS} \
        variant=${TARGETVARIANT} \
        build-platform=${BUILDPLATFORM} \
        target-platform=${TARGETPLATFORM} \
        maintainer="naiithink" \
        dockerfile_update="2022-02-05" \
        maintainer-message=":D"

# build time
ARG     SRC_DIR=/home/src \
        DEBIAN_FRONTEND=noninteractive

# general packages
RUN     apt-get yes | unminimize \
        && apt-get update && apt-get -y upgrade \
        && apt-get install -y --no-install-recommends build-essential libtool-bin libncurses-dev libc6-dbg \
        && apt-get install -y --no-install-recommends git

# more packages
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install -y clang-format clang-tidy clang-tools clang clangd libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1 liblldb-dev libllvm-ocaml-dev libomp-dev libomp5 lld lldb llvm-dev llvm-runtime llvm python3-clang \
        && apt-get install -y valgrind \
        && apt-get install -y python3 python3-dev python3-pip python3-venv \
        && apt-get install -y nodejs npm

# vim
ARG     PKG_DIR="vim"
RUN     mkdir -p ${SRC_DIR}/${PKG_DIR} \
        && git clone https://github.com/vim/vim.git ${SRC_DIR}/${PKG_DIR} \
        && make -C ${SRC_DIR}/${PKG_DIR} \
        && make -C ${SRC_DIR}/${PKG_DIR} install