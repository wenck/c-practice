#include<iostream>
#include<string>

using namespace std;
int i = 100;
int main() {
	int i{ 100 };
	for (i = 1; i < 5; i++) {
		cout << i << " ";
		cout << std::to_string(i)+"## ";//��iת��Ϊ�ַ���
		cout << endl << ::i<< endl;//ȫ��i
	}



	return 0;
}