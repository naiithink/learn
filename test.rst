template/tex
============

:date:      2022-05-13
:status:    To be completed.

To Do
-----

* TeX Makefile
* ``fontspec`` script -> |FONTSPEC_REPO|_

devcontainer
------------

:Dockerfile: `See <.devcontainer/Dockerfile>`_

..
    do not uncomment, security warn
    .. include:: .devcontainer/Dockerfile
        :literal:

Expected TeX
~~~~~~~~~~~~

* BibTeX
* LaTeX
* LuaTeX
* XeLaTeX

APT Packages
~~~~~~~~~~~~

* `texlive <https://packages.ubuntu.com/jammy/texlive>`_
* ``latexmk``

Info
~~~~

.. list-table::
    :align: left
    :width: 72em
    :widths: 16 72
    :stub-columns: 1

    * - ``docker run``
      - | According to the |DOCKERDOCS|_,
        | the exit codes follow the ``chroot`` standard: |CHROOT_EXIT_CODES|_

Common Problems
---------------

.. list-table::
    :align: left
    :width: 72em
    :widths: 33 55
    :header-rows: 1

    * - Problem
      - Related Info
    * - | [devcontainer]
        | ``docker build`` returns ``100``
      - | Try checking the ``EOL`` sequence (``LF``, ``CRLF``).
        | cprob-1_

.. |FONTSPEC_REPO|          replace:: naiithink/fontspec
.. _FONTSPEC_REPO:          https://github.com/naiithink/fontspec
.. |DOCKERDOCS|             replace:: documentation
.. _DOCKERDOCS:             https://docs.docker.com/engine/reference/run/#exit-status
.. |CHROOT_EXIT_CODES|      replace:: Appendix E. Exit Codes With Special Meanings
.. _CHROOT_EXIT_CODES:      https://tldp.org/LDP/abs/html/exitcodes.html

.. _cprob-1:                https://forums.docker.com/t/docker-build-returns-exit-code-100/119303
