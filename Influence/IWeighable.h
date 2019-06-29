#pragma once
class IWeighable {
	IWeighable();
	virtual ~IWeighable() = 0;

	virtual void GetWeight() = 0;
	virtual void SetWeight(double weight) = 0;

};