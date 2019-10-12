// sadri, this is a simple axi stream counter.

int axi_stream_counter_range (  int count_range,
								int * counter_output )
{
        int counterValue;
        int buf_ = 0;
        for (counterValue = 0; counterValue < count_range; counterValue++)
        	buf_ = counterValue;
        *counter_output = buf_;
        return 0;
}
