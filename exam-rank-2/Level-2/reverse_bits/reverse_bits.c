unsigned char	reverse_bits(unsigned char octet)
{
	int	bits;
	int	i;
	unsigned char	res;

	i = 0;
	bits = 8;
	while (i < bits)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i++;
	}
}