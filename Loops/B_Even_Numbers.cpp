#include<iostream>
using namespace std;
/**
 * main - Entry point in this program.
 * DEscription: this program prompts the user to enter number(n)
 * and then Print all even numbers between 1 and N inclusive in separate lines.
 * if there are no even numbers print -1.
 * Return: Always 0 (Success)
 */
int main()
{
    int n;
    bool even = 0;
    cin>>n;
    for(int i = 1; i <= n ;i++)
    {
        if(i % 2 == 0)
        {
            even = 1;
            cout<<i<<endl;
        }
    }
    if(!even)
    {
        cout<<-1;
    }
    return 0;
}