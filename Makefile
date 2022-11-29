COMPILER = clang++
SRC_DIR = src
OUT_DIR = build

compile:
	# Create build dir if it doesn't exit
	if ! [ -d "./build" ]; then mkdir build; fi

	# Compile the app
	$(COMPILER) $(SRC_DIR)/app/app.cc -o $(OUT_DIR)/app.out

test: 
	# Create build dir if it doesn't exit
	if ! [ -d "./build" ]; then mkdir build; fi

	# Compile tests
	$(COMPILER) $(SRC_DIR)/test/app_test.cc -o $(OUT_DIR)/test.out

	# Run tests
	$(OUT_DIR)/test.out

run: 
	# Run the app
	$(OUT_DIR)/app.out