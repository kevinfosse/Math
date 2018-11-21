//
//  main.cpp
//  coursdemath
//
//  Created by Kevin Fosse on 19/11/2018.
//  Copyright © 2018 Kevin Fosse. All rights reserved.
//

#include <iostream>
#include <string>
void calcMath() {
    double anumber = 0;
    double bnumber = 0;
    double cnumber = 0;
    double result = 0;
    std::string userYes;
    
    
    

    std::cout << "Veuillez entrez A" << std::endl;
    std::cin >> anumber;
    std::cout << "Veuillez entrez B" << std::endl;
    std::cin >> bnumber;
    std::cout << "Veuillez entrez C" << std::endl;
    std::cin >> cnumber;
    std::cout << "Valeur A : " << anumber << "; valeur B : " << bnumber << "; valeur C : " << cnumber << std::endl;;
    
    result = (bnumber * bnumber ) - 4 * anumber * cnumber ;
    std::cout << "Le résultat du calcul est : " << result << std::endl;
    
    if (result < 0) {
        std::cout << "Cette équation n'a aucune solution réelle." << std::endl;
    }
    else if (result == 0) {
        std::cout << "Cette équation a seulement une solution réelle." << std::endl;
    }
    else {
        std::cout << "Cette équation a deux solutions réelles." << std::endl;
    }
    std::cout << "Voulez vous relancer le programme ? (oui/non)" << std::endl;
    std::cin >> userYes;
    if(userYes == "oui" || userYes == "OUI") {
        std::cout << "=======================================" << std::endl;
        std::cout << " " << std::endl;
        calcMath();
    }
    
    else {
        
    }
    
}
int main(int argc, const char * argv[]) {
    std::cout << "Calculateur de Delta par Kévin Fosse\n";
    calcMath();
   
    


}
