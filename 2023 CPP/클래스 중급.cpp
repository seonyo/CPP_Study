//��ü�� �����Ǹ� �����ڰ� ȣ���
#include <iostream>
#include <string.h>
using namespace std;

class MString {
public :
	//�Ϲݻ�����
	MString(const char* str)
	{
		unsigned int l = strlen(str); //����� ���� unsigned�� ����.
		c_str_ = new char[l + 1]; //'\0'(�ι���)�� �� ���� +1
		strcpy(c_str_, str);
		size_ = l;
		cout << "MString ������ ȣ�� �Ϸ�" << endl;
	}

	//���������(������ ���ǰ� ������ �����Ϸ��� �˾Ƽ� ����� ��)
	MString(const MString& rhs)
		: c_str_(rhs.c_str_), size_(rhs.size_)
	{
	}

	// �Ҹ���(destructor)
	// �Ҹ��ڴ� �Ű������� ����
	~MString()
	{
		//�Ҹ��ڷ� �����ڿ��� �����Ҵ��� �޸� ����
		delete[] c_str_;
		cout << "MString �Ҹ��� ȣ�� �Ϸ�" << endl;
	}
	unsigned int size(void) { return size_; }
	char* c_str(void) { return c_str_; }
private:
	unsigned int size_; //���ڿ��� ����
	 char* c_str_;      //���ڿ��� �����ּ�
};

int main(void) {
	// �Ϲݻ����� ȣ��
	MString str = MString("I will be back");
	
	// ��������� ȣ��
	MString str2 = str;

	return 0;
}
