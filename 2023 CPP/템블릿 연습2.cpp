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
		cout << "이름 : " << name_ << endl;
		cout << "체력 : " << health_ << endl;
		cout << "공격 : " << attack_ << endl;
		cout << "방어 : " << defense_ << endl;
	}
private:
	string name_;
	T health_;
	T attack_;
	T defense_;
};

int main(void) {
	Character <int> * c1=  new Character <int> ("핑핑이", 100, 30, 10);
	c1->print();
	delete c1;

}