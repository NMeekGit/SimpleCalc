#include <iostream>
#include <cmath>

using namespace std;

double calculations(double n1, double n2, char op) {
	double ans;

	switch (op){
			case '+':
				ans = n1 + n2;
				break;
			case '-':
				ans = n1 - n2;
				break;
			case '*':
				ans = n1 * n2;
				break;
			case '/':
				if (n2 == 0) {
					cout << "Error: Division by Zero" << endl;
					break;
				}
				ans = n1 / n2;
				break;
			case '$':
				ans = sqrt(n1);
				break;
			case '^':
				ans = pow(n1,n2);
				break;
			default:
				cout << "Incorrect operator recieved. Please use +,-,*,/,'sqrt','pow'" << endl;
				break;
		}
	return ans;
}



int main() {
	char op, q;
	double num1, num2, ans;
	bool quit = false;
	
	cout << "Welcome To SimpleCalc\n" << endl;
	cout << "@author: NMeek\n" << endl;
	cout << "-----------------------\n" << endl;
	cout << "Enter equation below\n (i.e. 1 + 1)" << endl;

	while (!quit) {
		cin >> num1 >> op;
		if (op != '$') cin >> num2; // Case for sqrt.

		ans = calculations(num1, num2, op);		
		cout << "Answer: " << ans << endl;

		cout << "Continue? [y]es [n]o:";
		cin >> q;
		if (q == 'n') quit = true;
	}	

	return 0;
}

