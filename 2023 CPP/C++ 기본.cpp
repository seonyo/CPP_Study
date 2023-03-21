// cout 객체 사용을 위해 씀
#include <iostream>

//namespace는 기억공간이라는 뜻. (변수 이름의 중복 방지)
using namespace std;

int main(void) {

	int year = 2023;

	//"<<"은 출력연산, C++은 객체로 출력한다
	// endl : 개행 (줄바꿈)을 해주는 객체 (endline의 줄임말)
	cout << "hello world " << year << endl;
	return 0;
}