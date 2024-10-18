#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
/**
 * main - Entry point of the program
 * Description: calulate the area of acircle
 *
 * Return: Always 0 (success)
 */
int main()
{
    float r;
    cin>>r;
    cout<<fixed<<setprecision(9)<<3.141592653 * pow(r, 2);
    return 0;
}
