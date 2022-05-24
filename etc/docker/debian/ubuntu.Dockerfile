ARG     IMAGE="ubuntu" IMAGE_TAG="22.04" \
        MAINTAINER="naiithink" \
        DATE_MODIFIED="2022-05-24"

FROM    ${IMAGE}:${IMAGE_TAG}
LABEL   image.maintainer=${MAINTAINER} \
        image.modified=${DATE_MODIFIED}

RUN     apt-get update && apt-get upgrade -y && export DEBIAN_FRONTEND=noninteractive
        && yes | unminimize

ARG     APTGET_OPTS="-y --no-install-recommends"

RUN     apt-get install ${APTGET_OPTS} libc6-dbg libncurses-dev libtool-bin libxml2-dev                         \
                                                automake build-essential cmake curl gawk gdb wget               \
                                                git git-lfs gh \
        && apt-get install ${APTGET_OPTS} ca-certificates gnupg gnupg2 pinentry \
        && apt-get install ${APTGET_OPTS} emacs vim \
        && apt-get install ${APTGET_OPTS} tesseract-ocr tesseract-ocr-all \
        && apt-get install ${APTGET_OPTS} ffmpeg gawk ghostscript pandoc tesseract-ocr
        tesseract-ocr-script-thai tesseract-ocr-tha

RUN     apt-get install ${APTGET_OPTS} valgrind \
        && apt-get install ${APTGET_OPTS} libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1    \
                                                liblldb-dev libllvm-ocaml-dev libomp-dev libomp5                \
                                                clang-format clang-tidy clang-tools clang clangd lld lldb       \
                                                llvm-dev llvm-runtime llvm python3-clang \
        && apt-get install ${APTGET_OPTS} python3-dev python3 python3-pip python3-venv \
        && apt-get install ${APTGET_OPTS} default-jdk \
        && apt-get install ${APTGET_OPTS} nodejs npm

RUN     apt-get install ${APTGET_OPTS} groff latexmk texlive texlive-xetex \
        && apt-get install ${APTGET_OPTS} graphviz node-mermaid

# Swift
RUN     apt-get install ${APTGET_OPTS} binutils libc6-dev libcurl4 libedit2 libgcc-9-dev libpython2.7           \
                                                libsqlite3-0 libstdc++-9-dev libz3-dev pkg-config tzdata        \
                                                uuid-dev zlib1g-dev

RUN     if [ $(pip >/dev/null 2>&1) ]; then export 

RUN     apt-get update && apt-get upgrade -y