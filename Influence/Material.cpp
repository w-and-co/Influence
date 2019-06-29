#include "stdafx.h"
#include "Material.h"

Material::Material() {
	this->name = "Substance";
}

Material::~Material()
{
}


string Material::GetName() {
	return this->name;
}