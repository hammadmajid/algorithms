ARGV = NULL

compile:
	# create bin dir if it doesn't exit
	if ! [ -d "./bin" ]; then mkdir bin; fi

	# compile the src
	clang++ src/main.cc src/input.cc -o bin/main.out

run:
	bin/main.out $(ARGV)