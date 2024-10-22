//Lab7-4.cpp - displays the average electric bill
//Created/revised by <CooperKR> on <10-18-24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()	{	//start main function

// **Declare Variables** //
double bill = 0.0;
double totalBills = 0.0;
double avgBill = 0.0;
int months = 0;

// **User Input** //
cout << "Bill for month 1: ";
cin >> bill;

// **Calculate and Display** //
while (bill >= 0.0 && months < 11) //11 b/c increment in cout statement
{	//	start while
	totalBills += bill;
	months ++;
	cout << "Bill for month " << months + 1 << ": ";
	cin >> bill;
}	//	end while

if (months > 0)
{	//	startif
	avgBill = totalBills / months;
	cout << fixed << setprecision(2);
	cout << "Average electric bill for " << months << " months: $" << avgBill << endl;
}	//	endif
else
	cout << "No bill amount entered." << endl;


return 0;	}	//end main function