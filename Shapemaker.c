#include "turtle.h"
#include <stdio.h>

void shape(int initialX,int initailY,int numberOfSides, int sideLength)
{
	int n;
	double angle=0.0;
    setPosition(initialX,initailY);
	for (n=0;n<numberOfSides;n++)
	{
		line(sideLength,angle);
		angle+=360.0/numberOfSides;
	}
}

int main(void)
{
	shape(100,20,9,40);
	return 0;
}