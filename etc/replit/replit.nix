{ pkgs }: {
	deps = [
		pkgs.clang_12
		pkgs.ccls
		pkgs.file
		pkgs.gdb
		pkgs.gnumake
		pkgs.gnupg
		pkgs.pinentry
		pkgs.valgrind
	];
}