#include <iostream>

using namespace std;

template <typename T>
T sum(T a, T b) {
	T z = a + b;
	return z;
}

int main(void) {
	cout << sum<int>(2, 3) << endl;
	cout << sum<double>(3.1, 4.6) << endl;

}