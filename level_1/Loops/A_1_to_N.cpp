#include<iostream>
using namespace std;
/**
 * main - Entry point in this program.
 * DEscription: in this program prompts the user to enter number(n)
 * and then to print 1 to number(n)
 * Return: Always 0 (Success)
 */
int main()
{
    int n;
    cin >>n;
    for(int i = 1; i <= n ; i++)
    {
        cout<<i<<endl;
    }
    return 0;
}