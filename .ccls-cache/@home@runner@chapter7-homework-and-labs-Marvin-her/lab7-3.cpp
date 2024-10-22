/* This program asks the user how many text 
  messages sent each day for 7 days*/
//Created/revised by <CooperKR> on <10-18-24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()	{	//start main function

// **Declare Variables** //
int day = 1;
int totalText = 0;
int dailyText = 0;
double average = 0.0;

// **User Input and Calculation** //
while (day < 8)
{	//start while
    cout << "How many text messages did you send on day " << day << "? ";
    cin >> dailyText;
    totalText += dailyText;
    day += 1;
}	//end while

// **Display** //
average = static_cast<double>(totalText) / (day - 1);
    cout << fixed << setprecision(0);
    cout << endl << "you sent approximately " << average << " text messages per day." << endl;

return 0;	}   //end of main function