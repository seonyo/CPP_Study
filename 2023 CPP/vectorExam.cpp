#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector <string> arr;
	int student;
	string answer;

	cout << "�� ���� �л��� �����ų �ǰ��� >> ";
	cin >> student;

	arr.reserve(student);

	for (int i = 0; i < student; i++) {
		cout << i+1<< "��°�� ������ �л��� >> ";
		cin >> answer;
		arr.push_back(answer);
	}

	vector<string>::iterator iter;
	for (iter = arr.begin(); iter != arr.end(); iter++) {
		cout << *iter << " ";
	}
	cout << "��(��) �����Ͽ����ϴ�";
}