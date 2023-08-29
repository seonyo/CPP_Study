#include <iostream>
using namespace std;

class Dog : public Animal {
public:
	void bark(void) {
		cout << "¸Û¸Û" << endl;
	}
private:
	int speed;
};
