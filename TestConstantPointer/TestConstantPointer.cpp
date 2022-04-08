#include<iostream>
using std::endl;
using std::cout;
using std::cin;

int main() {
	const int x{17};
	//x = 21;不能给常量赋值
	int y = 2;
	const int* p = &x;
	//(*p) = 24;
	const int* q = &y;
	//(*q) = 4;
	int* const r = &y;
	int z = 5;
	*r = 20;
	cout << *r << " "<<y<<endl;
	const int* const s = &y;
	//s = &z;

	const char* str = "Hello";

	auto p1 = &y;
	auto p2 = "WORLD";
	auto const p3 = "!";
		return 0;
}