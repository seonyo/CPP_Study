#include <iostream>
#include <string>

using namespace std;

struct pizza { //����ü (�������� �����͸� �Ѳ����� ��� �ִ� ��)
	string brand;
	string menu;

};
int main(void) {
	struct pizza ���ø�������;
	���ø�������.brand = "���ڽ���";
	���ø�������.menu = "�޺���̼�";

	cout << "�귣�� : " << ���ø�������.brand << endl;
	cout << "�޴� : " << ���ø�������.menu << endl;
	return 0;
}