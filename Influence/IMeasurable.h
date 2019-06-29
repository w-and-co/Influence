#pragma once
class IMeasurable {
public:
	IMeasurable() {};

	virtual double GetWidth() = 0;
	virtual void SetWidth(double width) = 0;

	virtual double GetHeight() = 0;
	virtual void SetHeight(double height) = 0;

	virtual double GetLength() = 0;
	virtual void SetLength(double length) = 0;



};