CFLAGS = -g -Wall

all: 1 2 3 4 5 6 7 8 9 10

1: src/1.c
	gcc $(CFLAGS) $^ -o bin/1.out

2: src/2.c src/include/seq_stack.c
	gcc $(CFLAGS) $^ -o bin/2.out

3: src/3.c src/include/linked_stack.c
	gcc $(CFLAGS) $^ -o bin/3.out

4: src/4.c src/include/linked_stack.c
	gcc $(CFLAGS) $^ -o bin/4.out

5: src/5.c
	gcc $(CFLAGS) $^ -o bin/5.out

6: src/6.c
	gcc $(CFLAGS) $^ -o bin/6.out

7: src/7.c
	gcc $(CFLAGS) $^ -o bin/7.out

8: src/8.c src/include/seq_queue.c
	gcc $(CFLAGS) $^ -o bin/8.out

9: src/9.c src/include/ack_stack.c
	gcc $(CFLAGS) $^ -o bin/9.out

10: src/10.c src/include/linked_list.c
	gcc $(CFLAGS) $^ -o bin/10.out 

.PHONY: clean
clean: 
	rm bin/* 
