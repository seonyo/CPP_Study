#include <iostream>
#include <string.h>
using namespace std;

class Munja {
public:
	//�Ϲݻ�����
	Munja(const char* jhqz)
	{
		str_ = new char[strlen(jhqz)+1];
		strcpy(str_, jhqz);
		cout << "�Ϲݻ����� ȣ��" << endl;
	}
	
	Munja(const Munja& hj) : str_(hj.str_)
	{
		str_ = new char[strlen(hj.str_) + 1];
		strcpy(str_, hj.str_);
		cout << "��������� ȣ��" << endl;
	}
	~Munja()
	{
		delete[] str_;
		cout << "�Ҹ��� ȣ��" << endl;
	}

private:
	char* str_;
};

int main(void) {
	Munja m1 = Munja("abc");  //�Ϲݻ����� ȣ��
	Munja m2 = m1; //��������� ȣ��
	return 0;
}