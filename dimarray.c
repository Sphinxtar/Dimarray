#include <stdio.h>
#include <stdlib.h>
// prototype yourself

double **dimarray( int x, int y )
{
	double **ray = NULL;
	ray = (double **)malloc( y * sizeof(double *));
	*ray = (double *)malloc( x * y * sizeof(double));
	for( int i = 1; i < y; ++i ){
		*(ray + i) = *(ray + i - 1) + x;
	}
	return(ray);
}

int  main( void )
{
	int retval = 0;
	double **ray = dimarray(6, 6);
	ray[3][3] = 5.0;
	ray[5][5] = 12345.123;
	printf("%f\n", ray[3][3]+ray[5][5]);
	free(ray);
	return(retval);
}
//eof
