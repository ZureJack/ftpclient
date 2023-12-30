
export ROOT_DIR = $(shell pwd)
OBJECTS = main.o ./clientPI/clientPI ./clientDTP/clientDTP

%.o : %.c
	gcc -g -I$(ROOT_DIR)/include/ -O0 -c -o $@ $<

all : $(OBJECTS)
	gcc -g -O0 $(OBJECTS) -o FTPclient -lreadline
	@rm -fr $(OBJECTS)

main.o : main.c

./clientPI/clientPI:
	(cd clientPI; make)
./clientDTP/clientDTP:
	(cd clientDTP; make)

.PHONY : clean

clean : 
	(cd clientDTP; make clean)
	(cd clientPI; make clean)
	rm -fr FTPclient
