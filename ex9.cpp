#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// écrire une fonction nb_char_in_file(filename, c) qui compte le nombre
// de fois que la caractère c apparait dans le fichier. Il doit retourner
// une valeur négative en cas d'impossibilité d'ouvrir le fichier
size_t nb_char_in_file(string file_name, char c);
int main() {
   cout << "Entrez le nom du fichier : " << flush;
   string filename; cin >> filename;
   cout << "Entrez le caractere : " << flush;
   char c; cin >> c;

   auto n = nb_char_in_file(filename,c);
   if(n >= 0)
      cout << "Le fichier contient " << n << " fois le caractere " << c << endl;
   else
      cout << "Le fichier est illisible";
}

size_t nb_char_in_file(string file_name, char c){
    ifstream file_in(file_name);
    if(!file_in){
        cout << "Erreur a l'ouverture du fichier";
        return -1;
    }
    size_t nb_char = 0;
    while(file_in){
        string line;
        getline(file_in, line);
        char c_in;

        while(file_in.get(c_in)){
            if(c_in == c ){
                nb_char += 1;
            }
        }
    }
    return nb_char;
}