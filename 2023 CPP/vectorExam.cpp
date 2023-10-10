#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector <string> arr;
	int student;
	string answer;

	cout << "몇 명의 학생을 입장시킬 건가요 >> ";
	cin >> student;

	arr.reserve(student);

	for (int i = 0; i < student; i++) {
		cout << i+1<< "번째로 입장할 학생은 >> ";
		cin >> answer;
		arr.push_back(answer);
	}

	vector<string>::iterator iter;
	for (iter = arr.begin(); iter != arr.end(); iter++) {
		cout << *iter << " ";
	}
	cout << "이(가) 입장하였습니다";
}