#pragma once
class IWeighable {
public:
	IWeighable() {};

	virtual double GetWeight() = 0;
	virtual void SetWeight(double weight) = 0;

};