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

char *ft_strchr(const char *str, int c)
{
        if(!str)
        {
                return (0);
        }
        while(*str != '\0')
        {       
                if(c == *str)   
                {               
                        return((char *)str);
                }
                str++;
        }
        return (str); 
}




char *ft_strchr(const char *str, int c)
{
	while(*str != '\0')
	{
		if((char)c == str)
			return ((char *)str);
		str++;
	}
	if (*str == 0 && (char)c == 0)
	{
		return ((char *)str);
	}
	return (0);
}




 