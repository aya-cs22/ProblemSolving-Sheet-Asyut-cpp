#include<iostream>
using namespace std;
/**
 * main - Entry point of the program
 *
 * Description: this program promts the user to enter X
 * and then Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
 * Return: Always 0 (Success)
 */
int main()
{
    int X;
    cin>>X;
    if((X / 1000) % 2 == 0)
        cout<<"EVEN";
    else
        cout<<"ODD";
    return 0;
}