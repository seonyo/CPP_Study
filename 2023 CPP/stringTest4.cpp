#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str1 = "Hello";
	string str2 = "Hello";

	if (str1 == str2) cout << str1 << "은 " << str2 << "와 같다.";
	else cout << str1 << "은 " << str2 << "와 다르다.";
}