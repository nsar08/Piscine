char *ft_strcpy(char *dest, char *src)
{
int	size;

size = 0;

while (*src != '\0')
{
	*dest = *src;
	size++;
}
*dest = '\0';
return (0);
}
