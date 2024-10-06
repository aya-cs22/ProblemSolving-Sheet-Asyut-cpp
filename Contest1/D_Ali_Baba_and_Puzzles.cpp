#include<iostream>
using namespace std;
/**
 * main - Entry point in this program.
 * Description: This program checks if the fourth number can be obtained
 * by applying the three arithmetic operators (+, -, ×) to the first three numbers.
 * The operators are used exactly once in any valid order.
 * Return: Always 0 (Success)
 */
int main()
{
    long long n1, n2, n3, res;
    cin>>n1>>n2>>n3>>res;
    if(n1 + n2 - n3 == res)
        cout<<"YES";
    else if (n1 + n2 * n3 == res)
        cout<<"YES";
    else if(n1 - n2 + n3 == res)
        cout<<"YES";
    else if(n1 - n2 * n3 == res)
        cout<<"YES";
    else if(n1 * n2 + n3 == res)
        cout<<"YES";
    else if(n1 * n2 - n3 == res)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
