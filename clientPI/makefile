

OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))

%.o : %.c
	gcc -g -I$(ROOT_DIR)/include/ -O0 -c -o $@ $?

clientPI : $(OBJECTS)
	ld -r $(OBJECTS) -o clientPI

.PHONY : clean

clean :
	rm -fr $(OBJECTS)