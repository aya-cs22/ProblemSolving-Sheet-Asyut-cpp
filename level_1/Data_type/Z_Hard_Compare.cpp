#include<iostream>
#include<cmath>
using namespace std;
/**
 * main - Entry point of the program.
 * Description: this program promts the user to enter 4 numbers
 * If A pow B > C pow D print "YES" otherwise, print "NO".
 * Return: Always 0 (Success)
 */

int main()
{
    long long a, b,c, d;
    cin>>a>>b>>c>>d;
    if(b * log(a) > d * log(c))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}