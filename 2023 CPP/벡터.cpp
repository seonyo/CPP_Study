#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	// �������� �迭�� ũ�Ⱑ �����Ǿ� ������,
	// ���ʹ� ũ�Ⱑ �����Ӱ� ���� �� �ִ� �����迭�̴�
	vector <int> arr;
	arr.reserve(4);		// ũ�⸦ 4�� ����
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);

	// ���� ������ ���ο� �����͸� �־��
	arr.push_back(50);

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	return 0;
}