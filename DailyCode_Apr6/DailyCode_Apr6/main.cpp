#include<iostream>

using namespace std;

void show_menu();

void show_index(int i);

void show_year(int y);

int main() {//open mane

	int index = 0;
	int year = 0;
	char input ='h';

	show_menu();
	while (input != 'q') {//start game loop
		cin >> input;
		if (input == 'h')
			show_menu();
		else if (input == 'i')
			show_index(index);
		else if (input == 'y')
			show_year(year);

	}//close loop
}//close main

void show_menu() {
	
		cout << "h - help" << endl;
		cout << "i - show age of the Oz book for that index" << endl;
		cout << " q - quit" << endl;
		cout << "y - show the Oz book for that year" << endl;
}

void show_index(int i) {
	cout << "What index?" << endl;
	cin >> i;
	if (i == 1)
		cout << "Was published 117 years ago" << endl;


	else if (i == 2)
		cout << "Was published 113  years ago" << endl;


	else if (i == 3)
		cout << "Was published 110 years ago" << endl;


	else if (i ==4 )
		cout << "Was published 109  years ago" << endl;


	else if (i ==5 )
		cout << "Was published  108 years ago" << endl;


	else if (i == 6)
		cout << "Was published 107 years ago" << endl;


	else if (i == 7)
		cout << "Was published 104 years ago" << endl;


	else if (i == 8)
		cout << "Was published  103 years ago" << endl;


	else if (i == 9)
		cout << "Was published 102 years ago" << endl;


	else if (i ==10 )
		cout << "Was published  102 years ago" << endl;


	else if (i == 11)
		cout << "Was published 101 years ago" << endl;


	else if (i == 12)
		cout << "Was published 100 years ago" << endl;


	else if (i == 13)
		cout << "Was published 99 years ago" << endl;


	else if (i == 14)

		cout << "Was published 98 years ago" << endl;


}
 
void show_year(int y) {
	cout << "What year?" << endl;
	cin >> y;
	if (y == 1900)
		cout << "The Wonderful Wizard of Oz" << endl;

	else if (y == 1904)
		cout << "The Marvelous Land of Oz" << endl;

	else if (y == 1907)
		cout << "Ozma of Oz" << endl;

	else if (y == 1908)
		cout << "Dorothy and the Wizard in Oz" << endl;

	else if (y == 1909)
		cout << "The Road to Oz" << endl;

	else if (y == 1910)
		cout << "The Emerald City of Oz" << endl;

	else if (y == 1913)
		cout << "The Patchwork Girl of Oz" << endl;

	else if (y == 1914)
		cout << "Tik-Tok of Oz" << endl;

	else if (y == 1915)
		cout << "The Scarecrow of Oz" << endl;

	else if (y == 1916)
		cout << "Rinkitink in Oz" << endl;

	else if (y == 1917)
		cout << "The Lost Princess of Oz" << endl;

	else if (y == 1918)
		cout << "The Tin Woodman of Oz" << endl;

	else if (y == 1919)
		cout << "The Magic of Oz" << endl;

	else if (y == 1920)
		cout << "Glinda of Oz" << endl;

	else
		cout << "Only these years work: 1920, 1919, 1918, 1917, 1916, 1915, 1914, 1913, 1910, 1909, 1908, 1907, 1904, and 1900" << endl;
}    
