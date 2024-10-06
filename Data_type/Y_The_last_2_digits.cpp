#include<iostream>
using namespace std;
/**
 * main - Entry point of the program
 *
 * Description: this program prompts the user to enter 4 numbers
 * a, b, c, d Print the last 2 digits from their Multiplication.
 *
 * Return: Always 0 (Success)
 */
int main()
{
    long long a, b, c, d, res1, res2;
    cin>>a>>b>>c>>d;
    res1 = (a * b) % 100;
    res2 = (c * d) % 100;
    if((res1 * res2 ) % 100 < 10)
        cout<<"0"<<(res1 * res2) % 100;
    else
        cout<<(res1 * res2) % 100;

    return 0;
}