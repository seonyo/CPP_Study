//��ü�� �����Ǹ� �����ڰ� ȣ���
#include <iostream>
#include <string.h>
using namespace std;

class MString {
public :
	MString(const char* str)
	{
		unsigned int l = strlen(str);
		c_str_ = new char[l + 1]; //'\0'(�ι���)�� �� ���� +1
		strcpy(c_str_, str);
		size_ = l;
	}
	unsigned int size(void) { return size_; }
	 char* c_str(void) { return c_str_; }
private:
	unsigned int size_; //���ڿ��� ����
	 char* c_str_;      //���ڿ��� �����ּ�
};

int main(void) {
	//�����ڰ� ȣ��Ǹ鼭 ���ڿ��� "I will be back" ��ŭ�� �����Ҵ��� �̷���

	MString* str = new MString ("I will be back");
	cout << str->c_str() << endl;

	//��ü str�� ����. �����Ҵ����� ������ ���ڿ��� �״�� ��������(�޸� ����)
	//TODO : �Ҹ���(destructor)�� �̿��Ͽ� �����Ҵ�� �޸𸮵� ��������

	delete str;
	return 0;
}