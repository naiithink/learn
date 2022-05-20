---
jupyter:
  interpreter:
    hash: aee8b7b246df8f9039afb4144a1f6fd8d2ca17a180786b69acc140d282b71a49
  kernelspec:
    display_name: Python 3 (ipykernel)
    language: python
    name: python3
  language_info:
    codemirror_mode:
      name: ipython
      version: 3
    file_extension: .py
    mimetype: text/x-python
    name: python
    nbconvert_exporter: python
    pygments_lexer: ipython3
    version: 3.10.4
  nbformat: 4
  nbformat_minor: 4
---

<div class="cell markdown">

# $\LaTeX{}$: Things You Need to Know (1)

**Notes:**

-   Some of $\LaTeX{}$ syntax might not be rendered correctly with
    $\KaTeX$.  
    Notice `%#OUTPUT WARN` at the very top of the cell.

**Terms**

| Term              | Definition                                 |
|:------------------|:-------------------------------------------|
| 'char' \| 'chars' | 'character' \| 'characters', respectively  |
| 'dir' \| 'dirs'   | 'directory' \| 'directories', respectively |
| 'TOC'             | table of contents                          |

**References:**

-   [Tobias Oetiker, et al., The Not So Short Introduction to
    $\LaTeX2\varepsilon$](https://ctan.org/pkg/lshort-english?lang=en "A (Not So) Short Introduction to LaTeX2ε")

</div>

<div class="cell code">

``` python
%xmode minimal
```

</div>

<div class="cell markdown">

## Publishing Something

    manuscript           manuscript
    ----------    -->    ----------    -->    Typesetter
    Authors              Book
                         Designer

    \________/           \________/           \________/
      |                    |                    |
      You                  LaTeX                TeX

</div>

<div class="cell markdown">

## 1. $\LaTeX{}$ Input Files

The input for $\LaTeX{}$ is **a plain text file** which contains:

-   Text of the document
-   $\LaTeX{}$ commands

</div>

<div class="cell markdown">

### 1.1 Spaces

-   "Whitespace" chars — blank or tab — are treated uniformly as
    "space".  
    *Several consecutive* whitespace chars are treated as *one* space.
-   Whitespace at the start of a line is generally ignored.
-   A single line break is treated as "whitespace".

</div>

<div class="cell code"
vscode="{&quot;languageId&quot;:&quot;latex&quot;}">

``` python
%%latex

hello,    world  
    hello, world  
hello, world

An empty line starts a new paragraph.



Several empty lines are treated the same as one empty line.
```

</div>

<div class="cell markdown">

### 1.2 Special Characters

    # $ % ^ & _ { } ~ \

These symbols are reserved.  
Normally, they are not printed out if entered directly.

To use them in a document, precede them with a prefix backslash.

> **Note:**  
> `\\` ↛ `\`
>
> -   Use the `\textbackslash` command instead.  
> -   `\\` is used for line breaking.

</div>

<div class="cell code"
vscode="{&quot;languageId&quot;:&quot;latex&quot;}">

``` python
%%latex
%#OUTPUT WARN

\# \$ \% \^ \& \_ \{ \} \~{}
\textbackslash
```

</div>

<div class="cell markdown">

### 1.3 $\LaTeX{}$ Commands

$\LaTeX{}$ commands are case sensitive, and take one of the following
formats:

-   Start with a backslash `\` and then have a name consisting of
    letters only.  
    Command names are terminated by a space, a number or any other
    'non-letter'.

-   They consist of a backslash and exactly one non-letter.

-   Many commands exist in a 'starred variant' where a star in appended
    to the command name.

          \chapter*{}

$\LaTeX{}$ ignores whitespace after commands.  
To get a space after a command, either:

-   put an empty parameter `{}` (to stop $\LaTeX{}$ from eating up all
    the whitespace after the command) and a blank
-   or a special space command after the command name.

</div>

<div class="cell code"
vscode="{&quot;languageId&quot;:&quot;latex&quot;}">

``` python
%%latex
%#OUTPUT WARN

New \TeX users may miss whitespaces  
after a command. % renders wrong  
Experienced \TeX{} users are  
\TeX perts, and know how to use  
whitespaces. % renders correct
```

</div>

<div class="cell markdown">

#### Command Parameter

    \command[optional parameter]{parameter}

</div>

<div class="cell code"
vscode="{&quot;languageId&quot;:&quot;latex&quot;}">

``` python
%%latex
%#OUTPUT WARN

You can \textls{lean} on me!
```

</div>

<div class="cell markdown">

#### Newline

    \newline

</div>

<div class="cell code"
vscode="{&quot;languageId&quot;:&quot;latex&quot;}">

``` python
%%latex
%#OUTPUT WARN

Please, start a new line right here! \newline Thank you!
```

</div>

<div class="cell markdown">

### 1.4 Comments

When $\LaTeX{}$ encounters a `%` char while processing an input file,  
it ignores the rest og the present line, the line break,  
and all whitespace the beginning of the next line.

</div>

<div class="cell code"
vscode="{&quot;languageId&quot;:&quot;latex&quot;}">

``` python
%%latex
%# OUTPUT WARN

This is an % eiei
% Better: instructive <----
example: Supercal%
              ifragilist%
    icevpialidocious
```

</div>

<div class="cell markdown">

#### Long Comments

The `comment` environment provided by the `verbatim` package can also be
used.

> **Note:**  
> This won't work inside complex environments, like math for example.

</div>

<div class="cell code"
vscode="{&quot;languageId&quot;:&quot;latex&quot;}">

``` python
%%latex
%#OUTPUT WARN

\usepackage{verbatim}

This is another
\begin{comment}
rather stupid,
but helpful
\end{comment}
example for embedding
comments in your document.
```

</div>

<div class="cell markdown">

## 2. Input File Structure

    --------------------+--------------------
                        | \documentclass{...}
    Preamble            | \usepackage{...}
                        | ...
    --------------------+--------------------
                        | \begin{document}
    Body                | ...
                        | \end{document}
    --------------------+--------------------
                LaTeX-ignored area

### Preamble Area

Every input file must start with the command

``` latex
\documentclass{...}
```

-   Specifies the sort of a document.

After that, add commands to influence the style of the while document,  
or load packages that add new features to the $\LaTeX{}$ system.

``` latex
\usepackage{...}
```

### Body Area

Start the body of the text with the command

``` latex
\begin{document}
```

To tell $\LaTeX{}$ to call it a day, at the end of the document, add

``` latex
\end{document}
```

Everything follows this command will be ignored by $\LaTeX{}$.

> **A Minimal $\LaTeX{}$ File**  
> doc: `examples/fig1.1/MinimalLaTeXFile.tex`
>
> > ``` latex
> > \documentclass{article}
> > \begin{document}
> > Small is beautiful.
> > \end{document}
> > ```

</div>

<div class="cell markdown">

## 3. A Typical Command Line Session

> **Note:**  
> This description assumes that a working $\LaTeX{}$ installation
> already sits on your computer.

1.  Edit/Create your $\LaTeX{}$ input file. This file must be plain
    ASCII text.  
    When picking a name for your file, make sure it bears the extension
    `.tex`
2.  Open a shell, `cd` to the dir where your input is located and run
    $\LaTeX{}$ on your input file.  
    If successful you will end up with a `.pdf` file.
    -   It may be necessary to run $\LaTeX{}$ several times to get the
        TOC and all internal references right.
    -   When your input file has a bug, $\LaTeX{}$ will tell you about
        it and stop processing your input file.  
        Type `ctrl-D` to get back to the command line.  

    <!-- -->

        xelatex foo.tex

> **Example of a Realistic Journal Article.**  
> doc: `examples/fig1.2/JournalArticle.tex`
>
> > ``` latex
> > \documentclass[a4paper,11pt]{article}
> > % define the title
> > \author{H.~Partl}
> > \title{Minimalism}
> > \begin{document}
> > % generates the title
> > \maketitle
> > % insert the table of contents
> > \tableofcontents
> > \section{Some Interesting Words}
> > Well, and here begins my lovely article.
> > \section{Good Bye World}
> > \ldots{} and here it ends.
> > \end{document}
> > ```

</div>

<div class="cell markdown">

## 4. The Layout of the Document

</div>

<div class="cell markdown">

### 4.1 Document Classes

``` latex
\documentclass[options]{class}
```

-   *`class`* specifies the type of document to be created.
-   *`options`* customizes the behavior of the document class.

#### 4.1.1 Classes Explained in This Introduction

| Class     | Details                                                                                                             |
|:----------|:--------------------------------------------------------------------------------------------------------------------|
| `article` | for articles in scientific journals, presentations, short reports, program documentation, invitations, ...          |
| `proc`    | a class for proceedings based on the article class.                                                                 |
| `minimal` | is as small as it can get. It only sets a page size and a base font.<br />It is mainly used for debugging purposes. |
| `report`  | for longer reports containing several chapters, small books, PhD theses, ...                                        |
| `book`    | for real books                                                                                                      |
| `slides`  | for slides. The class uses big sans serif letters. You might want to consider using the `Beamer` class instead.     |

The $\LaTeX{}2\varepsilon{}$ distribution provides additional classes
for other documents, including `letters` and `slides`.

#### 4.1.2 Common Options for the Standard Document Classes

| Option                          | Details                                                                                                                                                                                                                                                                                                                                                               |
|:--------------------------------|:----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| `10pt, 11pt, 12pt`              | Sets the size of the main font in the document. If no option is specified, 10pt is assumed.                                                                                                                                                                                                                                                                           |
| `a4paper, letterpaper, ...`     | Defines the paper size. The default size is `letterpaper`.<br />Besides that, `a5paper`, `b5paper`, `executivepaper`, and `legalpaper` can be specified.                                                                                                                                                                                                              |
| `fleqn` — flush left equations  | Typesets displayed formulae left-aligned instead of centred.                                                                                                                                                                                                                                                                                                          |
| `leqno` — left equation numbers | Places the numbering of formulae on the left hand side instead of the right.                                                                                                                                                                                                                                                                                          |
| `titlepage, notitlepage`        | Specifies whether a new page should be started after the document title or not.<br />The `article` class does not start a new page by default, while `report` and `book` do.                                                                                                                                                                                          |
| `onecolumn, twocolumn`          | Instructs $\LaTeX{}$ to typeset the document in one column or two columns.                                                                                                                                                                                                                                                                                            |
| `twoside, oneside`              | Specifies whether double or single sided output should be generated.<br />The classes `article` and `report` are single sided and the `book` class is double sided by default.<br />**Note that** this option concerns the style of the document only.<br />The option `twoside` does not tell the printer you use that it should actually make a two-sided printout. |
| `landscape`                     | Changes the layout of the document to print in landscape mode.                                                                                                                                                                                                                                                                                                        |
| `openright, openany`            | Makes chapters begin either only on right hand pages or on the next page available.<br />This does not work with the `article` class, as it does not know about chapters.<br />The `report` class by default starts chapters on the next page available<br />and the `book` class starts them on right hand pages.                                                    |

**Example**

``` latex
\documentclass[11pt,twoside,a4paper]{article}
```

This command instructs $\LaTeX{}$ to typeset the document as an
*a**r**t**i**c**l**e* with a base font size of
*e**l**e**v**e**n* *p**o**i**n**t**s*,  
and to produce a layout suitable for *d**o**u**b**l**e* *s**i**d**e**d*
printing on *A*4 *p**a**p**e**r*.

</div>

<div class="cell markdown">

### 4.2 Packages

Packages enhance the capabilities of $\LaTeX{}$.

``` latex
\usepackage[options]{package}
```

-   *`package`* is the name of the package.
-   *`options`* is a list of keywords that trigger special features in
    the package.

#### 4.2.1 Some of the Packages Distributed with $\LaTeX{}$

| Package    | Descriptions                                                                                                                                                                                                                                                                                                                                                                                     |
|:-----------|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| `doc`      | Allows the documentation of $\LaTeX{}$ programs.<br />Described in `doc.dtx`[^a](This%20file%20should%20be%20installed%20on%20your%20system,) and in $The\~\LaTeX{}\~Companion$\[^2\].                                                                                                                                                                                                           |
| `exscale`  | Provides scaled versions of the math extension font.<br />Described in `ltexscale.dtx`.                                                                                                                                                                                                                                                                                                          |
| `fontenc`  | Specifies which font encoding $\LaTeX{}$ should use.<br />Described in `ltoutenc.dtx`.                                                                                                                                                                                                                                                                                                           |
| `ifthen`   | Provides commands of the form<br />'if..then do..otherwise do..'<br />Described in `ifthen.dtx` and $The\~\LaTeX{}\~Companion$\[^2\].                                                                                                                                                                                                                                                            |
| `latexsym` | To access the $\LaTeX{}$ symbol font, you should use the `latexsym` package.<br />Described in `latexsym.dtx` and in $The\~\LaTeX{}$\~Companion$\[^2\].<br />The commands defined by the `latexsym` package are:<br />`\mho` ℧<br />`\Join` ⋈<br />`\Box` □<br />`\Diamond` ◇<br />`\leadsto`⤳<br />`\sqsubset` ⊏<br />`\sqsupset` ⊐<br />`\lhd` ⊲<br />`\unlhd` ⊴<br />`\rhd` ⊳<br />`\unrhd` ⊵ |
| `makeidx`  | Provides commands for producing indexes.<br />Described in section 4.2 and in $The\~\LaTeX{}\~Companion$\[^2\].                                                                                                                                                                                                                                                                                  |
| `syntonly` | Processes a document without typesetting it.                                                                                                                                                                                                                                                                                                                                                     |
| `inputenc` | Allows the specification of an input encoding such as ASCII, ISO Latin-1, ISO Latin-2,<br />437/850 IBM code pages, Apple Mac- intosh, Next, ANSI-Windows or user-defined one.<br />Described in `inputenc.dtx`.                                                                                                                                                                                 |

Others are provided separately.

> You may find more information on the packages installed at your site
> in your *L**o**c**a**l* *G**u**i**d**e*\[^1\].  
> The prime source for information about $\LaTeX{}$ packages is
> $The\~\LaTeX\~Companion$\[^2\].  
> It contains descriptions on hundreds of packages, along with
> information of how to write your own extensions to
> $\LaTeX{}2\varepsilon{}$.

Modern $\TeX$ distributions come with a large number of packages
preinstalled.  
If you are working on a Unix system, use the command `texdoc` for
accessing package documentation.

------------------------------------------------------------------------

    and you should be able to get a `dvi` file by typing `latex doc.dtx` in any directory  
    where you have write permission. The same is true for all the other files mentioned in this table.

</div>

<div class="cell markdown">

### 4.3 Page Styles

$\LaTeX{}$ supports three predefined header/footer combinations —
so-called page *s**t**y**l**e**s*.

``` latex
\pagestyle{style}
```

It is possible to change the page style of the current page.

``` latex
\thispagestyle{style}
```

-   *`style`* defines which page style to be used.

#### 4.3.1 The Predefined Page Styles of $\LaTeX{}$

| Style      | Definitions                                                                                                             |
|:-----------|:------------------------------------------------------------------------------------------------------------------------|
| `plain`    | prints the page numbers on the bottom of the page, in the middle of the footer.<br />This is the default page style.    |
| `headings` | prints the current chapter heading and the page number in the header on each page,<br />while the footer remains empty. |
| `empty`    | sets both the header and the footer to be empty.                                                                        |

</div>

<div class="cell markdown">

## 5. Files You Might Encounter

When working with $\LaTeX{}$ you will soon find yourself in a maze of
files with various extensions and probably no clue.  
The following list explains the various file types you might encounter
when working with $\TeX$.

> **Note:**  
> This table does not claim to be a complete list of extensions.

| Extension | Description                                                                                                                                                                                                                                    |
|:----------|:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| `.tex`    | $\LaTeX{}$ or $\TeX{}$ input file.<br />Can be compiled with `latex`.                                                                                                                                                                          |
| `.sty`    | $\LaTeX{}$ Macro package.<br />Load this into your $\LaTeX{}$ document using the `\usepackage` command.                                                                                                                                        |
| `.dtx`    | Documented $\TeX{}$. This is the main distribution format for $\LaTeX{}$ style files.<br />If you process a `.dtx` file you get documented macro code of the $\LaTeX{}$ package contained in the `.dtx` file.                                  |
| `.ins`    | The installer for the files contained in the matching `.dtx` file.<br />If you download a $\LaTeX{}$ package from the net, you will normally get a `.dtx` and a `.ins` file.<br />Run $\LaTeX{}$ on the `.ins` file to unpack the `.dtx` file. |
| `.cls`    | Class files define what your document looks like.<br />They are selected with the `\documentclass` command.                                                                                                                                    |
| `.fd`     | Font description file telling $\LaTeX{}$ about new fonts.                                                                                                                                                                                      |

The following files are generated when you run $\LaTeX{}$ on your input
file:

| Extension | Description                                                                                                                                                                                                                                                                                        |
|:----------|:---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| `.dvi`    | Device Independent File.<br />This is the main result of a classical $\LaTeX{}$ compile run.<br />Look at its content with a DVI previewer program or send it to a printer with `dvips` or a similar application.<br />If you are using pdf $\LaTeX{}$ then you should not see any of these files. |
| `.log`    | Gives a detailed account of what happened during the last compiler run.                                                                                                                                                                                                                            |
| `.toc`    | Stores all your section headers.<br />It gets read in for the next compiler run and is used to produce the table of contents.                                                                                                                                                                      |
| `.lof`    | This is like `.toc` but for the list of figures.                                                                                                                                                                                                                                                   |
| `.lot`    | And again the same for the list of tables.                                                                                                                                                                                                                                                         |
| `.aux`    | Another file that transports information from one compiler run to the next.<br />Among other things, the `.aux` file is used to store information associated with cross-references.                                                                                                                |
| `.idx`    | If your document contains an index. $\LaTeX{}$ stores all the words that go into the index in this file.<br />Process this file with `makeindex`.                                                                                                                                                  |
| `.ind`    | The processed .idx file, ready for inclusion into your document on the next compile cycle.                                                                                                                                                                                                         |
| `.ilg`    | Logfile telling what `makeindex` did.                                                                                                                                                                                                                                                              |

</div>

<div class="cell markdown">

## 6. Big Projects

### 6.1 Splitting the Input File

There are two commands for splitting the input file into several parts.

#### 6.1.1 In the Document Body

``` latex
\include{filename}
```

-   Use this command in the document body to insert the contents of
    another file named `filename.tex`.

> **Note:**  
> $\LaTeX{}$ will start a new page before processing the material input
> from `filename.tex`.

#### 6.1.2 In the Preamble

``` latex
\includeonly{filename,filename,...}
```

-   Instructs $\LaTeX{}$ to only input some of the `\include`d files.
-   After this command is executed in the preamble of the document,  
    only `\include` commands for the filenames that are listed in the
    argument of the `\includeonly` command will be executed.

The `\include` command starts typesetting the included text on a new
page.  
This is helpful when you use `\includeonly`, because the page breaks
will not move, even when some include files are omitted.

### 6.2 Injecting Directly

``` latex
\input{filename}
```

### 6.3 Syntax Checking

``` latex
\usepackage{syntonly}
\syntaxonly
```

This makes $\LaTeX{}$ skim through your document only checking for
proper syntax and usage of the commands, but doesn’t produce any (pdf)
output.

> As $\LaTeX{}$ runs faster in this mode you may save yourself valuable
> time.

When you want to produce pages, just comment out the second line.

</div>

<div class="cell markdown">

## ----

## Footer

|         |                                                                                                                                                                                                                                                                                                                                                        |
|:--------|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| \[^1\]: | Each $\LaTeX{}$ installation should provide a so-called $\LaTeX{}$ Local Guide,<br />which explains the things that are special to the local system.<br />It should be contained in a file called `local.tex`.<br />Unfortunately, some lazy sysops do not provide such a document.<br />In this case, go and ask your local $\LaTeX{}$ guru for help. |
| \[^2\]: | Frank Mittelbach, Michel Goossens, Johannes Braams, David Carlisle,<br />Chris Rowley. The LATEX Companion, (2nd Edition). Addison-Wesley,<br />Reading, Massachusetts, 2004, ISBN 0-201-36299-6.                                                                                                                                                      |

</div>
