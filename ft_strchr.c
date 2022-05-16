
char *ft_strchr(const char *str, int c)
{
	while(*str != '\0')
	{
		if(c == *str)
		{		
			return((char *)str);
		}
		str++;
	}
	return (0);	
}

