CPP=g++
%.o: %.cpp
	${CPP} -c $< -o $@

hello: hello.o hello_lib.o
	${CPP} $? -o $@

clean:
	rm *.o
	rm hello
