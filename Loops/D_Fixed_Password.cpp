#include<iostream>
using namespace std;
/**
 * main - Entry point in this program
 * Description: in this program prompts the user to enter number(n) is a password
 * and then  Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.
 * Correct password is 1999
 * Return: Always 0 (Success)
 */
int main()
{
    int n;
    while(cin>>n)
    {
        if(n == 1999)
        {
            cout<<"Correct"<<"\n";
            return 0;
        }
        else
            cout<<"Wrong"<<"\n";
    }
    return 0;
}