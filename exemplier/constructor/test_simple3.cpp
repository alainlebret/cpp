#include <iostream>
#include <fstream>

using namespace std;

class Test {
	int v_;
public: 
	Test();
	Test(int v) : v_() {};
	int getV();
};	

Test::Test() {
	v_ = 10;
}

int Test::getV() {
	return v_;
}

int main() {
	Test t1;
//	Test t2();
	Test t3;
	Test *t4 = new Test();
	
	cout << t1.getV() << endl;
//	cout << t2.getV() << endl;
	cout << t3.getV() << endl;
	cout << t4->getV() << endl;
}
