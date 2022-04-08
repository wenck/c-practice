#include<iostream>
using std::cout;
using std::endl;

int main() {
	cout << "请输入课程成绩：  "<< endl;
	int score = 0;
	std::cin >> score;

	switch (int x = score / 10; x) {
	case 10:
	case 9:
		cout << "你的成绩是A！\n"; break;
	case 8:
		cout << "你的成绩是B！\n"; break;
	case 7:
		cout << "你的成绩是C！\n"; break;
	case 6:
		cout << "你的成绩是D！\n"; break;
	default:
		cout << "你的成绩是E！\n"; 
	}

}