main: main.c location.c objects.c parseAndExecute.c
	gcc -g -o main main.c location.c objects.c parseAndExecute.c helpers.c -I.