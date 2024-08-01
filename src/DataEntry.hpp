#pragma once

#include <string>
#include <list>
#include <unordered_map>

class DataEntry {
private:
	std::string type;
	std::string name;
	bool enable;
	std::unordered_map<std::string, int> ingredients;
	int energy_required;
	DataEntry * result; //should be this->name I guess xD
public:
	DataEntry(const std::string& name, const std::string& result);

	void set_type(const std::string & new_type);
	void set_enable(bool new_status);
	void set_energy(int new_energy_required);
	void set_result(DataEntry * new_result);

	void add_ingredients(const DataEntry& ingredients, int quantity);
};