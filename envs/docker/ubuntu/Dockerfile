FROM    ubuntu:20.04

ENV     DEBIAN_FRONTEND=noninteractive

RUN     apt-get update && apt-get -y upgrade &&\
        apt-get install -y automake autotools-dev build-essential libtool-bin libncurses-dev libc6-dbg &&\
        apt-get install -y git &&\
        apt-get install -y python3 python3-dev python3-pip python3-venv &&\
        apt-get install -y nodejs npm

#llvm-project
RUN     apt-get install -y clang-format clang-tidy clang-tools clang clangd libc++-dev libc++1 libc++abi-dev libc++abi1 libclang-dev libclang1 liblldb-dev libllvm-ocaml-dev libomp-dev libomp5 lld lldb llvm-dev llvm-runtime llvm python3-clang

# WORKDIR /usr/local/src

# RUN     git clone https://github.com/vim/vim.git
# WORKDIR /usr/local/src/vim/src
# RUN     make &&\
#         make install

WORKDIR /usr/local/src

RUN     git clone https://github.com/vim/vim.git
WORKDIR /usr/local/src/vim/src
RUN     make &&\
        make install

WORKDIR /usr/local/src

RUN     git clone git://sourceware.org/git/valgrind.git
WORKDIR /usr/local/src/valgrind
RUN     ./autogen.sh &&\
        mkdir -p /opt/valgrind &&\
        ./configure --prefix=/opt/valgrind/ &&\
        make && make install

WORKDIR /

RUN     echo "" >> /etc/bash.bashrc &&\
        echo "# Custom Configs" >> /etc/bash.bashrc &&\
        echo "export PATH=\"$PATH:/opt/valgrind/bin\"" >> /etc/bash.bashrc &&\
        echo "alias valgrind=\"/opt/valgrind/bin/valgrind\"" >> /etc/bash.bashrc