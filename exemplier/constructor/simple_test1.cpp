#include <iostream>
#include <fstream>

using namespace std;

class Test {
	int v_;
public: 
	Test() : v_(-1) {};
	Test(int v);
	int getV();
};	

Test::Test(int v) {
	v_ = v;
}

int Test::getV() {
	return v_;
}

int main()
{
	Test t1;
//	Test t2(); // ERROR : compiler asks itself if t2 is a function returning a Test object
	Test t3(3);
	Test *t4 = new Test();
	
	cout << t1.getV() << endl;
//	cout << t2.getV() << endl;
	cout << t3.getV() << endl;
	cout << t4->getV() << endl;
}
