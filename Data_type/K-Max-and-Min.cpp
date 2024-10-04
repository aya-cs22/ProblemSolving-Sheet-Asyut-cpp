#include<iostream>
using namespace std;
/**
 * main - Entry point of the program.
 * Descrption : this program promts the user to enter 2 number
 * and then print the minimum and the maximum numbers.
 * Return: 0 (Success)
 */
int main()
{
    int k, l, m;
    cin>>k>>l>>m;
    cout<<min(k,min(l, m))<<" "<<max(k,max(l, m));
}