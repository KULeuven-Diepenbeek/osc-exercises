.DEFAULT_GOAL := main

main:
	gcc -c somecalculation.c
	gcc -c main.c
	gcc somecalculation.o main.o -o somecalculation.bin
	./somecalculation.bin

test:
	g++ -c somecalculation.c
	g++ -I$(GTEST_DIR)/include -c gtest-main.cpp  -std=c++11
	g++ -I$(GTEST_DIR)/include -c gtest-tests.cpp  -std=c++11
	g++ somecalculation.o gtest-main.o gtest-tests.o $(GTEST_DIR)/build/lib/libgtest.a $(GTEST_DIR)/build/lib/libgtest_main.a -o somecalculation-tests.bin -lpthread
	./somecalculation-tests.bin
