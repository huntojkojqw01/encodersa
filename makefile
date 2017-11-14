all:
	rm -f *.o main encode decode
	gcc -o main main.c rsa.c	
clean:
	rm -f *.o main encode decode