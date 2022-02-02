FROM    ubuntu:20.04

RUN     apt-get update && apt-get -y upgrade &&\
        apt-get install -y build-essential libtool-bin libncurses-dev libc6-dbg &&\
        # llvm
        apt-get install swig libedit-dev libncurses5-dev &&\
        apt-get install -y git &&\
        apt-get install -y python3 python3-dev python3-pip python3-venv &&\
        apt-get install -y nodejs npm

WORKDIR /opt

RUN     git clone https://github.com/llvm/llvm-project.git
WORKDIR /opt/llvm-project
RUN     

RUN     git clone https://github.com/vim/vim.git
WORKDIR /opt/vim/src
RUN     make &&\
        make install

WORKDIR /opt

RUN     git clone git://sourceware.org/git/valgrind.git
WORKDIR /opt/valgrind
RUN     ./autogen.sh &&\
        mkdir -p /opt/valgrind &&\
        ./configure --prefix=/opt/valgrind/ &&\
        make && make install

WORKDIR /

RUN     echo "" >> /etc/bash.bashrc &&\
        echo "# Custom config" >> /etc/bash.bashrc &&\
        echo "export PATH="$PATH:/opt/valgrind/bin"" >> /etc/bash.bashrc &&\
        echo "export alias valgrind="/opt/valgrind/bin/valgrind"" >> /etc/bash.bashrc