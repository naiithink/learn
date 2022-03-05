# Image Info
ARG     IMAGE="ubuntu" \
        IMAGE_TAG="20.04" \
        SRC_DIR=/home/src \
        MAINTAINER="naiithink" \
        DATE_MODIFIED="2022-03-03"

# buildx
# ARG     TARGETPLATFORM="linux/amd64"

# Unminimizing
# ARG     apt-get yes | unminimize

# Build Info
FROM    --platform=${TARGETPLATFORM} ${IMAGE}:${IMAGE_TAG}
LABEL   maintainer=${MAINTAINER} \
        date_modified=${DATE_MODIFIED}

# Debian
ARG     DEBIAN_FRONTEND=noninteractive

# General Packages
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install -y --no-install-recommends build-essential curl libtool-bin libncurses-dev libc6-dbg \
        && apt-get install -y --no-install-recommends git vim

# Some More Packages
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install -y clang-format clang-tidy clang-tools clang clangd libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1 liblldb-dev libllvm-ocaml-dev libomp-dev libomp5 lld lldb llvm-dev llvm-runtime llvm python3-clang \
        && apt-get install -y valgrind \
        && apt-get install -y python3 python3-dev python3-pip python3-venv \
        && apt-get install -y nodejs npm