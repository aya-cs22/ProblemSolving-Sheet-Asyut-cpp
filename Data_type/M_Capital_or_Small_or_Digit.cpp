#include<iostream>
using namespace std;
/**
 * main - Entry point in this program.
 * Description: this program promts the user to enter char or digit
 * and then Print a single line contains "IS DIGIT" if X is digit 
 * otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.
 * Return: Always 0 (Success)
 */
int main()
{
    char ch;
    cin>>ch;
    if(ch>= 'A' && ch <= 'Z')
    {
        cout<<"ALPHA"<<"\n"<<"IS CAPITAL";
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout<<"ALPHA"<<"\n"<<"IS SMALL";
    }
    else
    {
        cout<<"IS DIGIT";
    }
    return 0;
}