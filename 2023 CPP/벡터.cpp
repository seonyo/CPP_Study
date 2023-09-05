#include <iostream>

using namespace std;

int main(void) {
	int* arr = new int [4];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;

	//꽉찬 크기에 새로운 데이터를 넣어보지
		//크기가 확장된 임시공간을 만든다
	int* temp = new int[6];
		//기존의 값을 복사
	for (int i = 0; i < 6; i++) {
		temp[i] = arr[i];
	}
	for (int i = 0; i < 6; i++) {
		cout << temp[i] << endl;
	}

	return 0;
}