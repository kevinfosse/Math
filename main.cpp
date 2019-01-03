//
//  main.cpp
//  new-delta
//
//  Created by Kevin Fosse on 03/01/2019.
//  Copyright © 2019 Kevin Fosse. All rights reserved.
// Version non fini

#include <iostream>

struct letter {
    double a;
    double b;
    double c;
    double result;
};

int nb;
void SaisieNumber();


void SaisieNumber(letter & param){
    std::cout << "Entrez la valeur de A" << std::endl;
    std::cin >> param.a;
    
    std::cout << "Entrez la valeur de B" << std::endl;
    std::cin >> param.b;
    
    std::cout << "Entrez la valeur de C" << std::endl;
    std::cin >> param.c;
    
    
    
    
}

int main(int argc, const char * argv[]) {
    // Allocation dynamique de nombre de fois
    std::cout << "Entrez le nombre de calcul a effectué" << std::endl;
    
    std::cin >> nb;
    while (nb < 1) {
        std::cout << "Erreur, le nombre de calcul ne peux pas être inférieur à 1" << std::endl;
        std::cin >> nb;
    }
    
    letter *number = new letter[nb];
    if(number == NULL) { std::cout << "Erreur d'allocation, redemarrer le programme ! \n"; std::exit(0);}
    else {std::cout << "Allocation Réussite ! \n";}
     // execution de la suite de calcul
    
    for (int i = 0; i<nb; i++) {
        SaisieNumber(number[i]);
    }
    
    // Fin
    system("clear");
    std::cout << "Voici le résultat des calculs : " << std::endl;
    for (int i = 0; i<nb; i++) {
        double result = (number[i].b * number[i].b) - 4 * number[i].a * number[i].c ;

        std::cout << i+1 << " |  " << "("<< number[i].b << " * " << number[i].b << ")" << " - 4 * " << number[i].a << " * " << number[i].c << " = " << result << std::endl;
        if(result < 0){std::cout << "Cette équation n'a aucune solution réelle." << std::endl;}
        else if (result > 0){std::cout << "Cette équation a deux solutions réelles." << std::endl;}
        else {std::cout << "Cette équation a seulement une solution réelle." << std::endl;}
        std::cout << "\n";
    }
    
    
    delete [] number;;
    
    return 0;
}
