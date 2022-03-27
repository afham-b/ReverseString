#include <iostream>
#include <string>
using namespace std;

string reverse (const string& s);

int main () {
	string str;
	cout << "   Enter string: ";
	getline(cin, str);
	cout << "String reversed: " << reverse(str) << endl;
	return 0;
}

string reverse (const string& s) {
	// Base case: The reverse of an empty string is an empty string.
	if (s == "")
		return ""; // If s is en empty string, just return an empty string.

	// General case: The reverse of a string is the reverse of the substring
	//	that starts with the second character, followed by the first
	//	character.
	return reverse(s.substr(1)) + s[0];
}