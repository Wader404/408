1: 1.c
	gcc -Wall -g -o 1.out 1.c

2: 2.c include/seq_stack.c
	gcc -Wall -g -o 2.out $^

3: 3.c include/linked_stack.c
	gcc -Wall -g -o 3.out $^

4: 4.c include/linked_stack.c
	gcc -Wall -g -o 4.out $^

5: 5.c
	gcc -Wall -g -o 5.out 5.c

6: 6.c
	gcc -Wall -g -o 6.out $^

7: 7.c
	gcc -Wall -g -o 7.out 7.c

8: 8.c include/seq_queue.c
	gcc -Wall -g -o 8.out $^

9: 9.c include/ack_stack.c
	gcc -Wall -g -o 9.out $^

10: 10.c include/linked_list.c
	gcc -Wall -g -o 10.out $^

.PHONY: clean
clean:
	rm *.out
