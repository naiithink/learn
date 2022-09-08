all: clean
	javac Extractor.java
	javac Main.java
	jar -cfm Extractor.jar Manifest.txt Main.class Extractor.class
	@echo "next:"
	@echo "\tjava -jar Extractor.jar ./names/main/Main.jar ./outdir\n"

clean:
	rm -f Extractor.class Main.class
