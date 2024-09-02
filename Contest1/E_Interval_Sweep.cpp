#include <iostream>
#include<cmath>
using namespace std;
/**
 * main - Entry point of the program
 *
 * Description: This program checks whether there exists a sequence of
 * numbers within the first 100 natural numbers that contains exactly
 * 'x' odd numbers and 'y' even numbers.
 *
 * Return: Always 0 (Success)
 */
int main()
{
    int x, y;
    cin>>x>>y;
    int odd = 0, even = 0;
    int i = 1;
    if(x == 0 && x == y)
    {
        cout<<"NO";
    }
    else
    {
    while(i <= 100)
    {
        odd = 0;
        even = 0;
        int j = i;
        while(j < i + x + y)
        {
            if (j % 2 != 0)
            {
                odd += 1;
            }
            else
            {
                even += 1;
            }
            j++;
        }
        if (odd != x && even != y)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    if (odd != x && even != y)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    }
    return 0;
}