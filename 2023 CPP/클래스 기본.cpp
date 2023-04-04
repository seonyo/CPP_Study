#include <iostream>
#include <string>
using namespace std;

//여러 data들을 하나의 의미있는 구조체로 묶어서 관리
//구조체, 클래슨믄 일반적으로 단어의 첫 글자를 대문자로 함
//class는 디폴트가 private (struct는 디폴트가 public)
class Student {
	// 성능때문에 grade를 문자열로 하지 않음
	// 일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
	// 정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수 만큼 비교해야함
private:
	int grade;
	string name;
	string phonenumber;
	string major;
	string adress;

public:
	Student()
	{
		grade = 2200;
		name = "박남길";
		phonenumber = "000-0000-0000";
		major = "뉴미디어소프트웨어과";
		adress = "서울시 관악구";


	}

	//생성자 (constructor) : 객체를 생성할 때 호출되는 함수
	//생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다
	

	void print (void){
		//C언어에서의 구조체는 함수 선언을 못하지만 c++은 가능
			cout << "학번 : " << grade << endl;
			cout << "이름 : " <<  name<< endl;
			cout << "전화번호 : " << phonenumber<< endl;
			cout << "학과 : " << major << endl;
			cout << "주소 : " << adress << endl;
	}

};
int main(void) {
	//자료형 : Student (class 생략가능)
	class Student information; 

	information.print();

}