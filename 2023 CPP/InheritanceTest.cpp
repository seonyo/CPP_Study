#include <iostream>

using namespace std;

class Shape {
public:
	Shape(int point, int positionX, int positionY) : point_(point), positionX_(positionX), positionY_(positionY)
	{
	}

	 void get_point_cout() {
		cout << point_ << "개 만큼 있습니다" << endl;
	}
	 void get_position() {
		cout << "위치 : (" << positionX_ << "," << positionY_ << ")" << endl;
	}
	 void draw() {
		 cout << "그림 그리기 완료";
	 }
private:
	int point_;
	int positionX_;
	int positionY_;

};

class RectangleShape : public Shape {
public:
	RectangleShape(int point, int PositionX, int positionY, int width, int height) : Shape(point, PositionX, positionY), width_(width), height_(height)
	{}
	void area() {
		cout << "사각형의 넓이 : " << width_ * height_ << endl;
	}

private:
	int width_;
	int height_;
};

class CircleShape : public Shape{
public:
	CircleShape(int point, int positionX, int positionY, int radius) : Shape(point, positionX, positionY), radius_(radius){}
	void area() {
		cout << "원의 넓이 : " << radius_ * radius_ * 3.14 << endl;
	} 
private:
	int radius_;
};

int main(void) {
	RectangleShape* re1 = new RectangleShape(4, 8, 6, 5, 4);
	re1->get_point_cout();
	re1->get_position();
	re1->draw();
	re1->area();

	CircleShape* ci1 = new CircleShape(0, 10, 30, 8);
	ci1->get_point_cout();
	ci1->get_position();
	ci1->draw();
	ci1->area();
	
	delete ci1;
	delete re1;
	return 0;
}