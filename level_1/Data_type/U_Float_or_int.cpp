#include<iostream>
using namespace std;
/**
 * main - Entry point of the program.
 *
 * Description: this program prompts the user  to enter number
 * If N
 * is float number then print "float" followed by the integer part followed by decimal part separated by space.
 * If N is integer number then print "int" followed by the integer part separated by space.
 * Return: Always 0 (Success)
 */
int main()
{
    float n;
    cin>>n;
    if(n == int(n))
        cout<<"int "<<n;
    else
        cout<<"float "<<int(n)<<" "<<n - int(n);
    return 0;
}