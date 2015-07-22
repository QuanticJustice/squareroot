#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "prettyprint.h"

double squareroot( double num )
{
	double sqrt = sqrt( num );
	prettyprint( (int) sqrt );
	return sqrt;
}
