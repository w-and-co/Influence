#pragma once

class Material:
	public IThing
{
public:
	Material();
	~Material();
	string GetName();

protected:
	string name;

};

