# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.224.2/containers/debian/.devcontainer/base.Dockerfile

# [Choice] Debian version (use bullseye on local arm64/Apple Silicon): bullseye, buster
ARG     VARIANT="bullseye"
FROM    mcr.microsoft.com/vscode/devcontainers/base:0-${VARIANT}

# ** [Optional] Uncomment this section to install additional packages. **
RUN     apt-get update && export DEBIAN_FRONTEND=noninteractive \
        && apt-get -y install --no-install-recommends automake build-essential curl libtool-bin libncurses-dev libc6-dbg libxml2-dev

# ca-certificates gnupg2

# Some more packages
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install -y --no-install-recommends clang-format clang-tidy clang-tools clang clangd libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1 liblldb-dev libllvm-ocaml-dev libomp-dev libomp5 lld lldb llvm-dev llvm-runtime llvm python3-clang \
        && apt-get install -y --no-install-recommends valgrind