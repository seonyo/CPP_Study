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
public:
	int grade;
	string name;
	string phonenumber;
	string major;
	string adress;

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
	cout << "�й� : " << information.grade << endl;
	cout << "�̸� : " << information.name << endl;
	cout << "��ȭ��ȣ : " << information.phonenumber << endl;
	cout << "�а� : " << information.major << endl;
	cout << "�ּ� : " << information.adress << endl;

	information.print();

}