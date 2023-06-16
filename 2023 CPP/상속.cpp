#include <iostream>

using namespace std;

class Animal {
public:
	Animal(int age, string name) : age_(age), name_(name)
	{
		cout << "���� ������" << endl; 

	}

	~Animal() { cout << "���� �Ҹ���" << endl; }
	//���� ���ε� (�����Լ�)
	void Bark(void) { cout << "���� ¢�´�" << endl; }
	void Eat(void) { cout << "���� �Դ´�" << endl; }
	void Hunt(void) { cout << "���� ����Ѵ�" << endl; }

private:
	int age_;
	string name_;
};

//�η��
class Crane : public Animal
{
public:
	// ������ ����� ��� �Ű������� ���� �θ�����ڰ� ȣ��ȴ�
	Crane(int age, string name, int leg_length) : Animal(age, name)
	{ 
		cout << "�η�� ������" << endl; 
		leg_length_ = leg_length;
	}
	~Crane() { cout << "�η�� �Ҹ���" << endl; }

	void Bark(){
		cout << "�η�η�" << endl;
	}

private:
	int leg_length_;
};

int main(void) {
	Animal* animal = new Animal(18, "������");
	animal->Bark();	//���� ¢�´�
	delete animal;  

	animal =  new Crane(3, "����", 108);
	animal->Bark(); //���� ¢�´� (���� ���ε����� ���� �θ��� ����Լ��� ȣ��)

	delete animal;
	return 0;
}