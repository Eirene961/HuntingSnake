﻿#include "Menu.h"


bool Menu()
{
	int cursorPos = 0;
	bool quit = false;
	do {
		system("cls");
		/*________ ________               __                __     __                               __
			 /        |             / /|              /  |   / /|                             /  |
			 █████████/  ___     __ ██/   __          ██ |   ██ | __    __  _______   _______ ██/  _______     ______
			 ██ |       /  |    / /\/  | / /|         ██     ██ |/  |  / /|/       \ /      /|/ /|/       \   /      \
			 ██ |_____  ██ |    ██ /██ | ██ |         ██ |   ██ |██ |  ██ |███████  |███████/ ██ |███████  | /██████/ \
			 ████████/| ██ |   ██ / ██ | ██ |         █████████ |██ |  ██ |██ |  ██ |  ██ |   ██ |██ |  ██ | ██    ██ |
			 ██ |        ██ | ██ /  ██ | ██ |_____    ██ |   ██ |██ \__██ |██ |  ██ |  ██ |   ██ |██ |  ██ |██     ██ |
			 ██ |______  ██/ ██ /   ██ | ██       |   ██ |   ██ |██    ██ |██ |  ██ |  ██ |   ██ |██ |  ██ | ██    ██ |
			 █████████/   ███ /     ██ / ████████/    ██/    ██/  ██████ / ██/   ██/   ██/    ██ /██/   ██/   ███████ |
			   ______                        __                                                                ____██ |
			  /      \                      /  |                                                              /    ██ |
			  /██████  | _______    ______  ██ |   __   ______                                                ██████ /
			  ██ \__██/ /       \  /      \ ██ |  /  | /      \
			  ██      \ ███████  | ██████  |██ |_/██/ /██████  |
			   ██████  |██ |  ██ | /    ██ |██   ██/  ██    ██ |
			  /  \__██ |██ |  ██ |/███████ |██████   ████████/
			  ██    ██/ ██ |  ██ |██    ██ |██ | ██  |██_______ |
			   ██████ / ██ /  ██ / ███████ /██ /  ██ / ███████ /*/

		TextColor(Blue);
		int x = 10, y = 1;
		GotoXY(x - 8, y++);
		cout << "         ________               __                __     __                               __";
		GotoXY(x, y++);
		cout << "/        |             / /|              /  |   / /|                             /  |";
		GotoXY(x, y++);
		cout << "\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB/  ___     __ \xDB\xDB/   __          \xDB\xDB |   \xDB\xDB | __    __  _______   _______ \xDB\xDB/  _______     ______";
		GotoXY(x, y++);
		cout << "\xDB\xDB |       /  |    / / \/  | / /|         \xDB\xDB     \xDB\xDB |/  |  / /|/       \  /      /|/ /|/       \    /      /\ ";
		GotoXY(x, y++);
		cout << "\xDB\xDB |_____  \xDB\xDB |    \xDB\xDB |\xDB\xDB | \xDB\xDB |         \xDB\xDB |   \xDB\xDB |\xDB\xDB |  \xDB\xDB |\xDB\xDB\xDB\xDB\xDB\xDB\xDB  |\xDB\xDB\xDB\xDB\xDB\xDB\xDB/ \xDB\xDB |\xDB\xDB\xDB\xDB\xDB\xDB\xDB  | /\xDB\xDB\xDB\xDB\xDB\xDB/ \ ";
		GotoXY(x, y++);
		cout << "\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB/| \xDB\xDB |   \xDB\xDB / \xDB\xDB | \xDB\xDB |         \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB |\xDB\xDB |  \xDB\xDB |\xDB\xDB |  \xDB\xDB |  \xDB\xDB |   \xDB\xDB |\xDB\xDB |  \xDB\xDB | \xDB\xDB    \xDB\xDB |";
		GotoXY(x, y++);
		cout << "\xDB\xDB |        \xDB\xDB | \xDB\xDB /  \xDB\xDB | \xDB\xDB |_____    \xDB\xDB |   \xDB\xDB |\xDB\xDB \__ \xDB\xDB |\xDB\xDB |  \xDB\xDB |  \xDB\xDB |   \xDB\xDB |\xDB\xDB |  \xDB\xDB |\xDB\xDB     \xDB\xDB |";
		GotoXY(x, y++);
		cout << "\xDB\xDB |______  \xDB\xDB/ \xDB\xDB /   \xDB\xDB | \xDB\xDB       |   \xDB\xDB |   \xDB\xDB |\xDB\xDB    \xDB\xDB |\xDB\xDB |  \xDB\xDB |  \xDB\xDB |   \xDB\xDB |\xDB\xDB |  \xDB\xDB | \xDB\xDB    \xDB\xDB |";
		GotoXY(x, y++);
		cout << "\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB/   \xDB\xDB\xDB /     \xDB\xDB / \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB/    \xDB\xDB/    \xDB\xDB/  \xDB\xDB\xDB\xDB\xDB\xDB / \xDB\xDB/   \xDB\xDB/   \xDB\xDB/    \xDB\xDB /\xDB\xDB/   \xDB\xDB/   \xDB\xDB\xDB\xDB\xDB\xDB\xDB |";
		GotoXY(x, y++);
		cout << "  ______                       __                                                                 ____\xDB\xDB |";
		GotoXY(x, y++);
		cout << " /      \                      /  |                                                               /    \xDB\xDB |";
		GotoXY(x, y++);
		cout << "/\xDB\xDB\xDB\xDB\xDB\xDB  | _______    ______  \xDB\xDB |   __   ______                                                 \xDB\xDB\xDB\xDB\xDB\xDB /";
		GotoXY(x, y++);
		cout << "\xDB\xDB \\__\xDB\xDB/ /       \\  /      \\ \xDB\xDB |  /  | /      \\";
		GotoXY(x, y++);
		cout << "\xDB\xDB      \\ \xDB\xDB\xDB\xDB\xDB\xDB\xDB  | \xDB\xDB\xDB\xDB\xDB\xDB  |\xDB\xDB |_/\xDB\xDB/ /\xDB\xDB\xDB\xDB\xDB\xDB  |";
		GotoXY(x + 1, y++);
		cout << "\xDB\xDB\xDB\xDB\xDB\xDB  |\xDB\xDB |  \xDB\xDB | /    \xDB\xDB |\xDB\xDB   \xDB\xDB/  \xDB\xDB    \xDB\xDB |";
		GotoXY(x, y++);
		cout << "/  \\__\xDB\xDB |\xDB\xDB |  \xDB\xDB |/\xDB\xDB\xDB\xDB\xDB\xDB\xDB |\xDB\xDB\xDB\xDB\xDB\xDB  \ \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB/ ";
		GotoXY(x, y++);
		cout << "\xDB\xDB    \xDB\xDB/ \xDB\xDB |  \xDB\xDB |\xDB\xDB    \xDB\xDB |\xDB\xDB | \xDB\xDB  |\xDB\xDB_______ |";
		GotoXY(x + 1, y++);
		cout << "\xDB\xDB\xDB\xDB\xDB\xDB / \xDB\xDB /  \xDB\xDB / \xDB\xDB\xDB\xDB\xDB\xDB\xDB /\xDB\xDB /  \xDB\xDB / \xDB\xDB\xDB\xDB\xDB\xDB\xDB /";

		TextColor(DefaultColor);
		for (int i = 0; i < 6; i++) {
			if (i == cursorPos)
				TextColor(Pink);
			else
				TextColor(Grey);
			GotoXY(x, y++);
			switch (i) {
			case 0:
				cout << "Start";
				break;
			case 1:
				cout << "Rank";
				break;
			case 2:
				cout << "About";
				break;
			case 3:
				cout << "Instruction";
				break;
			case 4:
				cout << "Setting";
				break;
			case 5:
				cout << "Exit";
				break;
			}
		}
		TextColor(0x07);
		char input = tolower(_getch());
		switch (input) {
		case 'w':
			if (cursorPos > 0)
				cursorPos--;
			break;
		case 's':
			if (cursorPos < 5)
				cursorPos++;
			break;
		case '\r':
			switch (cursorPos) {
			case 0:
				return true;
				break;
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				quit = true;
				break;
			}
		}
	} while (!quit);
	return false;
}