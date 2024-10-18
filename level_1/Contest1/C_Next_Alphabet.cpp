#include<iostream>
using namespace std;
/**
 * main - Entry point in the program
 * Description: in this program promts the user and enter character
 * and then print the next character in the alphabet.
 * Return: Always 0 (SUccess)
 */
int main()
{
    char ch;
    cin>>ch;
    if(ch >= 'a' && ch < 'z')
        cout<<char(ch + 1);
    if(ch == 'z')
        cout<<"a";
    return 0;
}