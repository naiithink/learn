FROM    ubuntu:20.04

# buildx
ARG     TARGETPLATFORM=linux/amd64

# build info
ARG     MAINTAINER="naiithink" \
        DOCKERFILE_UPDATE="2022-02-05, 21:50 GMT+07" \
        MAINTAINER_MSG=":D"

ARG     SRC_DIR=/home/src \
        DEBIAN_FRONTEND=noninteractive

## general packages
RUN     apt-get update && apt-get -y upgrade &&\
        apt-get install -y --no-install-recommends automake autotools-dev build-essential libtool-bin libncurses-dev libc6-dbg &&\
        apt-get install -y --no-install-recommends git

## llvm-project
RUN     apt-get install -y clang-format clang-tidy clang-tools clang clangd libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1 liblldb-dev libllvm-ocaml-dev libomp-dev libomp5 lld lldb llvm-dev llvm-runtime llvm python3-clang

## python
RUN     apt-get install -y python3 python3-dev python3-pip python3-venv

## node 
RUN     apt-get install -y nodejs npm

## vim
ARG     PKG_DIR="vim"
RUN     git clone https://github.com/vim/vim.git ${SRC_DIR}
RUN     make -C ${SRC_DIR}/${PKG_DIR} &&\
        make -C ${SRC_DIR}/${PKG_DIR} install

## valgrind
ARG     PKG_DIR="valgrind"
RUN     git clone git://sourceware.org/git/valgrind.git ${SRC_DIR}
RUN     ./${SRC_DIR}/${PKG_DIR}/autogen.sh &&\
        ./${SRC_DIR}/${PKG_DIR}/configure &&\
        make -C ${SRC_DIR}/${PKG_DIR} &&\
        make -C ${SRC_DIR}/${PKG_DIR} install

# image label
LABEL   os=${TARGETOS} \
        variant=${TARGETVARIANT} \
        build-platform=${BUILDPLATFORM} \
        target-platform=${TARGETPLATFORM} \
        maintainer=${MAINTAINER} \
        dockerfile_update=${DOCKERFILE_UPDATE} \
        maintainer-message=${MAINTAINER_MSG}