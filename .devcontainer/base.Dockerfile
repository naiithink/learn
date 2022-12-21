# [Choice] Ubuntu version (use hirsute or bionic on local arm64/Apple Silicon): hirsute, focal, bionic
ARG     VARIANT="focal"
FROM    amd64/buildpack-deps:${VARIANT}-curl

# Options for setup script
ARG     INSTALL_ZSH="true"
ARG     UPGRADE_PACKAGES="true"
ARG     USERNAME=vscode
ARG     USER_UID=1000
ARG     USER_GID=$USER_UID

RUN     ulimit -c unlimited

# Install needed packages and setup non-root user. Use a separate RUN statement to add your own dependencies.
COPY    library-scripts/*.sh library-scripts/*.env /tmp/library-scripts/
RUN     yes | unminimize 2>&1 \ 
        && bash /tmp/library-scripts/common-debian.sh "${INSTALL_ZSH}" "${USERNAME}" "${USER_UID}" "${USER_GID}" "${UPGRADE_PACKAGES}" "true" "true" \
        && apt-get clean -y && rm -rf /var/lib/apt/lists/* /tmp/library-scripts

# [Optional] Uncomment this section to install additional OS packages.
RUN     apt-get update && export DEBIAN_FRONTEND=noninteractive \
        && apt-get -y install --no-install-recommends automake build-essential gnupg2 libtool-bin libncurses-dev libc6-dbg libxml2-dev

# Some More Packages
RUN     apt-get update && apt-get -y upgrade \
        && apt-get install -y --no-install-recommends gdb \
        # && apt-get install -y --no-install-recommends clang-format clang-tidy clang-tools clang clangd libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1 liblldb-dev libllvm-ocaml-dev libomp-dev libomp5 lld lldb llvm-dev llvm-runtime llvm python3-clang \
        && apt-get install -y --no-install-recommends python3 python3-dev python3-pip python3-venv \
        && apt-get install -y --no-install-recommends ruby-full \
        # && apt-get install -y --no-install-recommends default-jdk \
        # && apt-get install -y --no-install-recommends nodejs npm \
        && apt-get install -y --no-install-recommends groff texlive latexmk\
        && apt-get install -y --no-install-recommends valgrind \
        && apt-get install -y --no-install-recommends dosbox dosbox-debug
        # Swift
        # && apt-get install binutils libc6-dev libcurl4 libedit2 libgcc-9-dev libpython2.7 libsqlite3-0 libstdc++-9-dev libz3-dev pkg-config tzdata uuid-dev zlib1g-dev
