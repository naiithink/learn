# [Choice] Debian version (use bullseye on local arm64/Apple Silicon): bullseye, buster
ARG     VARIANT="bullseye"
FROM    amd64/buildpack-deps:${VARIANT}-curl

# [Option] Install zsh
ARG     INSTALL_ZSH="true"
# [Option] Upgrade OS packages to their latest versions
ARG     UPGRADE_PACKAGES="true"
# Install needed packages and setup non-root user. Use a separate RUN statement to add your own dependencies.
ARG     USERNAME=vscode
ARG     USER_UID=1000
ARG     USER_GID=$USER_UID
COPY    library-scripts/*.sh library-scripts/*.env /tmp/library-scripts/
RUN     bash /tmp/library-scripts/common-debian.sh "${INSTALL_ZSH}" "${USERNAME}" "${USER_UID}" "${USER_GID}" "${UPGRADE_PACKAGES}" "true" "true" \
        && apt-get clean -y && rm -rf /var/lib/apt/lists/* /tmp/library-scripts

RUN     git config oh-my-zsh.hide-info 1

# ** [Optional] Uncomment this section to install additional packages. **
RUN     apt-get update && export DEBIAN_FRONTEND=noninteractive \
        && apt-get -y install --no-install-recommends automake build-essential libtool-bin libncurses-dev libc6-dbg libxml2-dev \
        && apt-get install -y --no-install-recommends vim

# Some More Packages
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install -y --no-install-recommends clang-format clang-tidy clang-tools clang clangd libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1 liblldb-dev libllvm-ocaml-dev libomp-dev libomp5 lld lldb llvm-dev llvm-runtime llvm python3-clang \
        && apt-get install -y --no-install-recommends python3 python3-dev python3-pip python3-venv \
        && apt-get install -y --no-install-recommends default-jdk \
        && apt-get install -y --no-install-recommends nodejs npm \
        && apt-get install -y --no-install-recommends valgrind