#include "stdafx.h"
#include "Rock.h"



Rock::Rock()
{
	this->physicsData->SetWeightInKilograms(13);
	this->physicsData->height = 3;
	this->physicsData->length = 3;
	this->physicsData->width = 3;
	//this->height = 3;
	//this->width = 3;
}

string Rock::GetName()
{
	return "Rock";
}

double Rock::GetWeight()
{
	return this->physicsData->GetWeightInPounds();
}

void Rock::SetWeight(double weight)
{
	this->physicsData->SetWeightInKilograms(weight);
}

double Rock::GetWidth()
{
	return this->physicsData->width;
}

void Rock::SetWidth(double width)
{
	this->physicsData->width = width;
}

double Rock::GetHeight()
{
	return this->physicsData->height;
}

void Rock::SetHeight(double height)
{
	this->physicsData->height = height;
}

double Rock::GetLength()
{
	return this->physicsData->length;
}

void Rock::SetLength(double length)
{
	this->physicsData->length = length;
}

Material* Rock::GetTexture()
{
	return this->physicsData->material;
}

void Rock::SetTexture(Material* material)
{
	this->physicsData->material = material;
}
