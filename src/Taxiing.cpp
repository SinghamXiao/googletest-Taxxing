#include "Taxiing.h"

Taxiing::Taxiing(float miles)
{
	if(miles > 3)
		fares = (static_cast<int>(miles + 1) - 3) * FARE_PER_MILE;
	else
		fares = 0;

	fares += BASEFARE;
}

float Taxiing::getFares() const
{
	return fares;
}
