# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.217.1/containers/ubuntu/.devcontainer/base.Dockerfile

# [Choice] Ubuntu version (use hirsute or bionic on local arm64/Apple Silicon): hirsute, focal, bionic
ARG VARIANT="hirsute"
FROM --platform=linux/amd64 mcr.microsoft.com/vscode/devcontainers/base:0-${VARIANT}

# [Optional] Uncomment this section to install additional OS packages.
RUN     apt-get update && export DEBIAN_FRONTEND=noninteractive &&\
        apt-get -y install automake autotools-dev build-essential libtool-bin libncurses-dev libc6-dbg &&\
        apt-get -y install clang-format clang-tidy clang-tools clang clangd libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1 liblldb-dev libllvm-ocaml-dev libomp-dev libomp5 lld lldb llvm-dev llvm-runtime llvm python3-clang

# valgrind
RUN     mkdir /usr/local/src/valgrind &&\
        git clone git://sourceware.org/git/valgrind.git /usr/local/src/valgrind &&\
        ./usr/local/src/valgrind/autogen.sh &&\
        ./usr/local/src/valgrind/configure &&\
        make -C /usr/local/src/valgrind &&\
        make -C /usr/local/src/valgrind install