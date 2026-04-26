#include <iostream>
#include <string>

using namespace std;

int main() {
	string firstString;
	string secondString;
	string combinedString;

	cout << "Enter first string: ";
	getline(cin, firstString);

	cout << "Enter second string: ";
	getline(cin, secondString);

	combinedString = firstString + secondString;
	cout << "Concatenated Result: " << combinedString << endl;

	cout << "\nEnter first string: ";
	getline(cin, firstString);

	cout << "Enter second string: ";
	getline(cin, secondString);

	combinedString = firstString + secondString;
	cout << "Concatenated Result: " << combinedString << endl;

	cout << "\nEnter first string: ";
	getline(cin, firstString);

	cout << "Enter second string: ";
	getline(cin, secondString);

	combinedString = firstString + secondString;
	cout << "Concatenated Result: " << combinedString << endl;

	return 0;
}
