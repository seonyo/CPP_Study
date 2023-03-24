//c언어
#include <stdio.h>
#include <string.h>

//C++
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	char str1[30] = "Jiwoo";
	char str2[30] = "Rock";

	// str2의 문자열을 str1에 추가 (항상 첫번째 인자가 목적지)
	strcat(str1, str2);

	printf("%s \n", str1);
	return 0;
}