#include <iostream>

using namespace std;

// écrire la fonction multiplier qui permette au programme
// ci dessous de fonctionner comme dans l'exemple d'utilisation
// suivant :
//
//2 3
//2 * 3 = 6
//543 876
//543 * 876 = 475668
//1234567 8765432
//Le produit de 1234567 et 8765432 depasse la limite du type unsigned
bool multiplier(unsigned int a, unsigned int b, unsigned int& r){
if(cin.good()){
    r = a*b;
    return 1;
}
return 0;
}
int main() {

   unsigned a, b, r;
   do {
      cin >> a >> b;
   } while (multiplier(a, b, r) and
            cout << a << " * " << b << " = " << r << endl);

   cout << "Le produit de " << a << " et " << b << " depasse la limite du type unsigned";
}