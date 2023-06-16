#include <iostream>

using namespace std;

class Person {
public:
	Person(string name, int hakbun) : name_(name), hakbun_(hakbun_)
	{}
	~Person() {}

	void PrintShow(string name, int hakbun) {
		cout << "이름 : "<<name << endl;
		cout << "학번 : " << hakbun << endl;
	}

private :
	string name_;
	int hakbun_;
};

class Student : public Person{
public : 
	Student(string name, int hakbun, string university) : Person(name, hakbun), university_(university)	
		//Person(name, hakbun)이 부모클래스의 생성자를 지정해주는 뜻, 자바의 super같은 느낌
	{}
	~Student() {}

	void PrintShow(string name, int hakbun, string university) {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << hakbun << endl;
		cout << "학교 : " << university << endl;
	}
private:
	string university_;
};

int main (void){
	Student* std1 = new Student("정선영", 2216, "미림여자정보과학고");
	std1->PrintShow("정선영", 2216, "미림여자정보과학고");

	delete std1;
}