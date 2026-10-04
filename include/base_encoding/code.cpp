#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int convert_custombase_todec()
{
  int baseDepart, nbChiffres;
  cin >> baseDepart >> nbChiffres;
  int entierb10 = 0;
  for (int i = 0; i < nbChiffres; i++){
    int entier;
    cin >> entier;
    entierb10 += pow(baseDepart, (nbChiffres - 1 - i)) * entier;
  }
  return entierb10;
}
