#include <iostream>
#include<cmath>
using namespace std;
/**
 * main - Entry point of the program
 *
 * Description: this program promts the user to enter 2 number
 * and then output  Print floor, ceil and round of n/k
 *
 * Return: Always 0 (Success)
 */
int main()
{
    double n, k;
    cin >> n>>k;
    cout<<"floor "<<n<<" / "<<k<<" = "<<floor(n/k)<<"\n";
    cout<<"ceil "<<n<<" / "<<k<<" = "<<ceil(n/k)<<"\n";
    cout<<"round "<<n<<" / "<<k<<" = "<<round(n/k)<<"\n";
    return 0;
}