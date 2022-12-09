ARGV = NULL

compile:
	# create bin dir if it doesn't exit
	if ! [ -d "./bin" ]; then mkdir bin; fi

	# compile the src
	clang++ src/main.cc src/input.cc -o bin/main.out

	# compile the tests
	clang++ tests/main_test.cc tests/input_test.cc src/input.cc  -o bin/tests.out

	# Run the tests
	bin/tests.out

run:
	bin/main.out $(ARGV)