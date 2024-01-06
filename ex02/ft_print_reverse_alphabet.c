#include<unistd.h>
#include<stdio.h>

void ft_print_reverse_alphabet(void)
{
	int i = 122;
	while( i >= 97)
	{
		write(1,&i,1);
		i--;
	}
}
int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
