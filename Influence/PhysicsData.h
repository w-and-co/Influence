#pragma once

//Дальше стоит разделить класс на характеристики, 
//а этот класс сделать Фасадом или Посредником.
//Но это сейчас не в приоритете.

class PhysicsData {
public:
	double GetWeightInKilograms();
	double GetWeightInPounds();

	void SetWeightInKilograms(double weight);
	void SetWeightInPounds(double weight);

	double width = 0.00000000001;
	double height = 0.00000000001;
	double length = 0.00000000001;
private:
	double weight = 0.00000000001;
};
