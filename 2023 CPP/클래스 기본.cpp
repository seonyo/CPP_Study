#include <iostream>
#include <string>
using namespace std;

//여러 data들을 하나의 의미있는 구조체로 묶어서 관리
//구조체, 클래슨믄 일반적으로 단어의 첫 글자를 대문자로 함
struct Student {
	// 성능때문에 grade를 문자열로 하지 않음
	// 일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
	// 정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수 만큼 비교해야함
	int grade;
	string name;
	string phonenumber;
	string major;
	string adress;

};
int main(void) {
	//자료형 : struct pizza (C++에서는 pizza만 써도 가능)
	struct Student information; 
	information.grade = 2216;
	information.name = "정선영";
	information.phonenumber = "010-6601-6535";
	information.major = "뉴미디어 소프트웨어과";
	information.adress = "서울시 송파구";

	cout << "학번 : " << information.grade << endl;
	cout << "이름 : " << information.name << endl;
	cout << "전화번호 : " << information.phonenumber << endl;
	cout << "학과 : " << information.major << endl;
	cout << "주소 : " << information.adress << endl;
}