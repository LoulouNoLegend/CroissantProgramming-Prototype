// Classe fil
#pragma once
#include "caractere.h"
#include <vector>
#include <string>
class fil
{
public:
	std::vector<char> chaine;
	fil(std::vector<char> chaine);
	fil(std::string chainefil);
	fil();
	void egal(std::vector<char> chaine);
	void egal(std::string chaine);
	std::vector<char> valeur();
	std::string chaine_();
};

