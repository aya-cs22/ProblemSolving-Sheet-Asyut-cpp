#include<iostream>
using namespace std;
/**
 * main - Entry point in this program.
 * Description: this progra prompts the user to enter three number
 * and then If both a and b are divisible by k print 'Both'
 * else if a is divisible by k but b isn't print  'Memo'
 * else if b is divisible by k but a isn't, Momo
 * else If both a and b are not divisible by k print 'No One'
 * Return: Always 0 (Success)
 */
int main()
{
    long long a, b, k;
    cin>>a>>b>>k;
    if(a % k == 0 && b % k != 0)
        cout<<"Memo";
    else if(a % k != 0 && b % k == 0)
        cout<<"Momo";
    else if(a % k == 0&& b % k == 0)
        cout<<"Both";
    else
        cout<<"No One";
    return 0;
}