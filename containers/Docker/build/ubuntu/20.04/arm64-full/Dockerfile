FROM ubuntu:20.04

RUN apt-get -y update
RUN apt-get -y upgrade
RUN apt-get install -y build-essential libtool-bin libncurses-dev
RUN yes | unminimize
RUN apt-get install -y git

RUN mkdir vim
RUN git clone https://github.com/vim/vim.git
RUN git -C vim pull
RUN make -C vim/src
RUN make -C vim/src install

RUN echo "Build Succeeded."
