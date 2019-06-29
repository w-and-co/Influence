#pragma once
class PhysicsDensityData : 
	public IDensable
{
public:
	PhysicsDensityData() {};
	double GetDensity();
	void SetDensity(double density);
private:
	double density = 0.00000000001;
};

