int axi_stream_counter ( int * );

int main ( void ) 
{
	int i ; 
	int y ; 
	for ( i = 0 ; i < 100 ; i++ ) 
	{
		axi_stream_counter ( &y );
	}
	return 0; 
}