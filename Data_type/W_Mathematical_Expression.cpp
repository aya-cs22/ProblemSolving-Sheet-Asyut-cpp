#include<iostream>
using namespace std;
/**
 * main - Entry point of the program
 *
 * Description: this program prompts the user to enter a mathematical expression
 * and if the mathematical expression is true print Yes
 * else calculate this and print output
 */
int main()
{
    int n1, n2, res;
    char operation, equal;
    cin>>n1>>operation>>n2>>equal>>res;
    switch(operation){
        case '+':
            if(n1 + n2 == res)
                cout<<"Yes";
            else
                cout<<n1 + n2;
            break;
        case '-':
            if(n1 - n2 == res)
                cout<<"Yes";
            else
                cout<<n1 - n2;
            break;
        case '*':
            if(n1 * n2 == res)
                cout<<"Yes";
            else
                cout<<n1 * n2;
            break;
    }
    return 0;
}