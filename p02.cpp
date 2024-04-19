// Problem Statement –

// Joseph is learning digital logic subject which will be for his next semester. He usually tries to solve unit assignment problems before the lecture. Today he got one tricky question. The problem statement is “A positive integer has been given as an input. Convert decimal value to binary representation. Toggle all bits of it after the most significant bit including the most significant bit. Print the positive integer value after toggling all bits”.

// Constrains-

// 1<=N<=100

// Example 1:

// Input :

// 10  -> Integer

// Output :

// 5    -> result- Integer

// Explanation:

// Binary representation of 10 is 1010. After toggling the bits(1010), will get 0101 which represents “5”. Hence output will print “5”.

#include <bits/stdc++.h>

using namespace std;

int pow(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * pow(a, b - 1);
    }
}
int main()
{
    int n;
    cin >> n;

    // Logic starts here
    int weight = 0;
    int num = 0;
    while (n != 0)
    {
        int x = n % 2;
        if (x == 0)
        {
            x = 1;
        }
        else
        {
            x = 0;
        }
        num += x * pow(2, weight);
        weight++;
        n /= 2;
    }
    cout << num;
    return 0;
}