# requires boost to be installed

test_bdecode : bdecode.cpp bdecode.hpp test_bdecode.cpp
	g++ -O0 -g -o test_bdecode bdecode.cpp test_bdecode.cpp -lboost_system-mt -I /opt/local/include -L /opt/local/lib

ar:
	g++ -c bdecode.cpp bdec.cpp
	ar rcs bdec.a bdec.o bdecode.o
