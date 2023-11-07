void	print_bits(unsigned char octet)
{
	int	bits;
	unsigned char bit;

	bits = 8;
	while (bits > 0)
	{
		bit = (octet >> i & 1) + 48;
		write(1, &bit, 1);
		bits--;
	}
}