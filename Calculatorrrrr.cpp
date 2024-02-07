// Calculatorrrrr.cpp


#include "Keypad.h"
#include "Disp.h"

int main()
{
	RenderWindow win(VideoMode(600, 800), "Calc");
	Event event;
	int i = 20;
	win.setFramerateLimit(30);
	Butt butt(300, 400, 120, 70, Color::Magenta, "9");
	KeyPad keyPad(5, 4, 600, 800);
	Disp disp;
	while (win.isOpen()) {
		while (win.pollEvent(event))  // Цикл игровых событий: нажатие клавишь, перемещение мышки и другие.
		{
			if (event.type == Event::Closed) win.close(); // Закрыть окно
			keyPad.mousePresKeyPad(win, event, disp.getStrok());
		}
		win.clear();
		keyPad.print(win);
		disp.printDisp(win);
		win.display();
	}

	//переходим в nump() d KeyPad

}


