#pragma once
class Rock:
	public IThing, 
	public IWeighable,
	public IMeasurable
{
public:
	Rock();
	virtual string GetName() override;

	virtual double GetWeight() override;
	virtual void SetWeight(double weight) override;

	virtual double GetWidth() override;
	virtual void SetWidth(double width) override;

	virtual double GetHeight() override;
	virtual void SetHeight(double height) override;

	virtual double GetLength() override;
	virtual void SetLength(double length) override;

private:
	PhysicsData* physicsData = new PhysicsData();

	
};

