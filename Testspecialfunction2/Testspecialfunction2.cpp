#include<iostream>

using namespace std;

template <typename T>
auto max1(T x, T y) {

	return x > y ? x : y;

}

template <typename T>
auto max1(T a, T b, T c) {

	return max1(a, max(b, c) );

}


int main() {

	cout << max1(1, 2, 3)<<endl;
	cout << max1('a', 'b', 'A') << endl;
	
	return 0;
}