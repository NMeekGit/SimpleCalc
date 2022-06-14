#include <iostream>
#include <cmath>

using namespace std;

int main() {
	char op, q;
	double num1, num2, ans;
	bool quit = false;
	
	cout << "Welcome To SimpleCalc\n" << endl;
	cout << "@author: NMeek" << endl;
	cout << "-----------------------\n" << endl;
	cout << "Enter equation below\n (i.e. 1 + 1)" << endl;

	while (!quit) {
		cin >> num1 >> op >> num2;

		switch (op){
			case '+':
				ans = num1 + num2;
			case '-':
				ans = num1 - num2;
			case '*':
				ans = num1 * num2;
			case '/':
				if (num2 == 0) {
					cout << "Error: Division by Zero" << endl;
					break;
				}
				ans = num1 / num2;
			case '$':
				ans = sqrt(num1);
			case '^':
				ans = pow(num1,num2);
			default:
				cout << "Incorrect operator recieved. Please use +,-,*,/,'sqrt','pow'" << endl;

		cout << "Continue? [y]es [n]o:";
		cin >> q;
		if (q == 'y') quit = true;
		}
	}	

	return 0;
}
