/*
 * Derek T. Klapchar
 * cs 111
 * 4-20-2016
 *This program lets you select a pokemon to use in the battle against the super powerful pokemon mewtwo.  
 *It uses a random dye roll to select if you win or not.  odd you lose, even you win.
 */

#include <iostream>
#include <cstdlib>
using namespace std;

class Dice {
	public:
		Dice();//default constructor
		Dice(int); //alt constructor
		int roll();

		//getters/setters
		void setNumSides(int);
		int getNumSides();
	private:
		int numSides;
};

/*
 * Defualt constructor.
 */
Dice::Dice() {
	srand(time(NULL)); //starts the random number generator
	numSides = 6;
}

/*
 * Simulate a roll of the dice.
 * @return a random value between 1 and 6
 */

int Dice::roll() {
	return (rand() % numSides) + 1;
}


int Dice::getNumSides(){
	return numSides;
}

void printInstructions();
void printMenu();
int getMenuChoice();



int main(){
	int userMenuChoice;
	int number;// used for knowing if the dye rolled a even or odd number.
	char answer;//for slecting if they are ready to fight mewtwo or not.,
	Dice myDice;
	do {
		printInstructions();
		printMenu();
		userMenuChoice = getMenuChoice();
		number = myDice.roll() % 2;
		if(userMenuChoice == 1){
			cout << "***********************************************" << endl;	
			cout << "Congratulations you have selected Charizard!  *" << endl;
			cout << "Now you have to battle Mewtwo!                *" << endl;
			cout << "ARE YOU READY?!?!?!?!?!? (Y/N): ";
			cin  >> answer;
			cout << "***********************************************" << endl;
		 	
			if(answer == 'Y' || answer == 'y'){	
				if(number == 0){
					cout << "***************************************************************************" << endl;
					cout << "You could NOT defeat Mewtwo youll never be the best like no one ever was. *" << endl;
					cout << "***************************************************************************" << endl;
				} else{
					cout << "***************************************************************************" << endl;
					cout << "You Won, you might have a chance to be the very best like no one ever was.*" << endl;
					cout << "***************************************************************************" << endl;
				}	
			}
		}else if(userMenuChoice == 2){
			cout << "**********************************************" << endl;
			cout << "Congratulations you have selected Blastoise! *" << endl;
			cout << "Now you have to battle Mewtwo!               *" << endl;
			cout << "ARE YOU READY?!?!?!?!?!? (Y/N): ";
			cin  >> answer;
			cout << "**********************************************" << endl;
		
			if(answer == 'Y' || answer == 'y'){
				if(number == 0){
					cout << "***************************************************************************" << endl;
					cout << "You could Not defeat Mewtwo youll never be the best like no one ever was. *" << endl;
					cout << "***************************************************************************" << endl;
				} else{
					cout << "***************************************************************************" << endl;
					cout << "You Won, you might have a chance to be the very best like no one ever was.*" << endl;
					cout << "***************************************************************************" << endl;
				}
			}

		}else if(userMenuChoice == 3){
			cout << "**********************************************" << endl;
			cout << "Congratulations you have selected Venusaur!  *" << endl;
			cout << "Now you have to battle Mewtwo!               *" << endl;
			cout << "ARE YOU READY?!?!?!?!?!?! (Y/N): ";
			cin  >> answer;
			cout << "**********************************************" << endl;
			
			if(answer == 'Y' || answer == 'y'){
				if(number == 0){
					cout << "***************************************************************************" << endl;
					cout << "You could Not defeat Mewtwo youll never be the best like no one ever was. *" << endl;
					cout << "***************************************************************************" << endl;
				} else{
					cout << "***************************************************************************" << endl;
					cout << "You Won, you might have a chance to be the very best like no one ever was.*" << endl;
					cout << "***************************************************************************" << endl;

				}	
			}
		}			
	}while(userMenuChoice != 4);
	cout << "************************************************************" << endl;
	cout << "Youll never be the best like no one ever was by quitting   *" << endl;
	cout << "************************************************************" << endl;
		
	return 0;
}
// This function prints out the actually instructions of the game and tells you how you win and lose.
void printInstructions(){
	cout << "***************************************************" << endl;
	cout << "Instructions                                      *" << endl;
	cout << "You will be selecting one pokemon to battle with. *" << endl;
	cout << "If you roll an even number you Win!               *" << endl;
	cout << "If you roll an odd number you Lose!               *" << endl;
	cout << "***************************************************" << endl;
}
// This function lets the user select the pokemon they want to battle with or lets them quit the game.
void printMenu(){
	cout << "**********************************" << endl;
	cout << "1. Charizard                     *" << endl;
	cout << "2. Blastoise                     *" << endl;
	cout << "3. Venusaur                      *" << endl;
	cout << "4. Quit                          *" << endl;
	cout << "**********************************" << endl;
}
//This function gets the users menu choice and stores it so the program knows which option was selected.
int getMenuChoice(){
	int choice;
	cout << "Enter your option (1-4) now: ";
	cin  >> choice;

	while(choice < 1 || choice > 4){
		cout << "Invalid entry.  Enter a valid menu option (1-4): ";
		cin  >> choice;
	}
	
	return choice;
}


















