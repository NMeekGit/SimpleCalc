#include <iotsream>
#include <cmath>

using namespace std;

int main() {
	string op;
	int num1, num2, ans;
	bool quit = false;
	
	cout << "Welcome To SimpleCalc\n" << endl;
	cout << "@author: NMeek" << endl;
	cout << "-----------------------\n" << endl;
	cout << "Enter equation below\n";
			"(i.e. 1 + 1)" << endl;

	while (!quit) {
		cin << num1 << op << num2 << endl;

		switch (op){
			case +:
				ans = num1 + num2;
			case -:
				ans = num1 - num2;
			case *:
				ans = num1 * num2;
			case /:
				if (num2 == 0) {
					cout << "Error: Division by Zero" << endl;
					break;
				}
				ans = num1 / num2;
			case sqrt:
				ans = sqrt(num1);
			case pow:
				ans = num1^num2;
			default:

	
		}
	}	

	return 0;
}
