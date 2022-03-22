#pragma once
#include"Compte_Epargne.h"
#include"Compte_Payant.h"


namespace Bank {
	class CompteEP : public  Compte_Epargne, Compte_Payant
	{
	public: 
		CompteEP(Client* prop, Devise* solde,double 	tauxIntert,Devise* solde, Client* p, double taux,double 	total);
		
		~CompteEP();
	private: 
		double total;
	};

};