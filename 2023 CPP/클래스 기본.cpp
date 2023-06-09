#include <iostream>
#include <string>
using namespace std;

//여러 data들을 하나의 의미있는 구조체로 묶어서 관리
//구조체, 클래슨믄 일반적으로 단어의 첫 글자를 대문자로 함
//class는 디폴트가 private (struct는 디폴트가 public)
class Student {

public:
	//생성자 (constructor) : 객체를 생성할 때 호출되는 함수
	//생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다
	Student() {}


	Student(int grade, string name, string phonenumber, string major, string adress)
		//멤버변수 초기화, const/참조형 멤버변수 사용가능
		: grade(grade), name(name), phonenumber(phonenumber), major(major), adress(adress)
	{
	}

	void print(void) {
		//C언어에서의 구조체는 함수 선언을 못하지만 c++은 가능
		cout << "학번 : " << grade << endl;
		cout << "이름 : " << name << endl;
		cout << "전화번호 : " << phonenumber << endl;
		cout << "학과 : " << major << endl;
		cout << "주소 : " << adress << endl;
	}

	void set_grade(int _grade) {grade = _grade;}
	void set_name(string _name) { name = _name; }
	void set_phonenumber(string _phonenumber) { phonenumber = _phonenumber; }
	void set_major(string _major) { major = _major; }
	void set_adress(string _adress) { adress = _adress; }

private:
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

	//자료형 : Student (class 생략가능)
	//class Student stu1; 
	Student stu1 = Student();
	//stu1.print();

	//정적할당 : 컴파일 시간에 메모리 크기가 결정
	//Student stu2 = Student(2216, "정선영", "010-6601-6535", "뉴미디어소프트웨어과", "서울시 송파구");
	//stu2.print();
	
	//Student stu3[2];
	//for (int i = 0; i < 2; i++) {
	//	stu3[i].print();
	//}



	//동적할당 : 실행시간(runtime)에 메모리 크기가 결정 (메모리; heap영역)
	//동적할당 된 공간은 포인터로 접근한다.
	//Student* stu3 = new Student(22, "율곡", "010-0000-0000", "유교", "한성");
	//stu3->print();  //stu3의 멤버는 ->로 접근 (stu3은 포인터)

	////동적할당 해제 (안하면 메모리 누수현상이 발생)
	//delete stu3;

	Student* stu4 = new Student[2];
	stu4[0].set_name("박진영");
	stu4[0].set_adress("니가사는그집");
	stu4[0].set_grade(1111);
	stu4[0].set_major("뉴미디어소프트웨어");
	stu4[0].set_phonenumber("000-0000-0000");

	stu4[1].set_name("선미");
	stu4[1].set_adress("서울어딘가");
	stu4[1].set_grade(1112);
	stu4[1].set_major("뉴미디어소프트웨어");
	stu4[1].set_phonenumber("000-0000-0001");

	for (int i = 0; i < 2; i++) {
		stu4[i].print(); //배열의 요소에 해당하는 객체는 멤버를 .으로 접근 (stu4[i]는 int)
	}
	delete[] stu4; //배열을 delete할 때는 [] 꼭 써줘야 함
 	return 0;
}