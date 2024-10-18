#include<iostream>
#include<cmath>
using namespace std;
/**
 * main - Entry point in this program
 * Description: in this program prompts the user to enter  a number N, and N numbers
 * and then find the print maximum number in these N numbers.
 * Return: 0 Always (Success)
 */
int main()
{
    int n , max;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n; i++)
    {
        cin>>arr[i];
    }
    max = arr[0];
    for(int i = 0; i < n ; i++)
    {
        if(max < arr[i])
            max =arr[i];
    }
    cout<<max<<endl;
    return 0;
}