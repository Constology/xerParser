//
// Created by sorat on 12/05/2022.
//

#ifndef XERPARSER_PCATVALS_H
#define XERPARSER_PCATVALS_H

#include <vector>

#include "classes/Pcatval.h"

class Pcatvals
{
public:
	void add(const Pcatval &pcatval);

	Pcatval findById(int id);
	std::vector<Pcatval> getAll();
	std::vector<Pcatval> getByTypeId(int id);

	std::string get_tsv() const;

private:
	std::vector<Pcatval> pcatvals;
};

#endif // XERPARSER_PCATVALS_H
