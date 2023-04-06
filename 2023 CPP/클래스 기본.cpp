#include <iostream>
#include <string>
using namespace std;

struct Person {
	int height;
	int weight;
};

//���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
//����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� ��
//class�� ����Ʈ�� private (struct�� ����Ʈ�� public)
class Student {

public:
	//������ (constructor) : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	//�����ڸ� �������� ������ default�� �Ű������� ���� �����ڰ� ���ǵȴ�
	Student()
	{
		grade = 2200;
		name = "�ڳ���";
		phonenumber = "000-0000-0000";
		major = "���̵�����Ʈ�����";
		adress = "����� ���Ǳ�";
	}

	Student(int grade, string name, string phonenumber, string major, string adress) {
		this->grade = grade;  //this�� �Լ��� ȣ��� ��ü�� ����Ŵ
		this->name = name;
		this->phonenumber = phonenumber;
		this->major = major;
		this->adress = adress;
	}

	void print(void) {
		//C������ ����ü�� �Լ� ������ �������� c++�� ����
		cout << "�й� : " << grade << endl;
		cout << "�̸� : " << name << endl;
		cout << "��ȭ��ȣ : " << phonenumber << endl;
		cout << "�а� : " << major << endl;
		cout << "�ּ� : " << adress << endl;
	}

private:
	// ���ɶ����� grade�� ���ڿ��� ���� ����
	// �Ϲ������� ���ڿ��� ������ �����ͺ��� ���� �޸� ������ �䱸�ϸ�
	// ������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���ڼ� ��ŭ ���ؾ���
	int grade;
	string name;
	string phonenumber;
	string major;
	string adress;

};

int main(void) {

	//�ڷ��� : Student (class ��������)
	//class Student stu1; 
	Student stu1 = Student();
	//stu1.print();

	//class Student stu2 (2216, "������", "010-6601-6535", "���̵�����Ʈ�����", "����� ���ı�");
	Student stu2 = Student(2216, "������", "010-6601-6535", "���̵�����Ʈ�����", "����� ���ı�");
	//stu2.print();
	
	struct Person p;
	p.height = 186;
	p.weight = 82;

	struct Person* ptr = &p;

	//�� �� ���� ���. ptr-> �� (*ptr)�� ����
	cout << "Ű : " << ptr->height << endl;
	cout << "������ : " << (*ptr).weight << endl;

	cout << "Ű" << p.height << endl;
	cout << "������ : " << p.weight << endl;
}