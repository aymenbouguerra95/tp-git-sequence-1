L'exécution d'une commande Linux :
```sh
$ make rebuild
Fabrication du programme : bienvenue
rm -f *.o
g++ -c -Wall -std=c++11 bienvenue.cpp
g++ -c -Wall -std=c++11 fonction-bienvenue.cpp
g++ -o bienvenue bienvenue.o fonction-bienvenue.o
$ ./bienvenue
Bienvenue le monde !
```

Le contenu d'un fichier source C++ :
```cpp
#ifndef FONCTION_BIENVENUE_H
#define FONCTION_BIENVENUE_H
void afficherBienvenue();
void afficherBienvenue() {
    std::cout << "Bonjour tout le monde !" << std::endl;
}
void afficherBienvenue(const std::string& message) {
    std::cout << message << std::endl;
}
#endif // FONCTION_BIENVENUE_H
# Bienvenue
Programme C++ qui affiche "Bienvenue le monde !" en utilisant la fonction
`afficherBienvenue()`.
