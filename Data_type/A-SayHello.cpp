#include<iostream>
using namespace std;
/**
 * main - Entry point of the program
 *
 * Description: This program prompts the user to enter their name
 * and then outputs a greeting message that includes  the entered name.
 *
 * Return: Always 0 (Success)
 */
int main(){
    string name;
    cin>>name;
    cout<<"Hello, "<<name;
    return 0;
}