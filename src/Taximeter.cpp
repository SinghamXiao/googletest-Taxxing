#include "Taximeter.h"

Taximeter::Taximeter(string time)
{
	this->time = time;
}

float Taximeter::GetFares(float miles, float waittime)
{
	this->miles = miles;
    if(miles - static_cast<int>(miles) > 0)
      this->miles = static_cast<int>(miles) + 1;
	SetPrice();

	return BaseFares() + MileageFares() + ExtraFares(waittime);
}

void Taximeter::SetPrice()
{
	if(time == "daytime")
	{
		for(int index = 0; index < ARRAY_MAX; index++)
			price[index] = DAY_PRICE[index];
		return;
	}
	for(int index = 0; index < ARRAY_MAX; index++)
		price[index] = NIGHT_PRICE[index];
}


float Taximeter::BaseFares() const
{
	return price[0];
}

float Taximeter::MileageFares()
{
	return BaseDistanceFares() + LongDistanceFares();
}

float Taximeter::BaseDistanceFares()
{
	return CalculateFares(price[1], price[2]);
}

float Taximeter::LongDistanceFares()
{
	return CalculateFares(price[3], price[4]);
}

float Taximeter::CalculateFares(float milesPoint, float milesRate)
{
    if(miles > milesPoint)
    {
      return (miles - milesPoint) * milesRate;
    }
    return 0.0;
}

float Taximeter::ExtraFares(float waittime)
{
	return waittime * price[ARRAY_MAX - 1];
}
