FROM    jupyter/scipy-notebook

# xeus-cling
# https://github.com/jupyter-xeus/xeus-cling
RUN     conda create -n cling \
        && source activate cling \
        && conda install -y xeus-cling -c conda-forge

# tslab
# https://github.com/yunabe/tslab
RUN     npm install -g tslab \
        && tslab install --version \
        && tslab install --python=python3

# bash_kernel
# https://github.com/takluyver/bash_kernel
RUN     python3 -m pip install bash_kernel \
        && python -m bash_kernel.install