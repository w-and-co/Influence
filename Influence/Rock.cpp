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
