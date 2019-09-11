#include <iostream>
using namespace std;


int main() {

	while (true) {

		cout << "F\tfor Fahrenheit to Celsius\n";
		cout << "C\tfor Celsius to Fahrenheit\n";
		cout << "E\tExit\n";

		cout << "Select: ";
		char choice;
		cin >> choice;
		cin.ignore();		// That discards the new line

		if (toupper(choice) == 'F') { // if(c == 'f' || c == 'F') {

			double f;
			cout << "Please enter a tempature in Fahrenheit: ";
			cin >> f;

			cout << "Celcius: " << 5.0 / 9.0 * (f - 32) << endl;
			// alternativley
			//double c = 5.0 / 9.0 * (f - 32);
			//cout << "Celcius: " << c << endl;

		} else if (toupper(choice) == 'C') {

			double c;
			cout << "Please enter a tempature in Celsius: ";
			cin >> c;

			cout << "Fahrenheit: " << 9.0 / 5.0 * (c + 32) << endl;

		} else if(toupper(choice) == 'E') {

			break;
			// exit(0);

		} else {

			cerr << "Unrecognized choice: \"" << choice << "\"\n";

		}




	}
	

	return 0;
}