#include "fichier_lu.h"

//Type fichier lu

fichier_lu::fichier_lu() {}

fil fichier_lu::ouvrir(std::string fichier)
{
	this->fichier.open(fichier);
	if (this->fichier) return fil("Fichier " + fichier + " ouvert");
	else return fil("Fichier " + fichier + " ERREUR");
}

fil fichier_lu::ouvrir(fil fichier)
{
	this->fichier.open(fichier.chaine_());
	if (this->fichier) return fil("Fichier " + fichier.chaine_() + " ouvert");
	else return fil("Fichier " + fichier.chaine_() + " ERREUR");
}

void fichier_lu::fermer(){ this->fichier.close(); }

fil fichier_lu::ligne()
{
	std::string ligne;
	getline(fichier, ligne);
	return fil(ligne);
}

booleen fichier_lu::fin()
{
	if (fichier.eof()) return booleen("vrai");
	else return booleen("faux");
}

