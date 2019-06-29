#pragma once
#include "IWeighable.h"


class IThing
	: public IWeighable
{
	IThing();
	virtual ~IThing() = 0;
};


