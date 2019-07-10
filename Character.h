#pragma once

#include <string>

class Character {
	std::string image_file_;
	int x_pos_;
	int y_pos_;
	float dx_;
	float dy_;

public:
	Character(int x, int y, std::string image_file);
	~Character();
	
	int GetXPos() const;
	int GetYPos() const;

	void SetXPos(int x_pos);
	void SetYPos(int y_pos);
	void SetDx(int dx);
	void SetDy(int dy);

	void Jump(float jumpSpeed, float fallSpeed, int max_y);
};

