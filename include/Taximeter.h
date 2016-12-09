#ifndef TAXIMETER_H_
#define TAXIMETER_H_

#include <string>

using std::string;

const int ARRAY_MAX = 6;
const float DAY_PRICE[ARRAY_MAX] = {14, 3, 2.5, 10, 1.0, 0.25};
const float NIGHT_PRICE[ARRAY_MAX] = {18, 3, 3.5, 10, 1.2, 0.35};

class Taximeter
{
public:
	Taximeter(string time = "daytime");
	void  SetTime(string time);
	float GetFares(float miles, float waittime = 0.0);
private:
	void  SetPrice();
	float BaseFares()const;
	float MileageFares();
	float BaseDistanceFares();
	float LongDistanceFares();
	float CalculateFares(float milesPoint, float milesRate);
	float ExtraFares(float waittime);
private:
	float miles;
	float price[ARRAY_MAX];
	string time;
};

#endif
