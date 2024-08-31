//Type fichier lu

#pragma once
#include <fstream>
#include "fil.h"
#include "entier.h"
#include "booleen.h"
class fichier_lu
{
public:
	std::ifstream fichier;
	fichier_lu();
	fil ouvrir(std::string fichier);
	fil ouvrir(fil fichier);
	void fermer();
	fil ligne();
	booleen fin();
};

