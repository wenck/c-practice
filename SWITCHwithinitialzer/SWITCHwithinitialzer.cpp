#include<iostream>
using std::cout;
using std::endl;

int main() {
	cout << "������γ̳ɼ���  "<< endl;
	int score = 0;
	std::cin >> score;

	switch (int x = score / 10; x) {
	case 10:
	case 9:
		cout << "��ĳɼ���A��\n"; break;
	case 8:
		cout << "��ĳɼ���B��\n"; break;
	case 7:
		cout << "��ĳɼ���C��\n"; break;
	case 6:
		cout << "��ĳɼ���D��\n"; break;
	default:
		cout << "��ĳɼ���E��\n"; 
	}

}