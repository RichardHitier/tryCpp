CPPOPT=-Wall -Wextra 
CPP=g++ ${CPPOPT}

.PHONY: default
default:  clean hello 

.PHONY: clean
clean:
	rm *.o
	rm hello

%.o: %.cpp
	${CPP} -c $< -o $@

hello: hello.o hello_lib.o
	${CPP} $? -o $@
