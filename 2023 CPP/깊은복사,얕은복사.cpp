#include <iostream>

using namespace std;

int main(void) {
	//int 3��¥�� ������ �����Ҵ� �� �� ptr1�� ����Ų��
	int* ptr1 = new int[3];
	ptr1[0] = 0, ptr1[1] = 10, ptr1[2] = 20;

	//������ ������ �����Ҵ��� ��, ptr1�� ����Ű�� ���빰�� �����Ѵ�(��������, deep copy)
	int* ptr2 = new int[3];
	for (int i = 0; i < 3; i++) {
		ptr2[i] = ptr1[i];
	}

	//���� ���縦 �ϸ� ���������Ͱ� ������ �� �ִ�.
	ptr2[1] = 100;
	for (int i = 0; i < 3; i++) {
		cout << ptr1[i] << " " << ptr2[i] << endl;
	}
	
	delete[] ptr2;
	delete[] ptr1;
	return 0;
}