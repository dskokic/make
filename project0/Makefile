bla: bla.o
	gcc bla.o -o bla

bla.o: bla.c
	gcc -c bla.c

bla.c:
	# rule in bla.c target will be executed only when this target
	# (file bla.c) doesn't exist. Since this target has no dependecies
	# it will not be executed if the target (file bla.c) exists.
	# this behavior may be overriden if we declare bla.c target as 'false
	# target' (aka PHONY target) in PHONY list (see below)
	echo "int main() {return 0;}" > bla.c

clean:
	rm -rf bla.c bla.o bla

# if we put target in PHONY list, then rule in this target will be executed
# whenever this target is processed by make
# .PHONY: bla.c clean 
.PHONY: clean
