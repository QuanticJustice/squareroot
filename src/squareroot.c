#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "prettyprint.h"

double squareroot( double num )
{
	double rv = sqrt( num );
	prettyprint( (int) rv );
	return rv;
}
