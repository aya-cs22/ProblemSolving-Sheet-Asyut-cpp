#include<iostream>
using namespace std;
/**
 * main - Entry point of the program.
 *Description: this program prompts the user to enter
 * two numbers X, Y which donate coordinates of a point in 2D plan.
 * Determine in which quarter does it belong.
 * Return: Always 0 (Success)
 */
int main()
{
    float x, y;
    cin>>x>>y;
    if(x > 0 && y > 0)
    {
        cout<<"Q1";
    }
    else if(x < 0 && y > 0)
    {
        cout<<"Q2";
    }
    else if(x < 0 && y < 0)
    {
        cout<<"Q3";
    }
    else if(x > 0 && y < 0)
    {
        cout<<"Q4";
    }
    else if(y == 0 && x > 0 || x < 0)
    {
        cout<<"Eixo X";
    }
     else if(x == 0 && y > 0 || y < 0)
    {
        cout<<"Eixo Y";
    }
    else if(x == 0 && y == 0)
    {
        cout<<"Origem";
    }
    return 0;
}