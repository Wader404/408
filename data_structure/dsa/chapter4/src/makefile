CFALGS = -Wall -g


1: 1.c
	gcc $(CFALGS) $^ -o 1.out

2: 2.c include/seq_stack.c
	gcc $(CFALGS) $^ -o 2.out

3: 3.c
	gcc $(CFALGS) $^ -o 3.out

kmp: KMP.c include/kmp.c
	gcc -Wall -g $^ -o kmp.out

.PHONY: clean
clean: 
	rm *.out 1.txt
