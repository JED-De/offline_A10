#pragma once
#include <iostream>
#include "RGB_Color.h"

void RGB_Color::set_red(int red_1)
{
	if (0 <= red_1 && red_1 <= 255)
	{
		red = red_1;
	}
}
void RGB_Color::set_green(int green_1)
{
	if (0 <= green_1 && green_1 <= 255)
	{
		green = green_1;
	}
}
void RGB_Color::set_blue(int blue_1 = 0)
{
	if (0 <= blue_1 && blue_1 <= 255)
	{
		blue = blue_1;
	}
}
void RGB_Color::display()
{
	std::cout << "rot: " << get_red() << " gruen: " << get_green() << " blau: " << get_blue() << std::endl;
}
bool RGB_Color::input_color()
{
	int eingabe_rot, eingabe_gruen, eingabe_blau;
	std::cout << "rot (0...255): ? ";
	std::cin >> eingabe_rot;
	if (!(0 <= eingabe_rot && eingabe_rot <= 255))
	{
		return false;
	}
	std::cout << "gruen (0...255): ? ";
	std::cin >> eingabe_gruen;
	if (!(0 <= eingabe_gruen && eingabe_gruen <= 255))
	{
		return false;
	}
	std::cout << "blau (0...255): ? ";
	std::cin >> eingabe_blau;
	if (!(0 <= eingabe_blau && eingabe_blau <= 255))
	{
		return false;
	}
	set_color(eingabe_rot, eingabe_gruen, eingabe_blau);
	return true;
}