#pragma once
class Cobblestone :
	public IThing, 
	public IWeighable,
	public IMeasurable,
	public ITextural
{
public:
	Cobblestone();
	virtual string GetName() override;

	virtual double GetWeight() override;
	virtual void SetWeight(double weight) override;

	virtual double GetWidth() override;
	virtual void SetWidth(double width) override;

	virtual double GetHeight() override;
	virtual void SetHeight(double height) override;

	virtual double GetLength() override;
	virtual void SetLength(double length) override;

	virtual Material* GetTexture() override;
	virtual void SetTexture(Material* material) override;
private:
	PhysicsData* physicsData = new PhysicsData();

};

