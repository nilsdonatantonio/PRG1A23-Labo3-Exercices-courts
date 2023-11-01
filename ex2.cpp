#include <iostream>

using namespace std;

// écrire la fonction sous_chaine(str,pos,len) qui
// retourne la sous-chaine de la chaine str qui commence
// a l'indice pos et compte len caractères. Si la longueur
// demandée est trop longue et dépasse de la chaine str,
// seule la partie de l'indice pos à la fin est retournée
//
// Vous pouvez uniquement utiliser la méthode length() et les
// opérateurs [] et += de la classe string.
string sous_chaine(string str, int pos, size_t len){
    string output;
    if(len <= str.length()) {
        for (int i = pos; i <= pos + len -1; i++) {
            output += str[i];
        }
    }else{
        for (int i = pos; i <= str.length() - 1; i++){
            output += str[i];
        }
    }



    return output;
}
int main() {

   cout << sous_chaine("hello",1,3) << endl;
   // affiche ell

   cout << sous_chaine("abcdef",3,2) << endl;
   // affiche de

   cout << sous_chaine("abcdef",2,7) << endl;
   // affiche cdef

   cout << sous_chaine("abcdef",20,7) << endl;
   // affiche une chaine vide
}