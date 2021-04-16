# Name of the project
PROJECT_NAME = Dark-samurai-within

# Output directory
BUILD = build

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# All source code files
SRC = project_main.c\
src/char_operations.c\
src/user.c\
src/frames.c\
src/game_engine.c

# # All test source files
# TEST_SRC = src/calculator_operations.c\
# test/test_calculator_operations.c\
# unity/unity.c\

# TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS =

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).$(EXEC)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean doc all
#.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).$(EXEC)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).$(EXEC)

# Document the code using Doxygen
doc:
	make -C ./documentation

# # Build and run the unit tests
# test:$(BUILD)
# 	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
# 	./$(TEST_OUTPUT)
# #Coverage
# coverageCheck:$(BUILD)
# 	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
# 	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build


# # i saw this website
# # https://opensource.com/article/18/8/what-how-makefile
# # this is my first make_file 
# # use @ for not making the recipie to be printed in the command prompt itself
# # all : test_main.exe
# # 	@echo The file is executing... 
# # 	@test_main.exe

# # test_main.exe : test_main.o char_operations.o user.o frames.o game_engine.o
# # 	@gcc -o test_main.exe test_main.o char_operations.o user.o frames.o game_engine.o

# # test_main.o : test_main.c 
# # 	@gcc -c test_main.c

# # char_operations.o : char_operations.c 
# # 	@gcc -c char_operations.c

# # user.o : user.c
# # 	@gcc -c user.c

# # frames.o : frames.c
# # 	@gcc -c frames.c

# # game_engine.o : game_engine.c
# # 	@gcc -c game_engine.c

# # # i used del keyword as makefile uses cmd so del keyword
# # clean : 
# # 	@del test_main.exe test_main.o char_operations.o
# # 	@echo clean done



# PROJ_NAME = Dark-samurai-within
# TEST_PROJ_NAME = Test_$(PROJ_NAME)

# # SRC =src/create_ll.c
# SRC = project_main.c\
# src/char_operations.c\
# src/user.c\
# src/frames.c\
# src/game_engine.c

# # COV_SRC = test.c

# # TEST_SRC = test/test.c \
# # unity/unity.c 
# INC_H = inc
# # INC_T = unity

# ifdef OS
#    RM = del 
#    FixPath = $(subst /,\,$1)
#    EXEC = exe
# else
#    ifeq ($(shell uname), Linux)
#       RM = rm -rf
#       FixPath = $1
# 	  EXEC = out
#    endif
# endif

# .PHONY: run clean doc all
# #.PHONY: run clean test doc all

# all:
# 	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
# run:
# 	$(call FixPath,$(PROJ_NAME).$(EXEC))
# # test:
# # 	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
# # 	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

# # coverage:
# # 	cp test/test.c .
# # 	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
# # 	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
# # 	gcov -a $(COV_SRC)
# # 	$(RM) *.$(EXEC)
# # 	$(RM) *.gcda
# # 	$(RM) *.gcno
# # 	$(RM) *.c.gcov
# # 	$(RM) *.DAT
# # 	$(RM) test.c


# # cppcheck:
# # 	cppcheck --enable=all $(SRC) main.c
# # debug:
# # 	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
# # 	gdb $(PROJ_NAME).$(EXEC)

# # valgrind:
# # 	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


# clean:
# 	$(RM) *.DAT
# 	$(RM) *.$(EXEC)
# 	$(RM) *.gcda
# 	$(RM) *.gcno
# 	$(RM) *.c.gcov