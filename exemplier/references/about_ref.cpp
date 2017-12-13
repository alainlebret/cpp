#include <iostream>

int main() {
	double x = 2.0;
	double y = 3.0;
	double &r = x;
	
	std::cout << "&x: " << (void*)&x << std::endl;
	std::cout << "&y: " << (void*)&y << std::endl;
	std::cout << "&r: " << (void*)&r << std::endl;
	std::cout<< "r vaut " << r << std::endl;

	r = y;
	y = 5;
	
	std::cout << "&x: " << (void*)&x << std::endl;
	std::cout << "&y: " << (void*)&y << std::endl;
	std::cout << "&r: " << (void*)&r << std::endl;
	std::cout<< "r vaut " << r << std::endl;
	
	return 0;
}
