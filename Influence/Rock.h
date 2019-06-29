#pragma once
class Rock:
	public IThing, 
	public IWeighable
{
public:
	Rock();
	virtual string GetName() override;

	virtual double GetWeight() override;
	virtual void SetWeight(double weight) override;
private:
	PhysicsData* physicsData = new PhysicsData();
};

