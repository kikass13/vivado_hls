
#include <math.h>
#include <stdint.h>


#define FIFO_SIZE 512


/*
input  user_w_write_32_full_w,
output [31:0] user_w_write_32_data_w,
output  user_w_write_32_open_w,
output  user_w_write_32_wren_w,
*/

/*int array[FIFO_SIZE];

void xilly_fifo2axis (  int wdata, int open, int wren,
						int* out, int* full)
{
	#pragma HLS INTERFACE axis register both port=out


	int i;


	int reset = ~(open);	// if xillybus opens the file, we reset

	if(reset)
	{
		for(i = 0; i < FIFO_SIZE; i++){
			array[i] = 0;
		}
		out = 0;
	}

}
*/


void xilly_fifo2axis (int* in, int* out){
	#pragma AP interface ap_fifo port=in
	#pragma HLS INTERFACE axis register both port=out

	uint32_t x, y;

	x = *in++;
	*out++ = y;
}
