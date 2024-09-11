#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial(float& A) {
	cout << "x! = 1 * 2 * ... * x" << endl;
	cout << "Please Input an X value: " << endl;
	cin >> A;
	do {
		cout << "We're sorry, please choose a POSITIVE variable: " << endl;
		cin >> A;
	} while (A < 0);
	// ^error message works. Idk how to code it tho.
	do {
		cout << A - (A - 1) << endl;
	} while (A > 0);
	
	cout << A - (A - 1) << endl;
}
void arithmetic(float& A) {
	cout << "Arithmetic has run." << endl;
}
void geometric(float& A) {
	cout << "Geometric has run." << endl;
}
int main() {
	int choice;
	char again;
	float A;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial(A);
		}
		else if (choice == 2) {
			arithmetic(A);
		}
		else if (choice == 3) {
			geometric(A);
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}