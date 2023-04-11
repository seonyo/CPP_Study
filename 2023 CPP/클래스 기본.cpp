#include <iostream>
#include <string>
using namespace std;

//���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
//����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� ��
//class�� ����Ʈ�� private (struct�� ����Ʈ�� public)
class Student {

public:
	//������ (constructor) : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	//
	//�����ڸ� �������� ������ default�� �Ű������� ���� �����ڰ� ���ǵȴ�
	Student()
	{
		grade = 2200;
		name = "�ڳ���";
		phonenumber = "000-0000-0000";
		major = "���̵�����Ʈ�����";
		adress = "����� ���Ǳ�";
	}


	Student(int grade, string name, string phonenumber, string major, string adress)
		//������� �ʱ�ȭ, const/������ ������� ��밡��
		: grade(grade), name(name), phonenumber(phonenumber), major(major), adress(adress)
	{
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

	//�����Ҵ� : ������ �ð��� �޸� ũ�Ⱑ ����
	//Student stu2 = Student(2216, "������", "010-6601-6535", "���̵�����Ʈ�����", "����� ���ı�");
	//stu2.print();
	
	Student stu3[2];
	for (int i = 0; i < 2; i++) {
		stu3[i].print();
	}



	//�����Ҵ� : ����ð�(runtime)�� �޸� ũ�Ⱑ ���� (�޸�; heap����)
	//�����Ҵ� �� ������ �����ͷ� �����Ѵ�.
	//Student* stu3 = new Student(22, "����", "010-0000-0000", "����", "�Ѽ�");
	//stu3->print();  //stu3�� ����� ->�� ���� (stu3�� ������)

	////�����Ҵ� ���� (���ϸ� �޸� ���������� �߻�)
	//delete stu3;

	Student* stu4 = new Student[2];
	for (int i = 0; i < 2; i++) {
		stu4[i].print(); //�迭�� ��ҿ� �ش��ϴ� ��ü�� ����� .���� ���� (stu4[i]�� int)
	}
	delete[] stu4; //�迭�� delete�� ���� [] �� ����� ��
 	return 0;
}