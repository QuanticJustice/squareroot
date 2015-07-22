#include <stdio.h>
#include <stdlib.h>
#include "squareroot.h"

int main( int argc, char* argv[] )
{
	printf( "Square Root Test Driver\n" );
	double rv = squareroot( 75 );

	printf( "rv = %lf\n", rv );
	
	return 0;
}
