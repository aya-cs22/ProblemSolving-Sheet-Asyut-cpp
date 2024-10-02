#include<iostream>
using namespace std;
/**
 * main - Entry point of the program
 * Description: this program promts the user to enter two numbers
 * and then calculates and displays the summation, subtraction and multiplication
 *of those numbers each on anew line
 * Return: Always 0 (Success)
 */
int main(){
    long long num1, num2;
    cin>>num1>>num2;
    cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
    cout<<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;
    cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;
}