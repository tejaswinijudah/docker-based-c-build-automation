all:	
	gcc main.c add.c -o main

run:
	./main

clean:
	rm -f main