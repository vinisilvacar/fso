BINFOLDER =bin/
INCFOLDER = include/
SRCFOLDER = src/
OBJFOLDER = obj/

CC = gcc
SRCFILES = $(wildcard $(SRCFOLDER)*.c)

all: $(SRCFILES:$(SRCFOLDER)%.c=$(OBJFOLDER)%.o)
	$(CC) $(OBJFOLDER)*.o -o $(BINFOLDER)exec

$(OBJFOLDER)%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I./$(INCFOLDER)

clean:
	rm -rf $(OBJFOLDER)*
	rm -rf $(BINFOLDER)*
