#include <iostream>
#include <time.h>

using namespace std;

void color_change();

int main() {

	while (1) {
		color_change();
		system("pause");
	}


}

void color_change() {

	int color = rand() % 100 + 1;

	if (color <= 25) {
		system("Color 10");
	}
	else if (color >= 26 && color <= 50) {
		system("Color 20");
	}
	else{
		system("Color 40");
	}
}