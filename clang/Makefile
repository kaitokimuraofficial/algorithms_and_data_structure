singly-linked-list:		main.o singly-linked-list.o
						gcc main.o singly-linked-list.o && ./a.out
						make clean

doubly-linked-list:		main.o doubly-linked-list.o
						gcc main.o doubly-linked-list.o && ./a.out
						make clean

stack:					main.o stack.o singly-linked-list.o
						gcc main.o stack.o singly-linked-list.o && ./a.out
						make clean

main.o:					src/main.c
						gcc -c src/main.c

singly-linked-list.o:	src/singly-linked-list.c
						gcc -c src/singly-linked-list.c

doubly-linked-list.o:	src/doubly-linked-list.c
						gcc -c src/doubly-linked-list.c

stack.o:				src/stack.c
						gcc -c src/stack.c

clean:;					rm -f *.o a.out

test:
						docker build . -t clang_unit_test
						docker rmi clang_unit_test 
