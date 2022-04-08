#include<iostream>

class Square {
private:
	double side = 1.0;
public:
	Square() = default;//ǿ�Ʊ���������һ��Ĭ�Ϲ��캯��
	Square(double side) {
		this->side = side;
	}
	double getArea() {
		return (side * side);
	}
};

int main() {
	Square s1, s2{ 4.0 };
	std::cout << s1.getArea() << std::endl;
	std::cout << s2.getArea() << std::endl;
	  
	s1 = s2;

	std::cout << s1.getArea() << std::endl;
	std::cout << s2.getArea() << std::endl;
	
	return 0;
}