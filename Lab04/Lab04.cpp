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
	float total;
	cout << " " << endl;
	cout << "Factorial Selected!" << endl;
	cout << "Please Input an X value: " << endl;
	cin >> A;
	// error message v
	if (A < 0) {
		do {
			cout << "We're sorry, please choose a POSITIVE variable: " << endl;
			cin >> A;
		} while (A < 0);
	}
	// function v
	total = 1;
	for (int n(1); n <= A; n++) {
		total = n*total;
	}
	cout << A << "! = ";
	for (int n(1); n <= A; n++) {
		cout << n << " * ";
	}
	
	cout << total << endl;



}
// (N+1) * floatB
void arithmetic(float& A, float& B, float&C) {
	cout << " " << endl;
	cout << "Arithmetic Selected!" << endl;
	//setting A, B, and C
	cout << "Please input a starting value: " << endl;
	cin >> A;
	cout << "Please input a number to add for each interval: " << endl;
	cin >> B;
	cout << "Please input the number of intervals: " << endl;
	cin >> C;
	// function v
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
		cout << " " << endl;
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}