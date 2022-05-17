template/tex
============

:date:      2022-05-17
:status:    setup in progress

.. _to-do:

To Do
-----

* TeX Makefile
* ``fontspec`` script -> |FONTSPEC_REPO|_

.. _devcontainer:

Dev Container
-------------

:Dockerfile: `See <.devcontainer/Dockerfile>`_

..
    do not uncomment, security warn
    .. include:: .devcontainer/Dockerfile
        :literal:

.. _devcontainer-expected-tex:

Expected TeX
~~~~~~~~~~~~

* BibTeX
* LaTeX
* LuaTeX
* XeLaTeX

.. _devcontainer-apt-packages:

APT Packages
~~~~~~~~~~~~

* `texlive <https://packages.ubuntu.com/search?keywords=texlive&searchon=names&suite=jammy&section=all>`_
* `texlive-xetex <https://packages.ubuntu.com/search?keywords=texlive-xetex&searchon=names&suite=jammy&section=all>`_
* `latexmk <https://packages.ubuntu.com/search?keywords=latexmk&searchon=names&suite=jammy&section=all>`_
* `groff <https://packages.ubuntu.com/search?keywords=groff&searchon=names&suite=jammy&section=all>`_

.. _devcontainer-info:

Info
~~~~

.. list-table::
    :align: left
    :widths: 16 72
    :stub-columns: 1

    * - ``docker run``
      - | According to the |DOCKER_DOCS|_,
        | the exit codes follow the ``chroot`` standard: |CHROOT_EXIT_CODES|_.

.. _common-problems:

Common Problems
---------------

.. list-table::
    :align: left
    :widths: 2 33 55
    :header-rows: 1
    :stub-columns: 1

    * -
      - Problem
      - Related Info
    * - 01
      - | [:ref:`devcontainer`]
        | ``docker build`` returns ``100``
      - | Try checking the ``EOL`` sequence (``LF``, ``CRLF``).
        | cprob-01_

.. |FONTSPEC_REPO|          replace:: naiithink/fontspec
.. _FONTSPEC_REPO:          https://github.com/naiithink/fontspec
.. |DOCKER_DOCS|            replace:: documentation
.. _DOCKER_DOCS:            https://docs.docker.com/engine/reference/run/#exit-status
.. |CHROOT_EXIT_CODES|      replace:: Appendix E. Exit Codes With Special Meanings
.. _CHROOT_EXIT_CODES:      https://tldp.org/LDP/abs/html/exitcodes.html

.. _cprob-01:               https://forums.docker.com/t/docker-build-returns-exit-code-100/119303
