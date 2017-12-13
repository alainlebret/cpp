CXX=g++
CFLAGS=-Wall -Wextra -std=c++11

about_references: about_references.o
	$(CXX) $< -o $@
	
%.o: %.cpp
	$(CXX) $(CFLAGS) $< -o $@ -c
	
clean:
	rm *.o
	