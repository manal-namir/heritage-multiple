// banque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "Compte.h"
using namespace Banque;
using namespace std;
#include <iostream>

int main()
{
    
    compte c1(MAN, 40000); 
    compte c2(IMA, 30000);
    c1.consulterSolde();
    c2.consulterSolde();

    compte* c3 = new Compte(nom1, 20000);
    c3->deposerArgent(9000);

    delete c3;

    Client CL (MAN, NAM, CASA);
    CL.add_compte(c1);
    CL.add_compte(c2);
    CL.add_compte(c3);

    CompteEP* EP = new CompteEP("pa",200,400,500,"pa",600, 2300);
    

	
}