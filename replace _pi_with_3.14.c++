// A recursive C++ program to replace
// all pi in a given string with 3.14
#include <bits/stdc++.h>
using namespace std;

// Recursive Function to replace all
// occurrences of pi in a given
// with 3.14
void replacePiHelper(char str[], int start)
{

	// Base condition
	// if the string is empty
	// or of length one
	if (str[start] == '\0' || str[start + 1] == '\0') {
		return;
	}

	// Getting the answer from
	// recursion for the smaller
	// problem
	replacePiHelper(str, start + 1);

	// Small calculation part
	// if the first character is 'p'
	// and the first character of the part
	// passed to recursion is 'i' then replace
	// "pi" with "3.14"
	if (str[start] == 'p' && str[start + 1] == 'i') {

		// Shifting the characeters to
		// right side to put 3.14 in
		// the character array
		for (int i = strlen(str); i >= start + 2; i--) {
			str[i + 2] = str[i];
		}

		// Replacing with "3.14"
		str[start] = '3';
		str[start + 1] = '.';
		str[start + 2] = '1';
		str[start + 3] = '4';
	}
}

// Function to replace pi with 3.14
void replacePi(char str[])
{
	replacePiHelper(str, 0);
}

// Driver code
int main()
{
	char str[] = "pippppiiiipi";

	// Function call
	replacePi(str);

	cout << str;

	return 0;
}
