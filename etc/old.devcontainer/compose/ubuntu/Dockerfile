# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.217.1/containers/ubuntu/.devcontainer/base.Dockerfile

# [Choice] Ubuntu version (use hirsute or bionic on local arm64/Apple Silicon): hirsute, focal, bionic
ARG     VARIANT="hirsute"
FROM    mcr.microsoft.com/vscode/devcontainers/base:0-${VARIANT}

# build time
ENV     CC="clang" \
        CFLAGS="-g" \
        CXX="clang++" \
        CXXFLAGS="-g"
ARG     SRC_DIR=/home/src \
        DEBIAN_FRONTEND=noninteractive

# general packages
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install -y gnupg2 \
        && apt-get install -y --no-install-recommends build-essential ca-certificates libtool-bin libncurses-dev libc6-dbg

# more packages
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install -y clang-format clang-tidy clang-tools clang clangd libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1 liblldb-dev libllvm-ocaml-dev libomp-dev libomp5 lld lldb llvm-dev llvm-runtime llvm python3-clang \
        && apt-get install -y valgrind