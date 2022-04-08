#include<iostream>
#include<string>

using namespace std;
int i = 100;
int main() {
	int i{ 100 };
	for (i = 1; i < 5; i++) {
		cout << i << " ";
		cout << std::to_string(i)+"## ";//将i转换为字符串
		cout << endl << ::i<< endl;//全局i
	}



	return 0;
}