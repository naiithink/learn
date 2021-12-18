FROM    ubuntu:20.04

RUN     apt-get yes | unminimize &&\
        apt-get update && apt-get -y upgrade &&\
        apt-get install -y build-essential libtool-bin libncurses-dev &&\
        apt-get install -y git

RUN     git clone https://github.com/vim/vim.git
WORKDIR /vim/src
RUN     make &&\
        make install

WORKDIR /

RUN     git clone git://sourceware.org/git/valgrind.git
WORKDIR /valgrind
RUN     ./autogen.sh &&\
        mkdir -p /opt/valgrind &&\
        ./configure --prefix=/opt/valgrind/ &&\
        make && make install

WORKDIR /

RUN     echo "" >> /etc/bash.bashrc &&\
        echo "# Custom config" >> /etc/bash.bashrc &&\
        echo "export PATH="$PATH:/opt/valgrind/bin"" >> /etc/bash.bashrc &&\
        echo "export alias valgrind="/opt/valgrind/bin/valgrind"" >> /etc/bash.bashrc