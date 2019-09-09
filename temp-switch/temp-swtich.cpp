#include <iostream>
using namespace std;


int main() {

	cout << "F\tfor Fahrenheit to Celsius\n";
	cout << "C\tfor Celsius to Fahrenheit\n";

	cout << "Select: ";
	char choice;
	cin >> choice;
	cin.ignore();		// That discards the new line

	switch (toupper(choice)) {

		case 'F':
			double f;
			cout << "Please enter a tempature in Fahrenheit: ";
			cin >> f;

			cout << "Celcius: " << 5.0 / 9.0 * (f - 32) << endl;
			break;
		case 'C':
			double c;
			cout << "Please enter a tempature in Celsius: ";
			cin >> c;

			cout << "Fahrenheit: " << 9.0 / 5.0 * c + 32 << endl;
			break;
		default:
			cerr << "Unrecognized choice: \"" << choice << "\"\n"; 
			break;
	}

		
	return 0;
}