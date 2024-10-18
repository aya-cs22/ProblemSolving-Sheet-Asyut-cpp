#include<iostream>
using namespace std;
/**
 * main - Entry poiny in this program
 * Description: this program promt to enter a number
 * and then intervals the number belongs to:
 * [0,25], (25,50], (50,75], (75,100]
 * Return: Always 0 (Success)
 */
int main()
{
    float n;
    cin>>n;
    if(n > 0 && n <= 25)
    {
        cout<<"Interval [0,25]";
    }
    else if(n > 25 && n <= 50)
    {
        cout<<"Interval (25,50]";
    }
    else if(n > 50 && n <= 75)
    {
        cout<<"Interval (50,75]";
    }
    else if(n > 75 && n <= 100)
    {
        cout<<"Interval (75,100]";
    }
    else{
        cout<<"Out of Intervals";
    }
    return 0;
}