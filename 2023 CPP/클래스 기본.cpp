#include <iostream>
#include <string>
using namespace std;

//���� data���� �ϳ��� �ǹ��ִ� ����ü�� ��� ����
//����ü, Ŭ������ �Ϲ������� �ܾ��� ù ���ڸ� �빮�ڷ� ��
struct Student {
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
	//�ڷ��� : struct pizza (C++������ pizza�� �ᵵ ����)
	struct Student information; 
	information.grade = 2216;
	information.name = "������";
	information.phonenumber = "010-6601-6535";
	information.major = "���̵�� ����Ʈ�����";
	information.adress = "����� ���ı�";

	cout << "�й� : " << information.grade << endl;
	cout << "�̸� : " << information.name << endl;
	cout << "��ȭ��ȣ : " << information.phonenumber << endl;
	cout << "�а� : " << information.major << endl;
	cout << "�ּ� : " << information.adress << endl;
}