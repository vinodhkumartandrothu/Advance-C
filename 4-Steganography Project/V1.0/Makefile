SRC:=$(wildcard *.c)
OBJ:=$(patsubst *.c,*.o, $(SRC))
stenography.exe:$(OBJ)
	gcc -o $@ $^
