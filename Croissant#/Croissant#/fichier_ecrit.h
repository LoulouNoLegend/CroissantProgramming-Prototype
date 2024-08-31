//Type fichier écrit

#pragma once
#include <fstream>
#include "fil.h"
#include "booleen.h"
class fichier_ecrit
{
public:
	std::ofstream fichier;
	fichier_ecrit();
	fil ouvrir(std::string fichier, booleen reintialiser);
	fil ouvrir(fil fichier, booleen reintialiser);
	void fermer();
	//std::ofstream fichier_();
};

