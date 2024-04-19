// Jack is always excited about sunday. It is favourite day, when he gets to play all day. And goes to cycling with his friends.

// So every time when the months starts he counts the number of sundays he will get to enjoy. Considering the month can start with any day, be it Sunday, Monday…. Or so on.

// Count the number of Sunday jack will get within n number of days.

//  Example 1:

// Input

// mon-> input String denoting the start of the month.

// 13  -> input integer denoting the number of days from the start of the month.

// Output :

// 2    -> number of days within 13 days.

// Explanation:

// The month start with mon(Monday). So the upcoming sunday will arrive in next 6 days. And then next Sunday in next 7 days and so on.

// Now total number of days are 13. It means 6 days to first sunday and then remaining 7 days will end up in another sunday. Total 2 sundays may fall within 13 days.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string day;
    cin >> day;
    int n;
    cin >> n;

    // Logic starts here
    int day_int = 0;
    if (day == "sunday")
    {
        day_int = 0;
    }
    else if (day == "monday")
    {
        day_int = 1;
    }
    else if (day == "tuesday")
    {
        day_int = 2;
    }
    else if (day == "wednesday")
    {
        day_int = 3;
    }
    else if (day == "thursday")
    {
        day_int = 4;
    }
    else if (day == "friday")
    {
        day_int = 5;
    }
    else if (day == "saturday")
    {
        day_int = 6;
    }
    if (day_int == 0)
    {
        cout << (int)(n / 7) + 1 << endl;
    }
    else
    {
        if ((day_int + (n % 7)) >= 7)
        {
            cout << (int)(n / 7) + 1 << endl;
        }
        else
        {
            cout << (int)(n / 7) << endl;
        }
    }
    return 0;
}