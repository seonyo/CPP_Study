#include <iostream>

using namespace std;

class Animal {
public:
	Animal() { cout << "���� ������" << endl; }
	~Animal() { cout << "���� �Ҹ���" << endl; }
	void Bark(void) { cout << "���� ¢�´�" << endl; }
	void Eat(void) { cout << "���� �Դ´�" << endl; }
	void Hunt(void) { cout << "���� ����Ѵ�" << endl; }

private:
	int age_;
	int name_;
};

//�η��
class Crane : public Animal
{
public:
	// ������ ����� ��� �Ű������� ���� �θ�����ڰ� ȣ��ȴ�
	Crane() { cout << "�η�� ������" << endl; }	
	~Crane() { cout << "�η�� �Ҹ���" << endl; }
private:
	int leg_length_;
};

int main(void) {
	Crane* crane = new Crane();

	delete crane;
	return 0;
}