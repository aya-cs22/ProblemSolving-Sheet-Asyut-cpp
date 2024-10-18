#include <iostream>
#include<cmath>
using namespace std;
int main() {
    long long n1, n2,n3, n4;
    cin>>n1>>n2>>n3>>n4;
    if(n2 >= n3 && n1 <= n4)
        cout<<max(n1, n3)<<" "<<min(n2, n4);
    else
        cout<<"-1";
    return 0;
}