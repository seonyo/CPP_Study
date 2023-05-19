#include <SFML/Graphics.hpp>

using namespace sf;

int main(void) {
	RenderWindow window(VideoMode(640, 480), "Snake Game"); //  프레임 보이게
	
	while (window.isOpen())
	{
		Event e;
		while (window.pollEvent(e)) {
			if (e.type == Event::Closed)
				window.close();
		}
		window.clear();
		window.display();
	}
	return 0;
}