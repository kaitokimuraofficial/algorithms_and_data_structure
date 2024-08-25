
singlylist:		main.o node.o
				gcc main.o node.o && ./a.out

main.o:			main.c
				gcc -c main.c

node.o:			node.c
				gcc -c node.c

clean:;         rm -f *.o a.out
