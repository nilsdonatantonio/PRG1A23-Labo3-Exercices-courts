#include <iostream>

using namespace std;

// écrire la fonction plus_petite_lettre(str) qui retourne
// le plus petite caractère (au sens du code ASCII) de la chaine
// str. Si cette lettre apparait plusieurs fois c'est la
// dernière instance qui doit être retournée.
char& plus_petite_lettre(string& str){
    size_t pos_char;
    char temp = str[0];

    for(int i = 1; i < str.length(); i++){
        if(str[i] <= temp){
            temp = str[i];
            pos_char = i;
        }
    }
    return str[pos_char];
}
int main() {

   string s{"wisigoth"};
   plus_petite_lettre(s) = '*';
   cout << s << endl;
   // affiche wisi*oth

   s = "abraracourcix";
   plus_petite_lettre(s) = '*';
   cout << s << endl;
   // affiche abrar*courcix
}