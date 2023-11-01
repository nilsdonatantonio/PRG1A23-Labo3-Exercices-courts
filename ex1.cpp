#include <iostream>

using namespace std;

// écrire la fonction somme_modulo_mille_milliards
// qui retourne la somme de ses deux paramètres modulo
// 1'000'000'000'000
//
long long somme_modulo_mille_milliards(long long nbr1, long long nbr2){
    long long output = 0;
    const long long modulo = 1000000000000;
    output = (nbr1 % modulo) + (nbr2 % modulo);

    return output;
}
int main() {
   cout << somme_modulo_mille_milliards(2,-3) << endl;
   // affiche -1

   cout << somme_modulo_mille_milliards(12'523'432'987'012, 987'654'321'999) << endl;
   // affiche 511087309011
}