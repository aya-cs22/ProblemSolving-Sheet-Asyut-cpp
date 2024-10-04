#include<iostream>
using namespace std;
/**
 * main - Entry point in this program.
 * Description: this program promt the user to enter Two number
 * and operation and calculate.
 * Return: Always 0 (Success)
 */
int main()
{
    char operation;
    int n1, n2;
    cin>>n1>>operation>>n2;
    switch(operation)
    {
        case '+':
            cout<<n1 + n2;
            break;
        case '-':
            cout<<n1 - n2;
            break;
        case '*':
            cout<<n1 * n2;
            break;
        case '/':
            cout<<n1 / n2;
            break;
    }
    return 0;
}