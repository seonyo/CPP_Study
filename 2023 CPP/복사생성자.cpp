#include <iostream>
#include <string.h>
using namespace std;

class Munja {
public:
	Munja(const char* jhqz)
	{
		str_ = new char[strlen(jhqz)+1];
		strcpy(str_, jhqz);
		cout << "�Ϲݻ����� ȣ��" << endl;
	}
private:
	char* str_;
};
int main(void) {
	Munja m1 = Munja("abc");
	return 0;
}