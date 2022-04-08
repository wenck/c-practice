#include<iostream>
using std::endl;
using std::cout;
using std::cin;

class Account {
	double balance;
public:
	Account() {
		balance = 0.0;
	}

	Account(double balance_) {
		balance = balance_;
	}
	void depoist(double amount) {

		balance += amount;
	}
	double withdraw(double amount) {
		auto temp{ 0.0 };
		if (balance < amount) {
			temp = balance;
			balance = 0;
			return temp;
		}
		else {
			balance -= amount;
			return balance;
		}
	}
};

int main() {
	Account a1;
	Account a2 = Account{ 100.0 };
	a1.depoist(9.0);
	cout << a1.withdraw(10.0) << endl;
	cout << a2.withdraw(52.00) << endl;
	cout << Account(1000.0).withdraw(1001.00) << endl;
	return 0;
}