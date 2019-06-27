#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

int main(void)
{
	unsigned char octet;
	octet = 'c';
	printf("%d", swap_bits(octet));
	return (0);
}
