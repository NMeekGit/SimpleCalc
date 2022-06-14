#include <iostream>
#include <cmath>

using namespace std;

int main() {
	char op, q;
	double num1, num2, ans;
	bool quit = false;
	
	cout << "Welcome To SimpleCalc\n" << endl;
	cout << "@author: NMeek\n" << endl;
	cout << "-----------------------\n" << endl;
	cout << "Enter equation below\n (i.e. 1 + 1)" << endl;

	while (!quit) {
		cin >> num1 >> op >> num2;

		switch (op){
			case '+':
				ans = num1 + num2;
				break;
			case '-':
				ans = num1 - num2;
				break;
			case '*':
				ans = num1 * num2;
				break;
			case '/':
				if (num2 == 0) {
					cout << "Error: Division by Zero" << endl;
					break;
				}
				ans = num1 / num2;
				break;
			case '$':
				ans = sqrt(num1);
				break;
			case '^':
				ans = pow(num1,num2);
				break;
			default:
				cout << "Incorrect operator recieved. Please use +,-,*,/,'sqrt','pow'" << endl;
				break;
		}
		cout << "Answer: " << ans << endl;

		cout << "Continue? [y]es [n]o:";
		cin >> q;
		if (q == 'n') quit = true;
	}	

	return 0;
}
