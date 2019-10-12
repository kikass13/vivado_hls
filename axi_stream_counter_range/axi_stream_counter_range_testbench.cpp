// Sadri, test bench for axi_stream_counter_range
#include<stdio.h>

int axi_stream_counter_range ( int , int *);

int main ( void )
{
	printf("###################################\n");
	int i;
	int y;

	for ( i = 0; i < 100 ; i++ )
	{
		axi_stream_counter_range ( i, &y );
		printf("Test Nick [%d]: %d\n", i, y);
	}
	printf("###################################\n");
	return 0; 
} 
