all: hello.pdf

%.pdf: %.ps
	gs -dSAFER -dBATCH -dNOPAUSE -sDEVICE=pdfwrite -sOutputFile=$@ $<

%.ps: %.ms
	groff -Tps -dpaper=a4 -ms $< > $@

clean:
	rm -f *.pdf *.ps
