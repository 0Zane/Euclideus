#include <iostream>

using namespace std;

int main(){
    cout << "Welcome to Euclideus cryptography tool" << endl << "Choose 1 to analyse text or 2 to analyse number";

    int choice;
    cin >> choice;

    if (choice == 1){
        cout << "you chose to analyse a number";
    }
    else if (choice == 2)
    {
        cout << "you chose to analyse a text";
    }
    else
    {
        cout << "please input a valid choice";
    }
    




}
