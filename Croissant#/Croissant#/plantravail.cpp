#include "croissant#.h"

void* vide_() {};

int main() {
	fichier_ecrit fichier;
	fichier.ouvrir("C:/Temp/fichier.txt",faux());
	fil texte = lecture();
	fichier.fichier << texte.chaine_()+"\n";
	fichier.fermer();

	tantque(afficherligne().valeur == "faux", afficherligne());
}

booleen afficherligne()
{
	fichier_lu fichierlu;
	fichierlu.ouvrir("C:/Temp/fichier.txt");
	afficher(fichierlu.ligne());
	fichierlu.fermer();
	return fichierlu.fin();
}

