﻿#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[30] = "";
	char str2[30] = "Jiwoo";

	// str1에 str2의 내용을 집어넣겠다
	strcpy(str1, str2);
	
	printf("%s \n", str1);

	return 0;
}