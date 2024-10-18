#include<iostream>
using namespace std;
/**
 * main - Entry point of the program
 * Description: this program promt the user to enter 2 number
 * and then  if A is multiple of B or vice versa print "Multiples". Otherwise print "No Multiples"
 * Return: Always 0 (Success)
 */
int main()
{
    int A, B;
    cin>>A>>B;
    if (A % B == 0 || B % A == 0)
    {
        cout<<"Multiples";
    }
    else
    {
        cout<<"No Multiples";
    }

}