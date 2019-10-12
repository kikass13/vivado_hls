// sadri, this is a simple axi stream counter. 
int axi_stream_counter ( int * counter_output ) 
{ 
        static int counterValue = 0;
        counterValue++; 
        *counter_output = counterValue; 
        return 0; 
} 
