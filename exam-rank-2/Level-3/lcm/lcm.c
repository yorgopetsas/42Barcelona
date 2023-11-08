unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int t;

	if (a == 0 || b == 0)
		return (0);
	if (a >= b)
		t = a;
	else
		t = b;
	while (1)
	{
		if (t % a == 0 && t % b == 0)
			return (t);
		t++;
	}
}