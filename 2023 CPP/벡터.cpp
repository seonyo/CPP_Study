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
	for (int i = 0; i < 4; i++) {
		temp[i] = arr[i];
	}
		// ���� ���� ����
	delete[]arr;
		// arr�� ���ο� ������ ����Ŵ
	arr = temp;
		// ���ο� ���� �־���
	arr[4] = 50;

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}

	delete[] arr;
	return 0;
}