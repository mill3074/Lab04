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
	//output v
	cout << A << "! = ";
	for (int n(1); n <= A-1; n++) {
		cout << n << " * ";
	}
	cout << A << " = " << total << endl;
}
//FACTORIAL END

void arithmetic(float& A, float& B, float&C) {
	float hold;
	float total;
	cout << " " << endl;
	cout << "Arithmetic Selected!" << endl;
	//setting A, B, and C
	cout << "Please input a starting value: " << endl;
	cin >> A;
	cout << "Please input a number to add for each interval: " << endl;
	cin >> B;
	cout << "Please input the number of intervals: " << endl;
	cin >> C;
	// error message v
	if (C <= 0) {
		do {
			cout << "We're sorry, please choose a POSITIVE number: " << endl;
			cin >> C;
		} while (C <= 0);
	}
	// function v
	if (C == 1) {
		total = A;
	}
	else {
		hold = A + B;
		total = A + hold;
		for (int n(1); n <= C-2; n++) {
			hold = hold + B;
			total = hold + total;
		}
	}
	//output v
	hold = A + B;
	cout << A;
	for (int n(1); n <= C-1; n++) {
		cout << " + " << hold;
		hold = hold + B;
	}

	cout << " = " << total << endl;

}
//ARITHMETIC END

void geometric(float& A, float& B, float& C) {
	float hold;
	float total;
	cout << " " << endl;
	cout << "Geometric Selected!" << endl;
	//setting A, B, and C
	cout << "Please input a starting value: " << endl;
	cin >> A;
	cout << "Please input a number to multiply for each interval: " << endl;
	cin >> B;
	cout << "Please input the number of intervals: " << endl;
	cin >> C;
	// error message v
	if (C <= 0) {
		do {
			cout << "We're sorry, please choose a POSITIVE number: " << endl;
			cin >> C;
		} while (C <= 0);
	}
	// function v
	if (C == 1) {
		total = A;
	}
	else {
		hold = A * B;
		total = A + hold;
		for (int n(1); n <= C - 2; n++) {
			hold = hold * B;
			total = hold + total;
		}
	}
	//output v
	hold = A * B;
	cout << A;
	for (int n(1); n <= C - 1; n++) {
		cout << " + " << hold;
		hold = hold * B;
	}

	cout << " = " << total << endl;
}

//GEOMETRIC END

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