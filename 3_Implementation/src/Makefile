# # Name of the project
# PROJECT_NAME = Calculator

# # Output directory
# BUILD = build

# # All source code files
# SRC = project_main.c\
# src/calculator_operations.c

# # All test source files
# TEST_SRC = src/calculator_operations.c\
# test/test_calculator_operations.c\
# unity/unity.c\

# TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# # All include folders with header files
# INC	= -Iinc\
# -Iunity\

# #Library Inlcudes
# #if working with CUnit 
# #INCLUDE_LIBS = -lcunit
# INCLUDE_LIBS =

# # Project Output name
# PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# # Document files
# DOCUMENTATION_OUTPUT = documentation/html

# # Default target built
# $(PROJECT_NAME):all

# # Run the target even if the matching name exists
# .PHONY: run clean test doc all

# all: $(SRC) $(BUILD)
# 	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# # Call `make run` to run the application
# run:$(PROJECT_NAME)
# 	./$(PROJECT_OUTPUT).out

# # Document the code using Doxygen
# #doc:
# #	make -C ./documentation

# # Build and run the unit tests
# test:$(BUILD)
# 	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
# 	./$(TEST_OUTPUT)
# #Coverage
# coverageCheck:$(BUILD)
# 	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
# 	./$(TEST_OUTPUT)

# # Remove all the built files, invoke by `make clean`
# clean:
# 	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# # Create new build folder if not present
# $(BUILD):
# 	mkdir build


# i saw this website
# https://opensource.com/article/18/8/what-how-makefile
# this is my first make_file 
# use @ for not making the recipie to be printed in the command prompt itself
all : test_main.exe
	@echo The file is executing... 
	@test_main.exe

test_main.exe : test_main.o char_operations.o user.o frames.o game_engine.o
	@gcc -o test_main.exe test_main.o char_operations.o user.o frames.o game_engine.o

test_main.o : test_main.c 
	@gcc -c test_main.c

char_operations.o : char_operations.c 
	@gcc -c char_operations.c

user.o : user.c
	@gcc -c user.c

frames.o : frames.c
	@gcc -c frames.c

game_engine.o : game_engine.c
	@gcc -c game_engine.c

# i used del keyword as makefile uses cmd so del keyword
clean : 
	@del test_main.exe test_main.o char_operations.o
	@echo clean done
