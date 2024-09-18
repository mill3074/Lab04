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
	cout << " " << endl;
	cout << "Factorial Selected!" << endl;
	cout << "Please Input an A value: " << endl;
	cin >> A;
	if (A < 0) {
		do {
			cout << "We're sorry, please choose a POSITIVE variable: " << endl;
			cin >> A;
		} while (A < 0);
	}
		
	// ^error message works. Idk how to code it tho.
	
}
void arithmetic(float& A, float& B, float&C) {
	cout << " " << endl;
	cout << "Arithmetic Selected!" << endl;
	cout << "Please input a starting value: " << endl;
	cin >> A;
	cout << "Please input a number to add for each interval: " << endl;
	cin >> B;
	cout << "Please input the number of intervals: " << endl;
	cin >> C;
	cout << "okay cool" << endl;
}
void geometric(float& A, float& B, float& C) {
	cout << " " << endl;
	cout << "Geometric has run." << endl;
}
int main() {
	int choice;
	char again;
	float A;
	float B;
	float C;
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
			arithmetic(A, B, C);
		}
		else if (choice == 3) {
			geometric(A, B, C);
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}