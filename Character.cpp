#include "Character.h"

Character::Character(int x_pos, int y_pos, std::string image_file) {
	x_pos_ = x_pos;
	y_pos_ = y_pos;
	dx_ = 0;
	dy_ = 0;
	image_file_ = image_file;
}

Character::~Character() {

}

int Character::GetXPos() const {
	return x_pos_;
}

int Character::GetYPos() const {
	return y_pos_;
}

void Character::SetXPos(int x_pos) {
	x_pos_ = x_pos;
}

void Character::SetYPos(int y_pos) {
	y_pos_ = y_pos;
}

void Character::SetDx(int dx) {
	dx_ = dx;
}

void Character::SetDy(int dy) {
	dy_ = dy;
}

void Character::Jump(float jump_speed, float fall_speed, int max_y) {
	dy_ += jump_speed;
	y_pos_ += dy_;

	if (y_pos_ > max_y) {
		dy_ = fall_speed;
	}
}