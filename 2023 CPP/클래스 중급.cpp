#include <iostream>
using namespace std;

class MString {
public :
	MString(const char* str)
	{
		c_str_ = str;
	};
	unsigned int size(void) { return size_; }
	const char* c_str(void) { return c_str_; }
private:
	unsigned int size_; //���ڿ��� ����
	const char* c_str_;      //���ڿ��� �����ּ�
};

int main(void) {
	MString* str = new MString ("I will be back");
	cout << str->c_str() << endl;

	return 0;
}