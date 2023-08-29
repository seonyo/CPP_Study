#include <iostream>

using namespace std;

template <typename T>

class Character {
public:
	Character(string name, T health, T attack, T defense):
		name_(name), health_(health), attack_(attack), defense_(defense)
	{
	}

	void print() {
		cout << "�̸� : " << name_ << endl;
		cout << "ü�� : " << health_ << endl;
		cout << "���� : " << attack_ << endl;
		cout << "��� : " << defense_ << endl;
	}
private:
	string name_;
	T health_;
	T attack_;
	T defense_;
};

int main(void) {
	Character <int> * c1=  new Character <int> ("������", 100, 30, 10);
	c1->print();
	delete c1;

}