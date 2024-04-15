// author @Angphurba
// my future resturant inventory

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;



int main()

{

	double basic = 5, burn = 5, wildfire = 6, volcano = 7, island = 5, heat = 6, basicbbq = 5, sweetbbq = 6, volcanobbq = 7;
	int choice, q1=0 , q2 = 0, q3 = 0, q4 = 0, q5 = 0, q6 = 0, q7 = 0, q8 = 0, q9 = 0;
		double total, tax_total;
		string firstname, lastname, house, street, city, state, phn;
		
			

		cout << "WELCOME TO BUBBA TUB'S BBQ RUB!" << endl << endl;
		cout << "CUSTOMER DETAIL" << endl;
		cout << " First Name:";
		cin >> firstname;
		cout << " Last Nmae:";
		cin >> lastname;
		cout << " House No.:";
		cin >> house;
		cout << " Street Name:";
		cin >> street;
		cout << " City:";
		cin >> city;
		cout << " State:";
		cin >> state;
		cout << "Phone No.:\n";
		cin >> phn;
		cout << "Thank you" << endl << endl;

		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);

		while (1)
		{
			
				
				
				
				cout << "NOTE: Currently, we only have 1000 unit of each product " << endl  << endl;

               
				cout << "PLEASE MAKE SELECTION: PRODUCT(INREGDIENT) - PRICE" << endl << endl;
				cout << " NOTE: $2 is added on each product for bottling" << endl << endl;
				
				cout << "Enter 1 for Basic Dry Rub(1,2,3,4,5,7,13) - $" << basic << endl;
				cout << "Enter 2 for Basic Burn Dry Rub(1,2,3,4,5,7,13) - $" << burn << endl;
				cout << "Enter 3 for Wildfire Dry Rub(2,3,4,5,7,8,12,13) - $" << wildfire << endl;
				cout << "Enter 4 for Volcano Dry Rub(2,3,4,5,7,8,12,13,20) - $" << volcano << endl;
				cout << "Enter 5 for Island Dry Rub(2,3,4,6,7,18) - $" <<  island << endl;
				cout << "Enter 6 for Island heat Dry Rub(2,3,4,6,7,13,18) - $" << heat << endl;
				cout << "Enter 7 for Basic BBQ Sauce(1,2,3,4,5,7,13,14,15,16,17) - $" << basicbbq << endl;
				cout << "Enter 8 for Sweet BBQ Sauce(1,2,3,4,5,14,15,16,17,18,19) - $" << sweetbbq << endl;
				cout << "Enter 9 for Volcano BBQ Sauce(2,3,4,5,7,8,9,12,13,14,15,16,17,20) - $" << volcanobbq << endl;
				cout << "ENTER 0 FOR INGREDIENT LIST" <<endl << endl;

				
				cout << "ENTER 10 FOR CHECK OUT" << endl<< endl;
				cout << "ENTER 11 TO EXIT" << endl << endl;
				cout << "Choice: ";
				cin >> choice;
				

				switch (choice)
					
				{
				case 0:
					cout << "INGREDIENT LIST:" << endl << endl;
					cout << "1)  Paprika		    2)  Garlic Powder" << endl;
					cout << "3)  Brown Sugar		4)  Onion Powder" << endl;
					cout << "5)  Salt		        6)  Sea Salt" << endl;
					cout << "7)  Black Pepper		8)  Hot Paprika" << endl;
					cout << "9)  Chili Powder	   10)  Smoked Paprika" << endl;
					cout << "11)  Celery Salt	   12)  Chili Powder" << endl;
					cout << "13)  Cayenne Pepper   14)  Ketchup" << endl;
					cout << "15) Cider Vinegar	   16)  Worcestershire sauce" << endl;
					cout << "17) Water	           18) Lemon Extract" << endl;
					cout << "19) Soy Sauce	 	   20) Diced Pepper Blend" << endl << endl;
					break;

				
				case 1:
						cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> q1;
						cout << endl;
						break;
				case 2:
						cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> q2;
						cout << endl;
						break;
				case 3:
						cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> q3;
						cout << endl;
						break;
				case 4:
						cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> q4;
						cout << endl;
						break;
				case 5:
						cout << "What is the quantity you would like?" << endl;
						cout << "Quantity: ";
						cin >> q5;
						cout << endl;
						break;
				case 6:
					cout << "What is the quantity you would like?" << endl;
					cout << "Quantity: ";
					cin >> q6;
					cout << endl;
					break;
				case 7:
					cout << "What is the quantity you would like?" << endl;
					cout << "Quantity: ";
					cin >> q7;
					cout << endl;
					break;
				case 8:
					cout << "What is the quantity you would like?" << endl;
					cout << "Quantity: ";
					cin >> q8;
					cout << endl;
					break;
				case 9:
					cout << "What is the quantity you would like?" << endl;
					cout << "Quantity: ";
					cin >> q5;
					cout << endl;
					break;
				
				case 10:
					total = (q1*basic) + (q2*burn) + (q3*wildfire) + (q4*volcano) + (q5*island) + (q6*heat) + (q7*basicbbq) + (q8*sweetbbq) + (q9*volcanobbq);
					tax_total = total*1.0925;
					cout << "Customer detail:" << firstname << " " << lastname << "-"<< house <<" " << street << " " << city << " "<< state << "-" << phn << endl << endl;
					cout << "Proceeding to check out..." << endl << endl;
					cout << "Your total is: $" << total << endl;
					cout << "Your total after tax is: $" << tax_total << endl;
					break;
					
				case 11:
					
					cout << " Thank you and have a good day" << endl << endl;


					system("pause");

					exit(0);
					

					
				
						
					
				}
			
		}
		system("pause");
		return 0;
}
