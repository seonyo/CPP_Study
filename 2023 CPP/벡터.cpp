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

	vector<int>::iterator iter;
	// �ݺ���(iterator) iter�� Ȱ���Ͽ� ��� ���Ҹ� ���
	for (iter=arr.begin(); iter!=arr.end(); iter++)
		cout << *iter << " ";
	return 0;
}