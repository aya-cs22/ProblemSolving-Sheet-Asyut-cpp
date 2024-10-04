#include<iostream>
using namespace std;
/**
 * main - Entry point of the program
 * Description: this program promts the user a Number N corresponding to
 * a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days". 
 * Return: Always 0 (Success)
*/
int main()
{
    int n, i= 0, j = 0;
    cin>>n;
    while(n > 356)
    {
        n = n - 365;
        i++;
    }
    cout<<i<<" years\n";
    while(n >= 30)
    {
        n = n - 30;
        j++;
    }
    cout<<j<<" months\n";
    cout<<n<<" days";
    return 0;
}