#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
	Employee() {} //�⺻ ������, ��ü�迭�� ���

	Employee(string name, int id, int age, double salary) 
		: name_(name), id_(id), age_(age), salary_(salary)
	{
	}

	void set_name(string name) { name_ = name;}
	void set_id(int id) { id_ = id; }
	void set_age(int age) { age_ = age; }
	void set_salary(double salary) { salary_ = salary; }

	void PrintInfo(void){
		cout << "�̸� : " << name_ << endl;
		cout << "��� : " << id_ << endl;
		cout << "���� : " << age_ << endl;
		cout << "�޿� : " << salary_ << endl;

	}

private:
	string name_;
	int id_;
	int age_;
	double salary_;
};

int main(void) {
	//�����Ҵ� �Ͽ� �ϳ��� ��ü�� ���� ������ ��� ���
	Employee* em1 = new Employee("������", 2216, 18, 4000);
	em1->PrintInfo();
	delete em1;

	//�����Ҵ��� �Ͽ� ��ü�迭�� ����� �̿� ���� ������ �ִ� ���
	Employee* em2 = new Employee[1]; //�Ű������� ��� �⺻ �����ڰ� ȣ��ȴ�.
	em2[0].set_name("��ö��");
	em2[0].set_id(65);
	em2[0].set_age(25);
	em2[0].set_salary(10000.0);
	
	em2[0].PrintInfo();
	
	delete[] em2;
	return 0;
}