#include <iostream>
#include <string>

using namespace std;

struct pizza { //구조체 (여러개의 데이터를 한꺼번에 담겨 있는 것)
	string brand;
	string menu;

};
int main(void) {
	struct pizza 오늘먹을피자;
	오늘먹을피자.brand = "피자스쿨";
	오늘먹을피자.menu = "콤비네이션";

	cout << "브랜드 : " << 오늘먹을피자.brand << endl;
	cout << "메뉴 : " << 오늘먹을피자.menu << endl;
	return 0;
}