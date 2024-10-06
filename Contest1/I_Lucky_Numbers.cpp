#include<iostream>
using namespace std;
/**
 * main - Entry point in this program.
 * Description: in this program promts the user to enter number and then
 * Print "YES" if the given number is lucky, otherwise print "NO".
 * A number of two digits is lucky if one of its digits is divisible by the other.
 * Return: Always 0 (Success)
 */
int main()
{
    int n;
    cin>>n;
    if((n % 10) % (n/10) == 0 || (n / 10) % (n % 10) == 0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}