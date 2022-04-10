<link rel="stylesheet" type="text/css" href="mystyle.css" />

# $\LaTeX$

The document preparation system, opposed to [WYSIWYG](https://wikipedia.org/wiki/WYSIWYG).

Ref:

- [latex-project.org](https://www.latex-project.org/help/documentation/usrguide.pdf)
- [LaTeX - wikipedia.org](https://en.wikipedia.org/wiki/LaTeX)
- [LaTeX/Document Structure - wikibooks.org](https://en.wikibooks.org/wiki/LaTeX/Document_Structure)
- [Learn LaTeX in 30 minutes - overleaf.com](https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes#The_preamble_of_a_document)
- [The geometry package - mirrors.ctan.org](http://mirrors.ctan.org/macros/latex/contrib/geometry/geometry.pdf)

<br />

## Shorts

- Comments are preceded by `%`.

<br />

## Global Structure

```tex
\documentclass[<options>]{<class>}

\begin{document}

...

\end{document}

% comments or temporary text goes down here,
% LaTeX will never try to typeset them.
```

<br />

## Preamble

### Document Classes

> Telling $\LaTeX$ which layouts standard to be used.

Layouts standards are contained within _class files_ (`.cls`),<br />
which you can create your own.

<br />

```tex
"\documentclass"    "["    options    "]"    "{"    class    "}"
```

<br />

> **`options`**
> 
> - comma-separated
> - customizes the behavior of the document class
> 
> **`class`**
> 
> - specifies the .cls file to use for the document

<br />

**e.g.,**

```tex
\documentclass[11pt,twoside,a4paper]{article}
```

<br />

### Packages

```tex
"\usepackage"    "["    options    "]"    "{"    package    "}"
```

<br />

> **`options`**
> 
> - comma-separated
> - options for the package
> 
> **`package`**
> 
> - specifies a package to include into the document

<br />

## The `document` Environment

### Top Matter

> Info about the document itself.

<br />

**e.g.,**

```tex
\documentclass[12pt, a4paper]{article}

\title{Hello, World!}
\author{naiithink}
\date{April 2022}

\begin{document}

\maketitle

\end{document}
```

<br />

> Notice the `\maketitle` command.

<br />

### Abstract

```tex
\documentclass[12pt, a4paper]{article}

\begin{document}

\begin{abstract}

your abstract goes here...

\end{abstract}

\end{document}
```

<br />

By default, the title of the abstract is "Abstract".<br />
To change it...

<br />

```tex
\renewcommand{\abstractname}{Your Abstract Title}
```

<br />

### Sectioning Commands

| Command | Level | Notes |
| :------ | :---: | :------ |
| `\part{``part``}`                     | -1 | **not** in `letter` class |
| `\chapter{``chapter``}`               | 0  | **only** `book` and `report` classes |
| `\section{``section``}`               | 1  | **not** in `letter` class |
| `\subsection{``subsection``}`         | 2  | **not** in `letter` class |
| `\subsubsection{``subsubsection``}`   | 3  | **not** in `letter` class |
| `\paragraph{``paragraph``}`           | 4  | **not** in `letter` class |
| `\subparagraph{``subparagraph``}`     | 5  | **not** in `letter` class |

<br />

All the titles of the sections are added automatically to the table of contents (if decided to insert one).

<br />

**e.g.,**

```tex
\chapter{Introduction}
...

\section{Structure}
...

\subsection{Top Matter}
...

\subsubsection{Article Information}
...
```

> [!Notice]
>> No need to use `\begin` and `\end` commands.

<br />

```
====
To be continued...
====
```

<br />

## Page Layout Formatting

> Configuring paper size, margins, footnote, header, orientation, etc.

<br />

<span class="pkg">geometry</span>
<span class="pkg-suggest">calc</span>

<br />

```tex
\usepackage[options]{geometry}
```

<br />

## Commands

> Determining $\LaTeX$ behavior

### Defining a New Command

```tex
\newcommand{new_command}{existing_command}
```

<br />

