#include "stdafx.h"
#include "Cobblestone.h"



Cobblestone::Cobblestone()
{
	this->physicsData->SetWeightInKilograms(13);
	this->physicsData->height = 3;
	this->physicsData->length = 3;
	this->physicsData->width = 3;
	//this->height = 3;
	//this->width = 3;
}

string Cobblestone::GetName()
{
	return "Cobblestone";
}

double Cobblestone::GetWeight()
{
	return this->physicsData->GetWeightInPounds();
}

void Cobblestone::SetWeight(double weight)
{
	this->physicsData->SetWeightInKilograms(weight);
}

double Cobblestone::GetWidth()
{
	return this->physicsData->width;
}

void Cobblestone::SetWidth(double width)
{
	this->physicsData->width = width;
}

double Cobblestone::GetHeight()
{
	return this->physicsData->height;
}

void Cobblestone::SetHeight(double height)
{
	this->physicsData->height = height;
}

double Cobblestone::GetLength()
{
	return this->physicsData->length;
}

void Cobblestone::SetLength(double length)
{
	this->physicsData->length = length;
}

Material* Cobblestone::GetTexture()
{
	return this->physicsData->material;
}

void Cobblestone::SetTexture(Material* material)
{
	this->physicsData->material = material;
}
