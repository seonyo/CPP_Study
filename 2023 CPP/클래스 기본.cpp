#include <iostream>
#include <string>
using namespace std;

//���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
//����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� ��
//class�� ����Ʈ�� private (struct�� ����Ʈ�� public)
class Student {
	// ���ɶ����� grade�� ���ڿ��� ���� ����
	// �Ϲ������� ���ڿ��� ������ �����ͺ��� ���� �޸� ������ �䱸�ϸ�
	// ������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���ڼ� ��ŭ ���ؾ���
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
		name = "�ڳ���";
		phonenumber = "000-0000-0000";
		major = "���̵�����Ʈ�����";
		adress = "����� ���Ǳ�";


	}

	//������ (constructor) : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	//�����ڸ� �������� ������ default�� �Ű������� ���� �����ڰ� ���ǵȴ�
	

	void print (void){
		//C������ ����ü�� �Լ� ������ �������� c++�� ����
			cout << "�й� : " << grade << endl;
			cout << "�̸� : " <<  name<< endl;
			cout << "��ȭ��ȣ : " << phonenumber<< endl;
			cout << "�а� : " << major << endl;
			cout << "�ּ� : " << adress << endl;
	}

};
int main(void) {
	//�ڷ��� : Student (class ��������)
	class Student information; 

	information.print();

}