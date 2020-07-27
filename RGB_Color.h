#pragma once
class RGB_Color {
private:
	int red, green, blue;
public:
	RGB_Color(int red_1 = 255, int green_1 = 255, int blue_1 = 255) { set_color(red_1, green_1, blue_1); };
	void set_color(int red_1, int green_1, int blue_1) { set_red(red_1); set_green(green_1); set_blue(blue_1); };
	int get_red() const { return red; };
	int	get_green() const { return green; };
	int	get_blue() const { return blue; };
	void set_red(int red_1);
	void set_green(int green_1);
	void set_blue(int blue_1);
	void display();
	bool input_color();
};
