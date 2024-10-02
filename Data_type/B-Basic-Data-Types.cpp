#include<iostream>
using namespace std;
/**
 * main - Entry point of the program
 * Description: this program prompts reads diffrence types of data from the user
 * an integer, a long long integer, a character, a float, and a double.
 * it then outputs each of the entered values on anewline.
 *
 * Return: Always 0 (success)
 */
int main(){
    int num1;
    long long num2;
    char ch;
    float num3;
    double num4;
    cin>>num1>>num2>>ch>>num3>>num4;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<ch<<endl;
    cout<<num3<<endl;
    cout<<num4<<endl;
    return 0;

}