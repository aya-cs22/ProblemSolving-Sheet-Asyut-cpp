#include<iostream>
#include<cmath>
using namespace std;
/**
 * main - Entry point of the program
 *
 * Description: this program promts the user to enter 3 numbers
 * and  then print the number ascending order followed by a blank line and then the values in the sequence as they were read.
 * Return: ALways 0 (Success)
 */
int main()
{
    int n, m, l;
    cin>>n>>m>>l;
    cout<<min(n,min(m,l))<<"\n";
    if(n > m && n > l)
        cout<<min(n,max(l,m))<<"\n";
    else
        cout<<max(n,min(l,m))<<"\n";
    cout<<max(n, max(m, l))<<"\n\n";
    cout<<n<<"\n";
    cout<<m<<"\n";
    cout<<l<<"\n";
    return 0;
}
