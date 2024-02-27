#ifndef FONCTION_BIENVENUE_H
#define FONCTION_BIENVENUE_H

#include <string>

void afficherBienvenue(std::string message = "Bienvenue le monde !", int nbAffichage = 1);

#endif // FONCTION_BIENVENUE_H
#include "fonction-bienvenue.h"
#include <iostream>

void afficherBienvenue(std::string message, int nbAffichage) {
    for (int i = 0; i < nbAffichage; ++i) {
        std::cout << message << std::endl;
    }
}