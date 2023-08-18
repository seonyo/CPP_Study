#include <iostream>

using namespace std;

class Shape {
public:
	Shape(int point, int positionX, int positionY) : point_(point), positionX_(positionX), positionY_(positionY)
	{
	}

	 void get_point_cout() {
		cout << point_ << "�� ��ŭ �ֽ��ϴ�" << endl;
	}
	 void get_position() {
		cout << "��ġ : (" << positionX_ << "," << positionY_ << ")" << endl;
	}
	 void draw() {
		 cout << "�׸� �׸��� �Ϸ�";
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
		cout << "�簢���� ���� : " << width_ * height_ << endl;
	}

private:
	int width_;
	int height_;
};

class CircleShape : public Shape{
public:
	CircleShape(int point, int positionX, int positionY, int radius) : Shape(point, positionX, positionY), radius_(radius){}
	void area() {
		cout << "���� ���� : " << radius_ * radius_ * 3.14 << endl;
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