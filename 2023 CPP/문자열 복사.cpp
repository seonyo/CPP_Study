﻿#include <iostream>
#include <string>	  // str::string 클래스

int main(void) {
	std::string str1;
	std::string  str2="Jiwoo";

	// str1에 str2의 내용을 집어넣겠다. 첫번째 인자가 목적지!
	str1 = str2;
	
	std::cout << str1 << std::endl;

	return 0;

}