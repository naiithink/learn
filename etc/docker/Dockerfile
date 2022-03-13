# Image Info
ARG     IMAGE="debian" IMAGE_TAG="bullseye" \
        MAINTAINER="naiithink" \
        DATE_MODIFIED="2022-03-14"

# Build Info
FROM    ${IMAGE}:${IMAGE_TAG}
LABEL   image.maintainer=${MAINTAINER} \
        image.modified=${DATE_MODIFIED}

# Debian
ARG     DEBIAN_FRONTEND=noninteractive

# General Packages
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install -y --no-install-recommends automake build-essential ca-certificates curl libtool-bin libncurses-dev libc6-dbg libxml2-dev wget \
        && apt-get install -y --no-install-recommends git \
        && apt-get install -y --no-install-recommends vim

# Some More Packages
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install -y --no-install-recommends clang-format clang-tidy clang-tools clang clangd libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1 liblldb-dev libllvm-ocaml-dev libomp-dev libomp5 lld lldb llvm-dev llvm-runtime llvm python3-clang \
        && apt-get install -y --no-install-recommends python3 python3-dev python3-pip python3-venv \
        && apt-get install -y --no-install-recommends default-jdk \
        && apt-get install -y --no-install-recommends nodejs npm \
        && apt-get install -y --no-install-recommends valgrind