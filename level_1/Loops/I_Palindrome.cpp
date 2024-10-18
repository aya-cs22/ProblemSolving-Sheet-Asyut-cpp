#include<iostream>
#include <string>
using namespace std;
/**
 * main - Entry point in this program
 * Description: in this program prompts the user to enter the number (N)
 * and then Print N in a reversed order and not leading zeroes
 * If N is a palindrome number print "YES" otherwise, print "NO.
 * Return: Always 0 (Success)
 */
int main()
{
    int n;
    cin>>n;
    string str = to_string(n);
    string str2 = "";
    for(int i = str.size() - 1; i >= 0; i--)
    {
        str2 += str[i];
    }
    while (str2[0] == '0') {
        str2.erase(str2.begin());
    }
    cout<<str2<<"\n";
    if(str == str2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}