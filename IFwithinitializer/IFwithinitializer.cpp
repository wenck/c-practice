#include<iostream>
#include<cstdlib>
int main( ) {

	std::cout << "generating an int between 0~100...... \n";
	std::cout << "plz input the number you guess: ";

	auto x{ 0 };//int x=0;
	std::cin >> x;

	if (int z = rand() % 100; x > z) {
		std::cout << "��´��ˣ��ҵ����� " << z << std::endl;
	}
	else if (x < z) {
		std::cout << "���С�ˣ��ҵ����ǣ�" << z << std::endl;
	}
	else {
		std::cout << "��¶���!" << std::endl;
	}

	return 0;
}