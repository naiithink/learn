# $\LaTeX{}$ Cheatsheet

From `lshort_*.ipynb` Series

<br />

## Files You Might Encounter

When working with $\LaTeX{}$ you will soon find yourself in a maze of files with various extensions and probably no clue.  
The following list explains the various file types you might encounter when working with $\TeX$.

> **Note:**  
> This table does not claim to be a complete list of extensions.

| Extension | Description |
| :-------- | :---------- |
| `.tex`    | $\LaTeX{}$ or $\TeX{}$ input file.<br />Can be compiled with `latex`. |
| `.sty`    | $\LaTeX{}$ Macro package.<br />Load this into your $\LaTeX{}$ document using the `\usepackage` command. |
| `.dtx`    | Documented $\TeX{}$. This is the main distribution format for $\LaTeX{}$ style files.<br />If you process a `.dtx` file you get documented macro code of the $\LaTeX{}$ package contained in the `.dtx` file. |
| `.ins`    | The installer for the files contained in the matching `.dtx` file.<br />If you download a $\LaTeX{}$ package from the net, you will normally get a `.dtx` and a `.ins` file.<br />Run $\LaTeX{}$ on the `.ins` file to unpack the `.dtx` file. |
| `.cls`    | Class files define what your document looks like.<br />They are selected with the `\documentclass` command. |
| `.fd`     | Font description file telling $\LaTeX{}$ about new fonts. |

The following files are generated when you run $\LaTeX{}$ on your input file:

| Extension | Description |
| :-------- | :---------- |
| `.dvi`    | Device Independent File.<br />This is the main result of a classical $\LaTeX{}$ compile run.<br />Look at its content with a DVI previewer program or send it to a printer with `dvips` or a similar application.<br />If you are using pdf $\LaTeX{}$ then you should not see any of these files. |
| `.log`    | Gives a detailed account of what happened during the last compiler run. |
| `.toc`    | Stores all your section headers.<br />It gets read in for the next compiler run and is used to produce the table of contents. |
| `.lof`    | This is like `.toc` but for the list of figures. |
| `.lot`    | And again the same for the list of tables. |
| `.aux`    | Another file that transports information from one compiler run to the next.<br />Among other things, the `.aux` file is used to store information associated with cross-references. |
| `.idx`    | If your document contains an index. $\LaTeX{}$ stores all the words that go into the index in this file.<br />Process this file with `makeindex`. |
| `.ind`    | The processed .idx file, ready for inclusion into your document on the next compile cycle. |
| `.ilg`    | Logfile telling what `makeindex` did. |

<br />

## Common Classes

| Class | Details |
| :---- | :------ |
| `article` | for articles in scientific journals, presentations, short reports, program documentation, invitations, ... |
| `proc` | a class for proceedings based on the article class. |
| `minimal` | is as small as it can get. It only sets a page size and a base font.<br />It is mainly used for debugging purposes. |
| `report` | for longer reports containing several chapters, small books, PhD theses, ... |
| `book` | for real books |
| `slides` | for slides.  The class uses big sans serif letters. You might want to consider using the `Beamer` class instead. |

The $\LaTeX{}2\varepsilon{}$ distribution provides additional classes for other documents, including `letters` and `slides`.

### Common Options for the Standard Document Classes

| Option | Details |
| :----- | :------ |
| `10pt, 11pt, 12pt` | Sets the size of the main font in the document. If no option is specified, 10pt is assumed. |
| `a4paper, letterpaper, ...` | Defines the paper size. The default size is `letterpaper`.<br />Besides that, `a5paper`, `b5paper`, `executivepaper`, and `legalpaper` can be specified. |
| `fleqn` — flush left equations | Typesets displayed formulae left-aligned instead of centred. |
| `leqno` — left equation numbers | Places the numbering of formulae on the left hand side instead of the right. |
| `titlepage, notitlepage` | Specifies whether a new page should be started after the document title or not.<br />The `article` class does not start a new page by default, while `report` and `book` do. |
| `onecolumn, twocolumn` | Instructs $\LaTeX{}$ to typeset the document in one column or two columns. |
| `twoside, oneside` | Specifies whether double or single sided output should be generated.<br />The classes `article` and `report` are single sided and the `book` class is double sided by default.<br />**Note that** this option concerns the style of the document only.<br />The option `twoside` does not tell the printer you use that it should actually make a two-sided printout. |
| `landscape` | Changes the layout of the document to print in landscape mode. |
| `openright, openany` | Makes chapters begin either only on right hand pages or on the next page available.<br />This does not work with the `article` class, as it does not know about chapters.<br />The `report` class by default starts chapters on the next page available<br />and the `book` class starts them on right hand pages. |

<br />

## Packages

### Some of the Packages Distributed with $\LaTeX{}$

| Package | Descriptions |
| :------ | :----------- |
| `doc`   | Allows the documentation of $\LaTeX{}$ programs.<br />Described in `doc.dtx`[^a] and in $The~\LaTeX{}~Companion$[^2]. |
| `exscale` | Provides scaled versions of the math extension font.<br />Described in `ltexscale.dtx`. |
| `fontenc` | Specifies which font encoding $\LaTeX{}$ should use.<br />Described in `ltoutenc.dtx`. |
| `ifthen` | Provides commands of the form<br />'if..then do..otherwise do..'<br />Described in `ifthen.dtx` and $The~\LaTeX{}~Companion$[^2]. |
| `latexsym` | To access the $\LaTeX{}$ symbol font, you should use the `latexsym` package.<br />Described in `latexsym.dtx` and in $The~\LaTeX{}$~Companion$[^2].<br />The commands defined by the `latexsym` package are:<br />`\mho` $\mho$<br />`\Join` $\Join$<br />`\Box` $\Box$<br />`\Diamond` $\Diamond$<br />`\leadsto`$\leadsto$<br />`\sqsubset` $\sqsubset$<br />`\sqsupset` $\sqsupset$<br />`\lhd` $\lhd$<br />`\unlhd` $\unlhd$<br />`\rhd` $\rhd$<br />`\unrhd` $\unrhd$|
| `makeidx` | Provides commands for producing indexes.<br />Described in section 4.2 and in $The~\LaTeX{}~Companion$[^2]. |
| `syntonly` | Processes a document without typesetting it. |
| `inputenc` | Allows the specification of an input encoding such as ASCII, ISO Latin-1, ISO Latin-2,<br />437/850 IBM code pages, Apple Mac- intosh, Next, ANSI-Windows or user-defined one.<br />Described in `inputenc.dtx`.

### Predefined Page Styles of $\LaTeX{}$

| Style | Definitions |
| :---- | :---------- |
| `plain` | prints the page numbers on the bottom of the page, in the middle of the footer.<br />This is the default page style. |
| `headings` | prints the current chapter heading and the page number in the header on each page,<br />while the footer remains empty. |
| `empty` | sets both the header and the footer to be empty. |