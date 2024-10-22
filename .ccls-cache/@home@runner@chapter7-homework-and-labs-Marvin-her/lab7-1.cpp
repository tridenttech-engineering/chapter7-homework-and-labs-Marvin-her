/*Lab7-1.cpp - calculates the average number of text
  messages sent each day for 7 days*/
//Created/revised by <CooperKR> on <10-18-24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()	{	//start main function

// **Declare Variables** //
int day = 0;
int totalText = 0;
int dailyText = 0;
double average = 0.0;

// **User Input** //
for (day = 1; day < 8; day += 1)
{	//start for
    cout << "How many text messages did you send on day " << day << "? ";
    cin >> dailyText;
    totalText += dailyText;
}	//end for

// **Calculate and Display** //
average = static_cast<double>(totalText) / (day - 1);
    cout << fixed << setprecision(0);
    cout << endl << "you sent approximately " << average << " text messages per day." << endl;

return 0;   }  //end main function

/*
1.	Counter variable of program is: day
    Accumulator variable is: totalText
2.	Condition argument: day<=7
3.	Counter variable needs to be used after the loop ends, it would not work correctly if declared in loop.
4.	Desk Check: average = 74.0
5.	||
6.	Program doesn't recognize day variable
7. No
8. Change day variable to 1
*/