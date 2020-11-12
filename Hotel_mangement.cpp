#include <bits/stdc++.h>
using namespace std;
class Hotel
{
public:
	void room();
	void food();
	void breakfast();
	void lunch();


};
void Hotel::room()
{
	int a, b;
	cout << "   ";
	cout << "Choose What you need" << endl;
	cout << "   ";
	cout << "1.Single Bed" << endl << "Price = 800/tk Per night" << endl;
	cout << "   ";
	cout << "2.Double Bed" << endl << "Price = 1200/tk Per night" << endl;
	cout << "   ";
	cin >> a;
	cout << "How many nights you want to stay?? :";
	cin >> b;
	if (a == 1)
	{
		cout << "   ";
		cout << "Room booked successfully" << endl;
		cout << "   ";
		cout << "total Amount = " << 800 * b << "/tk" << endl;
	}
	else
	{
		cout << "   ";
		cout << "Room booked successfully" << endl;
		cout << "   ";
		cout << "total Amount = " << 1200 * b << "/tk" << endl;

	}



}
void Hotel:: food()
{
	int choice;
	cout << "   ";
	cout << "1. Breakfast" << endl;
	cout << "   ";
	cout << "2. Lunch" << endl;
	cout << "   ";
	cout << "3. Dinner" << endl;
	cout << "   ";
	cout << "Choose your Menue:" << endl;
	cin >> choice;
	if (choice == 1)
		breakfast();
	if (choice == 2)
		lunch();


}
void Hotel::  breakfast()
{
	int item;
	string s;
	int tea, ruti, parata, dal, amount = 0;
	cout << "   ";
	cout << "Menu:" << endl;
	cout << "   ";
	cout << "Tea = 10/tk" << endl;
	cout << "   ";
	cout << "Nun Ruti = 8/tk" << endl;
	cout << "   ";
	cout << "Parata = 8/tk" << endl;
	cout << "   ";
	cout << " Dal= 20/tk" << endl;
	cout << "   ";

	cout << "How many items will you order" << endl;
	cin >> item;
	cout << "   ";
	cout << "Type what item you need" << endl;
	for (int i = 1; i <= item; i++)
	{
		cout << "   ";
		cout << "Name of item: ";
		cin >> s;
		if (s == "tea" || s == "Tea")
		{
			cout << "   ";
			cout << "Number of tea: " ;
			cin >> tea;
			amount += (tea * 10);
		}
		if (s == "Nun" || s == "nun")
		{
			cout << "   ";
			cout << "Number of Nun: " ;
			cin >> ruti;
			amount += (ruti * 8);
		}
		if (s == "parata" || s == "Parata")
		{
			cout << "   ";
			cout << "Number of Parata: " ;
			cin >> parata;
			amount += (parata * 8);
		}
		if (s == "Dal" || s == "dal")
		{
			cout << "   ";

			cout << "Number of Dal: " ;
			cin >> dal;
			amount += (dal * 20);
		}
	}
	cout << "   ";
	cout << "Total amount = " << amount << "/tk" << endl;
	cout << "   ";
	cout << "Thank You sir for your order we will serve you in 10 minutes" << endl << endl;

}
void Hotel::lunch()
{
	int item;
	int num;
	int beef, chicken, kacchi, bhuna, amount = 0;
	cout << "   ";
	cout << "Menu:" << endl;
	cout << "   ";
	cout << "1.Beef-Biriyani = 150/tk" << endl;
	cout << "   ";
	cout << "2.Chicken-Biriyani = 130/tk" << endl;
	cout << "   ";
	cout << "3.Kacchi = 180/tk" << endl;
	cout << "   ";
	cout << "4.Bhuna kichuri= 120/tk" << endl;
	cout << "   ";
	cout << "How many items will you order" << endl;
	cout << "   ";
	cin >> item;
	cout << "   ";
	cout << "choose item Number" << endl;
	for (int i = 1; i <= item; i++)
	{
		cout << "   ";
		cout << "Number of item: ";
		cin >> num;
		if (num == 1)
		{
			cout << "   ";
			cout << "Number of Beef-biriyani: " ;

			cin >> beef;
			amount += (beef * 150);
		}
		if (num == 2)
		{
			cout << "   ";
			cout << "Number of Chicken-biriyani: " ;
			cin >> chicken;
			amount += (chicken * 130);
		}
		if (num == 3)
		{
			cout << "   ";
			cout << "Number of Kacchi-biriyani: " ;
			cin >> kacchi;
			amount += (kacchi * 180);
		}
		if (num == 4)
		{
			cout << "   ";
			cout << "Number of Bhuna-Kichuri: " ;
			cin >> beef;
			amount += (bhuna * 120);
		}
	}
	cout << "   ";
	cout << "Total amount = " << amount << "/tk" << endl;
	cout << "   ";

	cout << "Thank You sir for your order we will serve you in 20 minutes" << endl << endl;

}
int main()
{
	Hotel h;
	int n;
	cout << "                Welcome To The Hotel Radison    " << endl << endl;
	cout << "   ";
	cout << "Our services: " << endl;
	cout << "   ";
	cout << "1.Room Service" << endl;
	cout << "   ";
	cout << "2.Food service" << endl;
	cout << "   ";
	cout << "Choos the number of service you want" << endl;
	cout << "   ";
	cout << "3.Exit" << endl;
	cin >> n;
	if (n == 1)
	{
		h.room();
		main();
	}
	if (n == 2)
	{
		h.food();
		main();
	}
	if (n == 3)
	{
		return 0;
	}


}


