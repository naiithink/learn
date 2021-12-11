FROM ubuntu:20.04

RUN apt-get -y update
RUN apt-get -y upgrade
RUN apt-get install -y build-essential libtool-bin libncurses-dev
RUN apt-get install -y git
RUN git clone https://github.com/Microsoft/vcpkg.git
RUN ./vcpkg/bootstrap-vcpkg.sh
RUN ./vcpkg/vcpkg integrate install

RUN mkdir vim
RUN git clone https://github.com/vim/vim.git
RUN git -C vim pull
RUN make -C vim/src
RUN make -C vim/src install

RUN curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash
RUN apt-get install -y libcs50

ENV CC="clang"
ENV CFLAGS="-fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow"
ENV LDLIBS="-lcrypt -lcs50 -lm"

RUN echo "Build Succeeded."
