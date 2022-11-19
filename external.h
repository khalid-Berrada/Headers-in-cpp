#include <iostream>

#ifndef EXTERNAL_H
#define EXTERNAL_H

class Player {

public:
	int speed;
	Player() {
		speed = 5;
	}

	~Player() {}
};

void Print() {
	// Testing
	std::cout << "test run good" << std::endl;
}

bool isPlaying = true;

#endif
