#include<iostream>
#include <map>
/**
 * main - Entry point in this program
 * Description: prompts the user to enter  an array a
 * of n lements, and then print any value that appears at least three times or print -1 if there is no such value.
 * Return: Always 0 (Success)
 */
using namespace std;
int main()
{
    int num_case;
    cin>>num_case;
    bool frq = 0;
    while(num_case >= 1)
    {
        int n;
        cin>>n;
        map<int, int> Frequency;
        int arr[n];
        for(int i =0; i < n; i++)
        {
            cin>>arr[i];
        }
        for(int i =0; i < n; i++)
        {
            Frequency[arr[i]]++;
        }
        int num = -1;
        for(int i =0; i <= n; i++)
        {
            if(Frequency[i] >= 3)
            {
                num = i;
                frq=1;
            }
        }
        if(frq == 0)
            cout<<"-1"<<endl;
        else
            cout<<num<<endl;
        num_case--;
    }
    return 0;
}