#include "fichier_ecrit.h"

//Type fichier écrit

fichier_ecrit::fichier_ecrit(){}

fil fichier_ecrit::ouvrir(std::string fichier, booleen reintialiser)
{
	if (reintialiser.valeur == "vrai") this->fichier.open(fichier);
	if (reintialiser.valeur == "faux") this->fichier.open(fichier, std::ios::app);

	if (this->fichier) return fil("Fichier "+fichier+" ouvert");
	else return fil("Fichier " + fichier + " ERREUR");

}

fil fichier_ecrit::ouvrir(fil fichier, booleen reintialiser)
{
	if (reintialiser.valeur == "vrai") this->fichier.open(fichier.chaine_());
	if (reintialiser.valeur == "faux") this->fichier.open(fichier.chaine_(), std::ios::app);

	if (this->fichier) return fil("Fichier " + fichier.chaine_() + " ouvert");
	else return fil("Fichier " + fichier.chaine_() + " ERREUR");
}

void fichier_ecrit::fermer() { this->fichier.close(); }

