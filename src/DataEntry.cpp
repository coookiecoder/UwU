#include "DataEntry.hpp"

DataEntry::DataEntry(const std::string& name, const std::string& result) : name(name), energy_required(0), enable(false) {
	if (name == result)
		this->result = this;
	else
		this->result = nullptr;
}

void DataEntry::set_type(const std::string & new_type) {
	this->type = new_type;
}

void DataEntry::set_enable(bool new_status) {
	this->enable = new_status;
}

void DataEntry::set_energy(int new_energy_required) {
	this->energy_required = new_energy_required;
}

void DataEntry::set_result(DataEntry * new_result) {
	this->result = new_result;
}

void DataEntry::add_ingredients(const DataEntry& new_ingredients, int quantity) {
	this->ingredients.insert(std::unordered_map<std::string, int>::value_type(new_ingredients.name, quantity));
}