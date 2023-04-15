#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
	Employee() {} //기본 생성자, 객체배열때 사용

	Employee(string name, int id, int age, double salary) 
		: name_(name), id_(id), age_(age), salary_(salary)
	{
	}

	void set_name(string name) { name_ = name;}
	void set_id(int id) { id_ = id; }
	void set_age(int age) { age_ = age; }
	void set_salary(double salary) { salary_ = salary; }

	void PrintInfo(void){
		cout << "이름 : " << name_ << endl;
		cout << "사번 : " << id_ << endl;
		cout << "나이 : " << age_ << endl;
		cout << "급여 : " << salary_ << endl;

	}

private:
	string name_;
	int id_;
	int age_;
	double salary_;
};

int main(void) {
	//동적할당 하여 하나의 객체에 대한 정보를 담는 방법
	Employee* em1 = new Employee("정선영", 2216, 18, 4000);
	em1->PrintInfo();
	delete em1;

	//동적할당을 하여 객체배열을 만들고 이에 대한 정보를 넣는 방법
	Employee* em2 = new Employee[1]; //매개변수가 없어서 기본 생성자가 호출된다.
	em2[0].set_name("정철원");
	em2[0].set_id(65);
	em2[0].set_age(25);
	em2[0].set_salary(10000.0);
	
	em2[0].PrintInfo();
	
	delete[] em2;
	return 0;
}