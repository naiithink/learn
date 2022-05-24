# Image Info
ARG     IMAGE="ubuntu" IMAGE_TAG="22.04" \
        MAINTAINER="naiithink" \
        DATE_MODIFIED="2022-05-24"

# Build Info
FROM    ${IMAGE}:${IMAGE_TAG}
LABEL   image.maintainer=${MAINTAINER} \
        image.modified=${DATE_MODIFIED}

# Minimization
# ARG     apt-get yes | unminimize

# Debian
ARG     DEBIAN_FRONTEND=noninteractive \
        APTGET_OPTS="-y --no-install-recommends"

# General Packages
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install ${APTGET_OPTS} automake build-essential ca-certificates cmake curl git gnupg2 wget   \
        && apt-get install ${APTGET_OPTS} libc6-dbg libncurses-dev libtool-bin libxml2-dev                      \
        && apt-get install ${APTGET_OPTS} ffmpeg gawk ghostscript pandoc tesseract \
        && apt-get install ${APTGET_OPTS} emacs vim

# Some More Packages
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install ${APTGET_OPTS} clang-format clang-tidy clang-tools clang clangd libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1 liblldb-dev libllvm-ocaml-dev libomp-dev libomp5 lld lldb llvm-dev llvm-runtime llvm python3-clang \
        && apt-get install ${APTGET_OPTS} python3 python3-dev python3-pip python3-venv \
        && apt-get install ${APTGET_OPTS} default-jdk \
        && apt-get install ${APTGET_OPTS} nodejs npm \
        && apt-get install ${APTGET_OPTS} valgrind




ARG     VARIANT="ubuntu-22.04"
FROM    mcr.microsoft.com/vscode/devcontainers/base:${VARIANT}

RUN     unminimize
RUN     apt-get update && export DEBIAN_FRONTEND=noninteractive \
        && apt-get -y install --no-install-recommends automake build-essential gnupg2 libtool-bin libncurses-dev        \
                                                        libc6-dbg libxml2-dev wget                                       \
        && apt-get -y install --no-install-recommends ffmpeg gawk ghostscript ghostscript-doc pandoc tesseract \
        && apt-get -y install --no-install-recommends emacs vim

RUN     apt-get update && apt-get -y upgrade \
        && apt-get install -y --no-install-recommends gdb \
        && apt-get install -y --no-install-recommends clang-format clang-tidy clang-tools clang clangd libc++-dev       \
                                                        libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1         \
                                                        liblldb-dev libllvm-ocaml-dev libomp-dev libomp5 lld lldb       \
                                                        llvm-dev llvm-runtime llvm python3-clang                        \
        && apt-get install -y --no-install-recommends python3 python3-dev python3-pip python3-venv \
        && apt-get install -y --no-install-recommends default-jdk \
        && apt-get install -y --no-install-recommends nodejs npm \
        && apt-get install -y --no-install-recommends groff texlive texlive-xetex latexmk \
        && apt-get install -y --no-install-recommends valgrind
#         && apt-get install binutils libc6-dev libcurl4 libedit2 libgcc-9-dev libpython2.7 libsqlite3-0 libstdc++-9-dev  \
#                                                         libz3-dev pkg-config tzdata uuid-dev zlib1g-dev

# Stand-alone
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install -y --no-install-recommends git ghostscript  \
        && apt-get install -y --no-install-recommends graphviz node-mermaid