#include <iostream>
#include <map>

using namespace std;

int main(void) {
	map<string, string> birthday;
	string ques;
	string answer = "";

	birthday["������"] = "2006/12/26";
	birthday["������"] = "2006/10/07";
	birthday["������"] = "2006/10/11";
	birthday["�迹��"] = "2006/10/13";

	cout << "������ ������ �ñ��ϽŰ��� >> ";
	cin >> ques;

	map<string, string>::iterator iter;
	for (iter = birthday.begin(); iter != birthday.end(); iter++) {
		if (iter->first == ques) answer = iter->second;
	}

	if (answer == "") cout << ques << +"���� ������ ��ϵǾ� ���� �ʽ��ϴ�.";
	else cout << ques << "���� ������ " << answer << " �Դϴ�";
}