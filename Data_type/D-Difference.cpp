#include<iostream>
using namespace std;
/**
 * main - Entry point of the program
 * Description: this program promts the user to enter four numbers
 * and then calculates the expression (num1 * num2) - (num3 * num4)
 * and then display the result as the "Difference"
 * Return: Always 0 (Success)
 */
int  main(){
    long long n1, n2, n3, n4;
    cin>>n1>>n2>>n3>>n4;
    cout<<"Difference = "<<(n1 * n2) - (n3 * n4);
    return 0;
}