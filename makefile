strtest: stringfun.c
	gcc stringfun.c -o strtest
clean:
	rm *~
run: strtest
	./strtest
