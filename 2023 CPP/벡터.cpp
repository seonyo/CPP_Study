#include <iostream>

using namespace std;

int main(void) {
	int* arr = new int [4];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;

	//���� ũ�⿡ ���ο� �����͸� �־��
		//ũ�Ⱑ Ȯ��� �ӽð����� �����
	int* temp = new int[6];
		//������ ���� ����
	for (int i = 0; i < 6; i++) {
		temp[i] = arr[i];
	}
	for (int i = 0; i < 6; i++) {
		cout << temp[i] << endl;
	}

	return 0;
}