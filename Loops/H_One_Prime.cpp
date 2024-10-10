#include<iostream>
using namespace std;
/**
 * main - Entry point in this program.
 * Description: in this program prompts the user to enter number
 * and then print "YES" if the number is prime and "NO" otherwise.
 * Return: Always 0 (Success)
 */
int main()
{
    int n, res;
    bool prime = 0;
    cin>>n;
    if(n< 0)
        cout<<"NO";
    res = n / 2;
    for(int i = 2; i <= res; i++)
    {
        if(n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if(!prime)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;

}