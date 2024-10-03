#include<iostream>
using namespace std;
/**
 * main - Entry point of the program
 * Description: this program promts the user to enter 2 number
 * and then the output Print the summation of their last digits.
 *
 * Return: Always 0(Success)
  */
int main()
{
    long long n1, n2;
    cin>>n1>>n2;
    cout<<(n1 % 10) + (n2 % 10);
    return 0;
}