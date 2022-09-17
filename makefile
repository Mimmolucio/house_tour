main: main.c location.c objects.c parseAndExecute.c
	gcc -o main main.c location.c objects.c parseAndExecute.c -I.