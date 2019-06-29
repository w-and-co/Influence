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

double Material::GetDensity()
{
	return this->physicsDensityData->GetDensity();
}

void Material::SetDensity(double density)
{
	this->physicsDensityData->SetDensity(density);
}
