build_dir := build

build : builddir
	gcc -o ./$(build_dir)/pattern ./main.c ./get_line.c str_index.c
	
builddir :
	mkdir -p ./$(build_dir)