// C
#include <stdio.h>
#include <string.h>

// C++
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str1 = "Hello";
	string str2 = "World";

	if (str1 == str2) {
		cout << "str1 == str2";
	}

	else if (str1 < str2) {
		cout << "str1 < str2";
	}

	else {
		cout << "str1 > str2";
	}
	return 0;
}