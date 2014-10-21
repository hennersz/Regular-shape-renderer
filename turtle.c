#include <math.h>
#include "graphics.h"

double x=0.0;
double y=0.0;

double convertToRadians(double angle)
{
	return (M_PI/180)*angle;
}

void line(double length, double angle)
{
	double endX = (cos(convertToRadians(angle)) * length) + x; 
	double endY = (sin(convertToRadians(angle)) * length) + y; 
	drawLine((int)round(x),(int)round(y), (int)round(endX), (int)round(endY)); 
	x = endX; 
	y = endY; 
}
void setPosition(int xPosition, int yPosition)
{
	x=xPosition;
	y=yPosition;
}