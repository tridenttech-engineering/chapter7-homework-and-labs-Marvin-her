//Lab7-6.cpp - calculates and displays the average price
//Created/revised by <CooperKR> on <10-18-24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()	{	//start main function

// **Declare Variables** //
int numPrices = 0;			 //counter
double price = 0.0;
double totalPrice = 0.0; 	 //accumulator
double avgPrice = 0.0;

// **User Input** //
cout << "Price (negative number to end): ";
cin >> price;

// **Calculate** //
while (price >= 0.0)
{	//start while
	numPrices += 1;
	totalPrice += price;
	cout << "Next price: (negative number to end): ";
	cin >> price;
}	//end while

if (numPrices > 0)
	avgPrice = totalPrice / numPrices;
else
	avgPrice = 0.0;
// end if

// **Display** //
cout << fixed << setprecision(2) << endl;
cout << "Average price: " << avgPrice << endl;

return 0;	}	//end main function