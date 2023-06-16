#include <iostream>

using namespace std;

class Person {
public:
	Person(string name, int hakbun) : name_(name), hakbun_(hakbun_)
	{}
	~Person() {}

	void PrintShow(string name, int hakbun) {
		cout << "�̸� : "<<name << endl;
		cout << "�й� : " << hakbun << endl;
	}

private :
	string name_;
	int hakbun_;
};

class Student : public Person{
public : 
	Student(string name, int hakbun, string university) : Person(name, hakbun), university_(university)	
		//Person(name, hakbun)�� �θ�Ŭ������ �����ڸ� �������ִ� ��, �ڹ��� super���� ����
	{}
	~Student() {}

	void PrintShow(string name, int hakbun, string university) {
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << hakbun << endl;
		cout << "�б� : " << university << endl;
	}
private:
	string university_;
};

int main (void){
	Student* std1 = new Student("������", 2216, "�̸������������а�");
	std1->PrintShow("������", 2216, "�̸������������а�");

	delete std1;
}