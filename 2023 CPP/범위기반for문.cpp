#include <iostream>

using namespace std;

int main(void) {
	int arr[] = {13,31,65,47,53};

	//누가봐도 a의 자료형은 int이다
	auto a = 4;

	//x의 자료형은 dobule로 자동설정
	for (auto x : arr) {
		cout << x << endl;
	}
	
	return 0;
}