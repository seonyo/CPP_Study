#include <iostream>

using namespace std;

int main(void) {
	int arr[] = {13,31,65,47,53};

	//�������� a�� �ڷ����� int�̴�
	auto a = 4;

	//x�� �ڷ����� dobule�� �ڵ�����
	for (auto x : arr) {
		cout << x << endl;
	}
	
	return 0;
}