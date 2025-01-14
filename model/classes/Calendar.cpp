//
// Created by Taraxtix on 07/05/2022.
//

#include "Calendar.h"

Calendar::Calendar(const std::vector<std::string> header, const std::vector<std::string> params)
{
	std::string clndr_id_str;
	std::string day_hr_cnt_str;
	std::string week_hr_cnt_str;
	std::string month_hr_cnt_str;
	std::string year_hr_cnt_str;

	tsv = "";

	for (int i = 0; i < header.size(); i++)
	{
		if (header.at(i).empty())
			break;

		if (header.at(i) == "clndr_id")
		{
			if (!params.at(i).empty())
			{
				clndr_id = stoi(params.at(i));
				clndr_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "day_hr_cnt")
		{
			if (!params.at(i).empty())
			{

				day_hr_cnt = stof(params.at(i));
				day_hr_cnt_str = params.at(i);
			}
		}
		else if (header.at(i) == "week_hr_cnt")
		{
			if (!params.at(i).empty())
			{
				week_hr_cnt = stof(params.at(i));
				week_hr_cnt_str = params.at(i);
			}
		}
		else if (header.at(i) == "month_hr_cnt")
		{
			if (!params.at(i).empty())
			{
				month_hr_cnt = stof(params.at(i));
				month_hr_cnt_str = params.at(i);
			}
		}
		else if (header.at(i) == "year_hr_cnt")
		{
			if (!params.at(i).empty())
			{
				year_hr_cnt = stof(params.at(i));
				year_hr_cnt_str = params.at(i);
			}
		}
		else if (header.at(i) == "base_clndr_id")
		{
			base_clndr_id = params.at(i);
		}
		else if (header.at(i) == "clndr_data")
		{
			clndr_data = params.at(i);
		}
		else if (header.at(i) == "clndr_name")
		{
			clndr_name = params.at(i);
		}
		else if (header.at(i) == "clndr_type")
		{
			clndr_type = params.at(i);
		}
		else if (header.at(i) == "default_flag")
		{
			default_flag = params.at(i);
		}
		else if (header.at(i) == "last_chng_date")
		{
			last_chng_date = params.at(i);
		}
		else if (header.at(i) == "proj_id")
		{
			proj_id = params.at(i);
		}
	}
	tsv.append(clndr_id_str).append("\t").append(day_hr_cnt_str).append("\t").append(week_hr_cnt_str).append("\t").append(month_hr_cnt_str).append("\t").append(year_hr_cnt_str).append("\t").append(base_clndr_id).append("\t").append(clndr_data).append("\t").append(clndr_name).append("\t").append(clndr_type).append("\t").append(default_flag).append("\t").append(last_chng_date).append("\t").append(proj_id).append("\n");
}

std::string Calendar::get_tsv()
{
	tsv = "";
	tsv.append(std::to_string(clndr_id)).append("\t").append(std::to_string(day_hr_cnt)).append("\t").append(std::to_string(week_hr_cnt)).append("\t").append(std::to_string(month_hr_cnt)).append("\t").append(std::to_string(year_hr_cnt)).append("\t").append(base_clndr_id).append("\t").append(clndr_data).append("\t").append(clndr_name).append("\t").append(clndr_type).append("\t").append(default_flag).append("\t").append(last_chng_date).append("\t").append(proj_id).append("\n");
	return tsv;
}
