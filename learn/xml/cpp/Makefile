TESTFILE = test
SRCDIR = aboutxml
SRCFILENAME = anxml
BINDIR = .bin
CXX = clang++
CXXFLAGS = -g
CXXINCLUDE = -I/usr/include/libxml2
LDFLAGS = -lxml2

make : config
	$(CXX) -c $(CXXINCLUDE) $(SRCDIR)/$(SRCFILENAME).cpp -o $(SRCDIR)/$(SRCFILENAME).o
	$(CXX) $(CXXINCLUDE) $(LDFLAGS) $(CXXFLAGS) $(SRCDIR)/$(SRCFILENAME).o $(TESTFILE).cpp -o $(BINDIR)/$(TESTFILE).out

config :
	if [ ! -d .bin ]; then mkdir $(BINDIR); fi