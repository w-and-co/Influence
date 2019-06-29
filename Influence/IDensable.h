#pragma once
class IDensable
{
public:
	IDensable() {};

	virtual double GetDensity() = 0;
	virtual void SetDensity(double density) = 0;
};

