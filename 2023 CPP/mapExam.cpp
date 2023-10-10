#include <iostream>
#include <map>

using namespace std;

int main(void) {
	map<string, string> birthday;
	string ques;
	string answer = "";

	birthday["김현지"] = "2006/12/26";
	birthday["정선영"] = "2006/10/07";
	birthday["장지안"] = "2006/10/11";
	birthday["김예은"] = "2006/10/13";

	cout << "누구의 생일이 궁금하신가요 >> ";
	cin >> ques;

	map<string, string>::iterator iter;
	for (iter = birthday.begin(); iter != birthday.end(); iter++) {
		if (iter->first == ques) answer = iter->second;
	}

	if (answer == "") cout << ques << +"님의 정보가 등록되어 있지 않습니다.";
	else cout << ques << "님의 생일은 " << answer << " 입니다";
}