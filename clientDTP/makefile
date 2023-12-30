

OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))

%.o : %.c
	gcc -g -I$(ROOT_DIR)/include/ -O0 -c -o $@ $?

clientDTP : $(OBJECTS)
	ld -r $(OBJECTS) -o clientDTP

.PHONY : clean

clean :
	rm -fr $(OBJECTS)