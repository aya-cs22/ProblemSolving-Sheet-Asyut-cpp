#include<iostream>
using namespace std;
/**
 *main - Entry point of the program
 * Description: this program promts the user to enter 2 number
 * and then Print "Yes" if A is greater than or equal to B. Otherwise print "No".
 *
 * Return: Always 0 (Success)
 */
int main()
{
    int A, B;
    cin>>A>>B;
    if(A >= B)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}