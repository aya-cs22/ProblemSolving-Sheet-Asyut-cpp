#include<iostream>
using namespace std;
/**
 * main - Entry point of the proram
 *
 * Description: this program promt the user to enter the number
 * and then . Print the summation of the numbers that is between 1 and number
 * Return: Always 0 (Success)
 */
int main()
{
    int n;
    int sum = 0;
    cin>>n;
    for(int i = 1; i<= n; i++)
    {
        sum += i;
    }
    cout<<sum;
    return 0;
}