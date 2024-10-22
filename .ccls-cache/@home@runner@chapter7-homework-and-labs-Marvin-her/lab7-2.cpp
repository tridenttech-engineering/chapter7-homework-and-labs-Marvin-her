/*Lab7-2.cpp - Displays the number of years required
  for a company's sales to reach at least $150,000
  using a 5.5% annual growth rate. Also displays
  the sales at that time.*/
//Created/revised by <CooperKR> on <10-18-24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()	{	//start main function

// **Declare Variables** //
const double GROW_RATE = 0.055;
double sales = 0.0;
double annualInc = 0.0;
int years = 0;

// **User Input** //
cout << "Enter Current Year's Sales: ";
    cin >> sales;

// **Calculate and Display** //
while (sales < 150000.0)
{	//start while
    annualInc = sales * GROW_RATE;
    sales += annualInc;
    years += 1;
}	//end while
cout << fixed << setprecision(0);
cout << "Sales " << years << " years from now: $" << sales << endl;

return 0;   }	//end main function