test: test.o libtest.o test.h
	g++ -o test test.o libtest.o
test.o: test.cpp test.h
	g++ -c test.cpp
libtest.o: libtest.cpp
	g++ -c libtest.cpp
