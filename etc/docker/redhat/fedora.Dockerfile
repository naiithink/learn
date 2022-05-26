# -*- coding: utf-8 -*-

ARG     IMAGE="fedora" IMAGE_TAG="36" \
        MAINTAINER="naiithink" \
        DATE_MODIFIED="2022-05-24"

FROM    ${IMAGE}:${IMAGE_TAG}
LABEL   image.maintainer=${MAINTAINER} \
        image.modified=${DATE_MODIFIED}

ARG     DNF_OPTS="-y --no-install-recommends"

RUN    dnf update -y
#         && yes | unminimize

RUN    dnf install ${APTGET_OPTS} glibc ncurses-devel libtool libxml2-devel                                     \
                                                automake build-essential cmake curl gawk gdb git git-lfs wget \
        &&dnf install ${APTGET_OPTS} ca-certificates gnupg gnupg2 pinentry-curses \
        &&dnf install ${APTGET_OPTS} emacs vim \
        &&dnf install ${APTGET_OPTS} ffmpeg gawk ghostscript pandoc tesseract-ocr

RUN    dnf install ${APTGET_OPTS} valgrind \
        &&dnf install ${APTGET_OPTS} libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1    \
                                                liblldb-dev libllvm-ocaml-dev libomp-dev libomp5                \
                                                clang-format clang-tidy clang-tools clang clangd lld lldb       \
                                                llvm-dev llvm-runtime llvm python3-clang \
        &&dnf install ${APTGET_OPTS} python3-dev python3 python3-pip python3-venv \
        &&dnf install ${APTGET_OPTS} default-jdk \
        &&dnf install ${APTGET_OPTS} nodejs npm

RUN    dnf install ${APTGET_OPTS} groff latexmk texlive texlive-xetex \
        &&dnf install ${APTGET_OPTS} graphviz node-mermaid

# Swift
RUN    dnf install ${APTGET_OPTS} binutils libc6-dev libcurl4 libedit2 libgcc-9-dev libpython2.7           \
                                                libsqlite3-0 libstdc++-9-dev libz3-dev pkg-config tzdata        \
                                                uuid-dev zlib1g-dev

RUN    dnf update &&dnf upgrade -y