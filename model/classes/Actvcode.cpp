//
// Created by Taraxtix on 06/05/2022.
//

#include "Actvcode.h"

Actvcode::Actvcode(const std::vector<std::string> header, const std::vector<std::string> params)
{
	std::string actv_code_id_str;
	std::string actv_code_type_id_str;
	std::string parent_actv_code_id_str;
	std::string seq_num_str;

	tsv = "";

	for (int i = 0; i < header.size(); i++)
	{
		if (header.at(i).empty())
			break;

		if (header.at(i) == "actv_code_id")
		{
			if (!params.at(i).empty())
			{
				actv_code_id = stoi(params.at(i));
				actv_code_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "actv_code_type_id")
		{
			if (!params.at(i).empty())
			{
				actv_code_type_id = stoi(params.at(i));
				actv_code_type_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "parent_actv_code_id")
		{
			if (!params.at(i).empty())
			{
				parent_actv_code_id = stoi(params.at(i));
				parent_actv_code_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "seq_num")
		{
			if (!params.at(i).empty())
			{
				seq_num = stoi(params.at(i));
				seq_num_str = params.at(i);
			}
		}
		else if (header.at(i) == "actv_code_name")
		{
			actv_code_name = params.at(i);
		}
		else if (header.at(i) == "short_name")
		{
			short_name = params.at(i);
		}
	}
	tsv.append(actv_code_id_str).append("\t").append(actv_code_type_id_str).append("\t").append(parent_actv_code_id_str).append("\t").append(seq_num_str).append("\t").append(actv_code_name).append("\t").append(short_name).append("\n");
}
