﻿#include <SFML/Graphics.hpp>

using namespace sf;

int main(void) {
	RenderWindow window(VideoMode(640, 480), "Snake Game"); //  프레임 보이게
	//컴퓨터가 1초 동안 처리하는 횟수를 60으로 제한한다
	window.setFramerateLimit(60);
	RectangleShape snake;
	snake.setFillColor(Color::White);
	snake.setPosition(320, 240);
	snake.setSize(Vector2f(50, 20));

	while (window.isOpen())
	{
		Event e;
		while (window.pollEvent(e)) {
			// 윈도우의 x를 눌렀을 때 창이 닫아지도록
			if (e.type == Event::Closed)
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Right))
			snake.move(5,0);
		
		if (Keyboard::isKeyPressed(Keyboard::Left))
			snake.move(-5, 0);
		if (Keyboard::isKeyPressed(Keyboard::Up))
			snake.move(0, -5);
		if (Keyboard::isKeyPressed(Keyboard::Down))
			snake.move(0, 5);

		window.clear();

		window.draw(snake);
		window.display();
	}
	return 0;
}