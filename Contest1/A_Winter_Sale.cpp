#include<iostream>
#include <iomanip>
using namespace std;
/**
 * main - Entry point in the program.
 * Description: in this program prompts the user to enter a discount of X%
 * and its price P after the discount and then print  the price of the T-shirt before the discount
 * Return: Always  (Success)
 */
int main()
{
    float p, x, res;
    cin>>x>>p;
    res =(p * 100 / (100 - x ));
    cout<< res;
    return 0;
}