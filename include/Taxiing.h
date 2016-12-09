#ifndef TAXIING_H_
#define TAXIING_H_

const int BASEFARE = 14;
const float FARE_PER_MILE = 2.5;

class Taxiing
{
public:
	Taxiing(float miles = 0);
	float getFares() const;
private:
	float fares;
};

#endif
