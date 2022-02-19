build_dir := build

src_pattern := chapter4/pattern/main.c chapter4/get_line.c chapter4/pattern/str_index.c
src_cal := chapter4/calculator/main.c chapter4/atof.c chapter4/get_line.c
src_calc := chapter4/calc/main.c chapter4/calc/stack.c chapter4/calc/getop.c lib/getch.c
src_keytab := chapter6/keytab.c lib/getch.c lib/getword.c

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

pattern : $(src_pattern)
	gcc -o ./$(build_dir)/pattern $(src_pattern)

calculator : $(src_cal)
	gcc -o ./$(build_dir)/calculator $(src_cal)

calc : $(src_calc)
	gcc -o ./$(build_dir)/calc $(src_calc)

point : chapter6/point.c
	gcc -o ./$(build_dir)/point ./chapter6/point.c

keytab :$(src_keytab)
	gcc -o ./$(build_dir)/keytab $(src_keytab)
