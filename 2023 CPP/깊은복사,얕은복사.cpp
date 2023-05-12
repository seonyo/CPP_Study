#include <iostream>

using namespace std;

int main(void) {
	//int 3개짜리 공간을 동적할당 한 후 ptr1이 가리킨다
	int* ptr1 = new int[3];
	ptr1[0] = 0, ptr1[1] = 10, ptr1[2] = 20;
	cout << "ptr1 : ";

	int* ptr2 = ptr1;
	ptr2[1] = 100;
	for (int i = 0; i < 3; i++) {
		cout << ptr1[i] << " " << ptr2[i] << endl;
	}
	
	delete[] ptr1;
	return 0;
}