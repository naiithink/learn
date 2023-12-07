ARG     VARIANT="ubuntu-22.04"
FROM    mcr.microsoft.com/vscode/devcontainers/base:${VARIANT}

ENV     NODE_MAJOR=20

ARG     APTGET_OPTS="-y --no-install-recommends"

RUN     apt-get update && apt-get upgrade -y && export DEBIAN_FRONTEND=noninteractive

RUN     apt-get install ${APTGET_OPTS} libc6-dbg libncurses-dev libtool-bin libxml2-dev                         \
                                                automake build-essential cmake curl gawk gdb git git-lfs wget \
        && apt-get install ${APTGET_OPTS} ca-certificates gnupg2 \
        && apt-get install ${APTGET_OPTS} emacs vim
        # && apt-get install ${APTGET_OPTS} ffmpeg ghostscript pandoc tesseract-ocr
# i686
#         && apt-get install ${APTGET_OPTS} gcc-multilib

RUN     apt-get update \
        && apt-get install -y ca-certificates curl gnupg \
        && mkdir -p /etc/apt/keyrings \
        && curl -fsSL https://deb.nodesource.com/gpgkey/nodesource-repo.gpg.key | sudo gpg --dearmor -o /etc/apt/keyrings/nodesource.gpg \
        && NODE_MAJOR=${NODE_MAJOR} \
        && echo "deb [signed-by=/etc/apt/keyrings/nodesource.gpg] https://deb.nodesource.com/node_$NODE_MAJOR.x nodistro main" | sudo tee /etc/apt/sources.list.d/nodesource.list \
        && apt-get update \
        && apt-get install nodejs -y

RUN     apt-get install ${APTGET_OPTS} python3 python3-dbg python3-dev python3-doc python3-pip python3-tk    \
                                                python3-venv
# RUN     apt-get install ${APTGET_OPTS} valgrind \
        # && apt-get install ${APTGET_OPTS} libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1    \
        #                                         liblldb-dev libllvm-ocaml-dev libomp-dev libomp5                \
        #                                         clang-format clang-tidy clang-tools clang clangd lld lldb       \
        #                                         llvm-dev llvm-runtime llvm python3-clang \
        # && apt-get install ${APTGET_OPTS} ruby-full sbcl \
        # && apt-get install ${APTGET_OPTS} openjdk-17-jdk \
        # && apt-get install ${APTGET_OPTS} emscripten \

RUN     apt-get install ${APTGET_OPTS} mysql-server sqlite3
        # && apt-get install ${APTGET_OPTS} composer php-mysql php-curl

# RUN     apt-get install ${APTGET_OPTS} groff latexmk texlive texlive-xetex \
#         && apt-get install ${APTGET_OPTS} graphviz node-mermaid

# Swift
# RUN     apt-get install ${APTGET_OPTS} binutils libc6-dev libcurl4 libedit2 libgcc-9-dev libpython2.7           \
#                                                 libsqlite3-0 libstdc++-9-dev libz3-dev pkg-config tzdata        \
#                                                 uuid-dev zlib1g-dev
