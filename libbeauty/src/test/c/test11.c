/* A very simple function to test pointers to memory stores. */

static int mem1 = 0x123;
static int *memory = &mem1;

int test11(int value1 );

int test11(int value1 ) {
	int local;
	local = value1 + *memory;	
	return local;
}

