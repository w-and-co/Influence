#include "stdafx.h"
#include "PhysicsData.h"

double PhysicsData::GetWeightInKilograms()
{
	return this->weight;
}

double PhysicsData::GetWeightInPounds()
{
	return this->weight * 2.2046;
}

void PhysicsData::SetWeightInKilograms(double weight)
{
	this->weight = weight;
}

void PhysicsData::SetWeightInPounds(double weight)
{
	this->weight = weight / 2.2046;
}
