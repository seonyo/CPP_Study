#include <iostream>
#include <map>

using namespace std;

int main(void) {
	map<string, int> moving;

	moving["������"] = 1987;
	moving["���ؼ�"] = 2000;
	moving["����"] = 1959;

	cout << moving["�����"] << endl;
	 
	map<string, int> ::iterator iter;
	//���� ������ ��� iterator�θ� �ݺ����� ����Ѵ�
	for (iter = moving.begin(); iter != moving.end(); iter++) {
		cout << iter->first << iter->second << " ";
	}
	return 0;
}