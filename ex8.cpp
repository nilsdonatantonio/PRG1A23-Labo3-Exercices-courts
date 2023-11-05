#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// écrire une fonction nb_lignes qui compte le nombre lignes
// d'un fichier dont le nom est passé en paramètre. Il doit retourner
// une valeur négative en cas d'impossibilité d'ouvrir le fichier

size_t nb_lignes(const string file_name);
int main() {
   cout << "Entrez le nom du fichier : " << flush;
   string filename; cin >> filename;
   auto n = nb_lignes(filename);
   if(n >= 0)
      cout << "Le fichier contient " << n << " lignes" << endl;
   else
      cout << "Le fichier est illisible";
}

size_t nb_lignes(const string file_name){
    size_t nb_lignes = 0;
    ifstream file_in(file_name);

    if(!file_in){
        cout << "Erreur a l'ouverture du fichier";
        return -1;
    }
    while(file_in){
        string line;
        getline(file_in, line);
        nb_lignes +=1;
    }
    file_in.close();

    return nb_lignes;
}
