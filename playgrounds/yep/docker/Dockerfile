FROM --platform=amd64 ubuntu:20.04

RUN apt-get -y update
RUN apt-get -y upgrade
RUN apt-get install -y build-essential libtool-bin libncurses-dev
RUN apt-get install -y git

RUN mkdir vim
RUN git clone https://github.com/vim/vim.git
RUN git -C vim pull
RUN make -C vim/src
RUN make -C vim/src install

# ???
ENV HOME="~/yep"
ENV YEPBINDIR="~/yep/bin"

RUN echo "Build Succeeded."