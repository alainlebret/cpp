CXX=g++
CFLAGS=-Wall -Wextra -std=c++11

about_const_01: about_const_01.o
	$(CXX) $< -o $@
	
%.o: %.cpp
	$(CXX) $(CFLAGS) $< -o $@ -c
	
clean:
	rm *.o
	