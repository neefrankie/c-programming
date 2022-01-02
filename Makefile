build_dir := build

builddir :
	mkdir -p ./$(build_dir)

filecopy : builddir
	gcc -o ./$(build_dir)/file_copy ./chapter1/file_copy.c

charcount : builddir
	gcc -o ./$(build_dir)/char_count ./chapter1/char_count.c

linecount : builddir
	gcc -o ./$(build_dir)/line_count ./chapter1/line_count.c

wordcount : builddir
	gcc -o ./$(build_dir)/word_count ./chapter1/word_count.c

occurrence : builddir
	gcc -o ./$(build_dir)/occurrence ./chapter1/occurrence.c

longest : builddir
	gcc -o ./$(build_dir)/longest ./chapter1/longest.c ./chapter1/get_line.c ./chapter1/copy.c

strindex : builddir
	gcc -o ./$(build_dir)/strindex ./chapter4/strindex.c

macro : builddir
	gcc -o ./$(build_dir)/macro ./chapter4/macro.c

pointeraddr : builddir
	gcc -o ./$(build_dir)/pointeraddr ./chapter5/pointeraddr.c

swap : builddir
	gcc -o ./$(build_dir)/swap ./chapter5/swap.c