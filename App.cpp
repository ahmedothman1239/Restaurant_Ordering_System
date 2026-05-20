#include <iostream>

using namespace std;
struct stchoice
{
	int choice;
	int totalbill=0;
	int foodchoice;
};
void Menu()
{
	cout << "Welcome to the Restaurant Ordering System!" << endl;
	cout << "Please select an option:" << endl;
	cout << "1. View Menu" << endl;
	cout << "2. Place Order" << endl;
	cout << "3. Exit" << endl;
}
void FoodMenu()
{
	cout << "**********Menu*********\n";
	cout << "1. Pizza--------------$10\n";
	cout << "2. Burger-------------$8\n";
	cout << "3. Pasta--------------$12\n";
	cout << "4. Shawarma-----------$9\n";
	cout << "5. Fried Chicken------$15\n";
	cout << "6. Hot Dog------------$7\n";
	cout << "7. French Fries-------$5\n";
	cout << "8. Koshary------------$6\n";
	cout << "9. Grilled Fish-------$18\n";
	cout << "10. Pepsi-------------$2\n";
	cout << "11. Water-------------$1\n";

}
void choice(stchoice& System)
{
	while (true)
	{
		Menu();
		cout << "Enter you choice: ";
		cin >> System.choice;

		if (System.choice == 1)
		{
			FoodMenu();
			
		}
		if (System.choice == 2)
		{
			FoodMenu();
			cout << "choice you food: ";
			cin >> System.foodchoice;
			switch (System.foodchoice)
			{
			case 1:
				cout << "You ordered Pizza. Total bill: $10" << endl; 
				System.totalbill += 10;
				break;
			case 2:
				cout << "You ordered Burger. Total bill: $8" << endl;
				System.totalbill += 8;
				break;
			case 3:
				cout << "You ordered Pasta. Total bill: $12" << endl;
				System.totalbill += 12;
				break;
			case 4 :
				cout << "You ordered Shawarma. Total bill: $9" << endl;
				System.totalbill += 9;
				break;
			case 5:
				cout << "You ordered Fried Chicken. Total bill: $15" << endl;
				System.totalbill += 15;
				break;
			case 6:
				cout << "You ordered Hot Dog. Total bill: $7" << endl;	
				System.totalbill += 7;
				break;
			case 7:
				cout << "You ordered French Fries. Total bill: $5" << endl;
				System.totalbill += 5;
				break;
			case 8:
				cout << "You ordered Koshary. Total bill: $6" << endl;
				System.totalbill += 6;
				break;
			case 9:
				cout << "You ordered Grilled Fish. Total bill: $18" << endl;
				System.totalbill += 18;
				break;
			case 10:
				cout << "you ordered Pepsi. Total bill: $2" << endl;
				System.totalbill += 2;
				break;
			case 11:
				cout << "You ordered Water. Total bill: $1" << endl;
				System.totalbill += 1;
				break;

			default:
				cout << "Invalid choice. Please try again." << endl;
				break;
			}

		}
		else if (System.choice == 3)
		{
			cout << "Your total bill = $" << System.totalbill << endl;
			cout << "Good Bye!\n";
			break;
		}
		
	}
}
int main()
{
	stchoice System;
	choice(System);

	return 0;
}