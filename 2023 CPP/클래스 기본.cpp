#include <iostream>
#include <string>
using namespace std;

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
		this->grade = grade;
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
	cout << "�Ű������� ���� Ŭ����" << endl;
	//�ڷ��� : Student (class ��������)
	//class Student stu1; 
	Student stu1 = Student();
	//stu1.print();
	cout << endl << "�Ű������� �ִ� Ŭ����" << endl;

	//class Student stu2 (2216, "������", "010-6601-6535", "���̵�����Ʈ�����", "����� ���ı�");
	Student stu2 = Student(2216, "������", "010-6601-6535", "���̵�����Ʈ�����", "����� ���ı�");
	stu2.print();

}