//
//  main.cpp
//  Math2
//
//  Created by Kevin  on 27/01/2019.
//  Copyright © 2019 Kevin Fosse. All rights reserved.
//

#include <iostream>
#include <math.h>

struct valeur {
    float nbarticle, baisseMarge;
    float mUnitaire, mTotale;
};
int nbart, munit, nb;
void myPause()
{
  
}
int main(int argc, const char * argv[]) {

    // Allocation dynamique du nombre de fois
    
    std::cout << "Entrez le nombre de test de baisse a effectuer" << std::endl;
    std::cin >> nb;
    while (nb < 1) {
        std::cout << "Erreur, le nombre de test ne peut être inférieur a 1" << std::endl;
        std::cin >> nb;
    }
    
    valeur *val = new valeur[nb];
    if(val == NULL) { std::cout << "Erreur d'allocation, redemarrer le programme ! \n"; std::exit(0);}
    else {std::cout << "Allocation Réussite ! \n";}
    
    // demande d'information
    
    // nb article
    std::cout << "Entrez le nombre d'article initial" << std::endl;
    std::cin >> nbart;
    
    // nb marge u
    std::cout << "Entrez la marge unitaire inital" << std::endl;
    std::cin >> munit;
    
    // nb baisse marge
  
    for (int i = 0; i < nb; i++) {
        std::cout << "Entrez les valeurs de baisse" << std::endl;
        std::cin >> val[i].baisseMarge;
    }
    
    // calcul
    for (int i = 0; i < nb; i++) {
        val[i].mUnitaire = munit - val[i].baisseMarge;
        val[i].nbarticle = nbart + (val[i].baisseMarge*10);
        float mTotale = val[i].mUnitaire*val[i].nbarticle;
        std::cout << "Pour une baisse de " << val[i].baisseMarge << " :" << std::endl;
        std::cout << "Marge unitaire : " << val[i].mUnitaire << std::endl;
        std::cout << "Article vendu : " << val[i].nbarticle << std::endl;
        std::cout << "Marge totale : " << mTotale << std::endl;
        std::cout <<"- - - - - - - - - - - -" << std::endl;;
    }
    system("PAUSE"); 
        delete [] val;
    return 0;
}
