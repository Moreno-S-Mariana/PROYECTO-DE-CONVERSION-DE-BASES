CC=gcc # definir el compilador a utilizar
EXE=conv #definir el nombre del ejecutable

CDEBUG= -g -Wall #definir las banderas de depuración
CSTD= -std=c99 # definir el estándar del lenguaje a utilizar

CFLAGS = -Wno-deprecated-register -O0 $(CDEBUG) $(CSTD)
CLIBS = -lm

COBJ = main conv

FILES = $(addsuffix .c, $(COBJ))
OBJS = $(addsuffix .o, $(COBJ))

CLEANLIST = $(addsuffix .o, $(COBJ))

.PHONY: all
all: wc

wc: $(FILES)
	$(MAKE) $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS) $(CLIBS)

.PHONY: clean
clean:
	rm -rf $(CLEANLIST)
