build_dir := build

builddir :
	mkdir -p ./$(build_dir)

strindex : builddir
	gcc -o ./$(build_dir)/strindex ./chapter4/strindex.c