CPPOPT=-Wall -Wextra 
CPP=g++ ${CPPOPT}

PRODUCTS=hello pointers structs

.PHONY: default
default:  clean hello 

.PHONY: clean
clean:
	-rm *.o
	-rm ${PRODUCTS}

%.o: %.cpp
	${CPP} -c $< -o $@

hello: hello.o hello_lib.o
	${CPP} $? -o $@
