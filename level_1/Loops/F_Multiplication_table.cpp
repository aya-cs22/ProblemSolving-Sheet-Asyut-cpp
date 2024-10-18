#include<iostream>
using namespace std;
/**
 * main - Entry point in this programe
 * Description: in this program prompts the user to enter n and then 
 * Print the maltiplication table of the number from 1 to 12
 * Return: 0 Always (Success)
 */
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= 12; i++)
    {
        cout<<n <<" * "<<i<< " = "<<n * i<<endl;
    }
    return 0;
}
