#include<iostream>
using namespace std;
/**
 * main - Entry point in this program
 * Description: in this program prompts the user to enter First line contains a number T (1 ≤ T ≤ 15) number of test cases.
 * Next T lines will contain a number N (0 ≤ N ≤ 20)
 * and then each test case print a single line contains the factorial of N
 * Return: Always 0 (Success)
 */
int main()
{
    int n;
    long long res;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        res = arr[i];
        for(int j = 1; j <arr[i]; j++)
        {
            res *= j;
        }
        cout<<res<<endl;
    }
    return 0;
}