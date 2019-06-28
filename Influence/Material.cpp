#include "Material.h"

Material::Material() {
	this->name = "Substance";
}

string Material::GetName() {
	return this->name;
}