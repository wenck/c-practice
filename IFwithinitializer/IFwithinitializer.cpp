#include<iostream>
#include<cstdlib>
int main( ) {

	std::cout << "generating an int between 0~100...... \n";
	std::cout << "plz input the number you guess: ";

	auto x{ 0 };//int x=0;
	std::cin >> x;

	if (int z = rand() % 100; x > z) {
		std::cout << "你猜大了，我的数是 " << z << std::endl;
	}
	else if (x < z) {
		std::cout << "你猜小了，我的数是：" << z << std::endl;
	}
	else {
		std::cout << "你猜对了!" << std::endl;
	}

	return 0;
}