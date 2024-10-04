#include<iostream>
using namespace std;
/**
 * main - Entry point in this program.
 * Description: this program promts the user to enter 2 name: first name and last name
 * and then print if the 2 name is brother or not
 */
int main()
{
    string first_name1 , last_name1, first_name2 , last_name2;
    cin >> first_name>>last_name>>first_name2>>last_name2;
    if(last_name1 == last_name2)
    {
        cout<<"ARE Brothers";
    }
    else
    {
        cout<<"NOT";
    }
    return 0;
}