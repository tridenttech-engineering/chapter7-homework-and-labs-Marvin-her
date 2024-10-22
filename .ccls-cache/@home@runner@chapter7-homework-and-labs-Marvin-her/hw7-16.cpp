//hw7-16.cpp - displays three tip amounts
//Created/revised by <CooperKR> on <10-18-24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()	{	//start main function

// **Declare Variables** //
	double bill = 0.0;
	double tip = 0.0;
	double rate = 0.1;	//accumulator

// **User Inputs** //
	cout << "Enter bill amount: ";
	cin >> bill;

// **Calculate and Display** //
	/*cout << fixed;
	for (double rate = 0.1; rate <= 0.2; rate += 0.05)
	{	// start for
		tip = bill * rate;
		cout << setprecision(0);
		cout << rate * 100 << "% tip: ";
		cout << setprecision(2);
		cout << "$" << tip << endl;
	} // end for*/

	//Change for statement to while statement**
	cout << fixed;
	while (rate <= 0.2)
	{	//start while
		tip = bill * rate;
		cout << setprecision(0);
		cout << rate * 100 << "% tip: ";
		cout << setprecision(2);
		cout << "$" << tip << endl;
		rate += 0.05;
	}	//end while

return 0;	}	//end main function