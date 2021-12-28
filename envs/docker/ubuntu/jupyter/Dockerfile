FROM    ubuntu:20.04

RUN     apt-get update && apt-get -y upgrade &&\
        apt-get install -y build-essential libtool-bin libncurses-dev libc6-dbg &&\
        apt-get install -y git &&\
        apt-get install -y python3 python3-dev python3-pip python3-venv &&\
        apt-get install -y nodejs npm

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

RUN     python3 -m pip install -U pip &&\
        python3 -m pip install jupyterlab juptyer-c-kernel bash_kernel &&\
        python3 -m pip install  &&\
        install_c_kernel &&\
        python3 -m bash_kernel.install &&\
        npm install -g tslab &&\
        INSTALL_TRIES=3 \
        if [ $? -eq 0 ] \
        then \
                tslab install [--python=python3] \
                tslab install \
        elif [ INSTALL_TRIES -gt 0 ] \
        then \
                npm install -g tslab \
                $(( $INSTALL_TRIES = $INSTALL_TRIES - 1 )) \
        else \
                echo "InstallError: tslab"\
        fi

RUN     echo "" >> /etc/bash.bashrc &&\
        echo "# Custom config" >> /etc/bash.bashrc &&\
        echo "export PATH="$PATH:/opt/valgrind/bin"" >> /etc/bash.bashrc &&\
        echo "export alias valgrind="/opt/valgrind/bin/valgrind"" >> /etc/bash.bashrc &&\
        echo "export alias nai-jupyter-lab="jupyter lab --no-browser --ip 0.0.0.0 --port 8888 --allow-root"" >> /etc/bash.bashrc