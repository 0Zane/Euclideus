#include <iostream>
#include <string>
#include <math.h>
#include "base.h"

using namespace std;
int convert_custombase_todec(int baseDepart, int nbChiffres)
{
  int entierb10 = 0;
  for (int i = 0; i < nbChiffres; i++){
    int entier;
    cout << "input digit";
    cin >> entier;
    entierb10 += pow(baseDepart, (nbChiffres - 1 - i)) * entier;
  }
  return entierb10;
}
