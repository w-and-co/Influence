#pragma once

class Material:
	public IThing,
	public IDensable
{
public:
	Material();
	~Material();
	string GetName();

	virtual double GetDensity() override;

protected:
	string name;
	PhysicsDensityData* physicsDensityData = new PhysicsDensityData();

	
};

