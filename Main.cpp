// flashing characters stack & symmetry
// Aydin Azari Farhad
// Jan 13th 2019
#include <iostream>//creates a symmetric shape made of single characters
int main() {
	int val =14; //sets the number of lines
	char c = '&'; //determines the print character
		std::cout << ("\n");
	for (int line = val; line >= 1; line--) { //determines the line
		std::cout << ("\t");
		for (int chr = line; chr >= 1; chr--) { //determies the number of charaters for the line
			std::cout << (c);
		}
		for (int space = 2 * (val - line); space > 0; space--) { //determines the number of spaces to create symmetry
			std::cout << (" ");
		}
		for (int chr = line; chr >= 1; chr--) { //prints characters again to create symmetry
			std::cout << (c);
		}
		std::cout << ("\n"); //moves to the next line
	}
	// invertion symmetry 
	for (int line = 1; line <= val; line++) { //determines the line
		std::cout << ("\t");
		for (int chr = 1; chr <= line; chr++) { //determies the number of charaters for the line
			std::cout << (c);
		}
		for (int space = 2*(val-line); space > 0; space--) { //determines the number of spaces to create symmetry
			std::cout << (" ");
		}
		for (int chr = 1; chr <= line; chr++) { //prints characters again to create symmetry
			std::cout << (c);
		}
		std::cout << ("\n"); //moves to the next line
	}
//empty space in the outer part and characters in center 
		for (int line = val; line >= 1; line--) { //determines the line
		std::cout << ("\t");
		for (int chr = line; chr >= 1; chr--) { //determies the number of charaters for the line
			std::cout << (" ");
		}
		for (int space = 2 * (val - line); space > 0; space--) { //determines the number of spaces to create symmetry
			std::cout << (c);
		}
		for (int chr = line; chr >= 1; chr--) { //prints characters again to create symmetry
			std::cout << (" ");
		}
		std::cout << ("\n"); //moves to the next line

	}
	// invertion symmetry 
	for (int line = 1; line <= val; line++) { //determines the line
		std::cout << ("\t");
		for (int chr = 1; chr <= line; chr++) { //determies the number of charaters for the line
			std::cout << (" ");
		}
		for (int space = 2 * (val - line); space > 0; space--) { //determines the number of spaces to create symmetry
			std::cout << (c);
		}
		for (int chr = 1; chr <= line; chr++) { //prints characters again to create symmetry
			std::cout << (" ");
		}
		std::cout << ("\n"); //moves to the next line

	}
	std::cout << ("\tAydin Azari Farhad \tJan 13th, 2019\n");
	system("echo its show time!!!		PRESS ENTER"); 
	std::cin.get();
	while (true) //how to break this without get char<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
	{
		system("color c"); system("color c"); system("color a"); system("color a");
	}
	return (0); //anything after this will not be executed?? <<<<<<<<<<<<<<<<<<<<<<<<<<<<
	//getchar(); //why does this not work? <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
}
// <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>
