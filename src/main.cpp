#include <iostream>
#include "../include/base_encoding/base.h"

using namespace std;

int main(){
    cout << "Welcome to Euclideus cryptography tool" << endl << "Choose 1 to analyse text or 2 to analyse number";

    int choice;
    cin >> choice;

    if (choice == 1){
        cout << "you chose to analyse a number";
        cout << " let's decode it in different bases, input the starting base and ending base: ";
        int startingBase, endingBase;
        cin >> startingBase >> endingBase;
        for (int i = startingBase; i <= endingBase; i ++){
            int digits;
            cout << "for base " << i << " input the numbers of digits: ";
            cin >> digits;
            cout << convert_custombase_todec(i, digits);
        }
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
