#include <iostream>
#include <stdio.h> 
#include <string> 

#include <stdlib.h> 
#include <time.h> 

using namespace std;


int main() {

	string name;

	int menu;

	int bet;
	int balance;
	int dice;
	int choice;


	int hold;

	do {

		system("cls");
		cout << "[1] Play" << endl;
		cout << "[2] Rules" << endl;
		cout << "[3] Exit" << endl;
		cout << "Choose an option. eg 1" << endl;
		cin >> menu;

		if (menu == 1 || menu == 2 || menu == 3) {



		}
		else if (menu != 1 || menu != 2 || menu != 3) {

			cin.clear(); //This part was copied from online 
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //This part was copied from online 

			cout << "That's not a valid option. Press any key to continue.";
			system("pause >NUL");


		}


	} while (menu <= 0 || menu >= 4);
	switch (menu)
	{
	case 1: //Play 

		system("cls");
		cout << "Enter your name: ";
		cin >> name;
		system("cls");
		cout << "Enter amount you want to deposit: (100-1000)" << endl;
		cin >> balance;
		system("cls");
		while (balance <= 99 || balance >= 1001) { //While balance is less than or equal to 99. 
			system("cls");
			cout << "Invalid amount. " << "Amount must be between 100 and 1000." << endl;
			balance = 0;
			cout << "Enter amount you want to deposit: (100-1000)" << endl;
			cin >> balance;
		}

		do {

			system("cls");
			cout << "Enter amount you want to bet: (100-1000) " << endl;
			cin >> bet;

		} while (bet <= 99 || bet >= 1001 || bet >= balance + 1); {

		}

		do {
			system("cls");
			cout << "Welcome " << name << endl;
			cout << "Your balance is: " << balance << "$" << endl;
			cout << "Your bet is: " << bet;
			cout << "Choose and number between 1 and 10. ";

			if (balance <= 0) {

				system("cls");
				cout << "You have no money left." << endl;
				cout << "Balance: " << balance << endl;
				cout << "Game Over!" << endl;
				system("pause >NUL");
				break;



			}

			cin >> choice;

			if (choice == 1 || choice == 2 || choice == 3 ||
				choice == 4 || choice == 5 || choice == 6 ||
				choice == 7 || choice == 8 || choice == 9 ||
				choice == 10) {


				system("cls");

				srand(time(NULL));
				dice = (rand() % 10) + 1;

				if (choice == dice) {

					cout << "Winning number was: " << dice << endl;
					cout << "You win * 10 your bet." << endl;

					hold == bet;

					bet * 10;
					balance = balance + bet;
					bet == hold;

				}
				else {
					cout << "You did not win. Winning number was: " << dice << endl;

					cout << bet << endl;
					balance = balance - bet;
					cout << balance << endl;
					system("pause");


				}


				system("pause");


			}

		} while (
			choice != 1 || choice != 2 || choice != 3 ||
			choice != 4 || choice != 5 || choice != 6 ||
			choice != 7 || choice != 8 || choice != 9 ||
			choice != 10); {
		}

		system("pause >NUL");


		break;


		/*

		Todo
		color 0a on win
		red color on lose
		bug fixes


		srand(time(NULL));
		dice = (rand() % 10) + 1;
		//Dice has random value now between 1 to 10.

		########

		*/








	case 2: //Rules 

		cout << "~ ~ ~ ~ Rules ~ ~ ~ ~" << endl;
		cout << "Your deposited amount must be between 100-1000" << endl;
		cout << "Your bet must be between 100-1000" << endl;
		system("pause >NUL");
		break;


	case 3: //Exit 


		break;

	default: //default 

			 //default 

		break;

	}




	return 0;
}
