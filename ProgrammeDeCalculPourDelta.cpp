//
//  main.cpp
//  new-delta
//
//  Created by  on 03/01/2019.
//  Copyright © 2019 . All rights reserved.
// Version non fini

#include <iostream>
#include <math.h>

struct letter {
    double a,b,c;
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
        double result = (number[i].b * number[i].b) - 4 * (number[i].a) * (number[i].c) ;

        std::cout << i+1 << " |  " << "("<< number[i].b << " * " << number[i].b << ")" << " - 4 * " << number[i].a << " * " << number[i].c << " = " << result << std::endl;
        if(result < 0){std::cout << "Cette équation n'a aucune solution réelle." << std::endl;}
        else if (result > 0){std::cout << "Cette équation a deux solutions réelles." << std::endl;}
        else {std::cout << "Cette équation a seulement une solution réelle." << std::endl;}
        std::cout << "\n";
    }
    
    std::cout << "Que veux-tu faire?" << std::endl;
    std::cout << "(C)alculer les solutions | (Q)uitter | (?)" << std::endl;
    std::cout << "Ecrit la première lettre en miniscule" << std::endl;
    
    char choix; std::cin >> choix;
    system("clear");
    switch (choix) {
        case 'c':
            for (int i = 0; i<nb; i++) {
                number[i].result = (number[i].b * number[i].b) - 4 * (number[i].a) * (number[i].c) ;
                double xUn = (-number[i].b + sqrt(number[i].result)) / (2 * number[i].a);
                double xDeux = (-number[i].b - sqrt(number[i].result)) / (2 * number[i].a);
                double x = (-(number[i].b)) / (2*number[i].a);
                std::cout << i+1 << " |  " << "("<< number[i].b << " * " << number[i].b << ")" << " - 4 * " << number[i].a << " * " << number[i].c << " = " <<  number[i].result << std::endl;
                if( number[i].result < 0){std::cout << "Aucun calcul n'est disponible quand aucune solution n'est possible" << std::endl;}
                else if ( number[i].result > 0){std::cout << "Cette équation a deux solutions réelles donc : " << std::endl;
                   //x1
                    std::cout << "x1 = " << "(" << "-" << number[i].b << ")" << " + " << "√" << number[i].result << ")" << " / " << "( 2 * " << number[i].a  << ") = " << xUn << std::endl;
                    // x2
                    std::cout << "x2 = " << "(" << "-" << number[i].b << " - " << "√" << number[i].result << ")" << " / " << "( 2 * " << number[i].a  << ") = " << xDeux << std::endl;
                }
                else {std::cout << "Cette équation a seulement une solution réelle donc : " << std::endl;
                    std::cout << "x = " << "( - (" << number[i].b << " )) / " << "( 2 * " << number[i].a << ") = " << x << std::endl;
                }
                std::cout << "\n";
            }
            break;
            case '?':
            std::cout << "Programme de mathématique réalisé en C++ par Kévin Fosse" << std::endl;
            
            break;
        default:
            break;
    }
    delete [] number;;
    
    return 0;
}
