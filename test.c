#include <stdio.h>  // Standard I/O
#include "./inc/libft.h"      // For the libft header
#include "./inc/printf.h" // For the printf header

int main()
{
	int n = 50;
	char c = 'a';
	void *p;
	
	p = NULL;

	int res = 0;
	int res1 = 0;
	int res2 = 0;

	int res3 = 0;
	int res4 = 0;
	int res5 = 0;
	int res6 = 0;

	res = printf("%p", &n);
	res1 = ft_printf("%p", &n);

	res2 = printf("\t%p\n", &c);
	res3 =ft_printf("\t%p\n", &c);

	res4 = printf("\t%p\n", p);
	res5 = ft_printf("\t%p\n", p);
	res6 = print_add(&p);

	printf("\n%d\n",add_len(&p));

	printf("\nres : %d , res1 : %d , res2 : %d , res3 : %d , res4 : %d , res5 : %d , res6 : %d",res,res1,res2,res3,res4,res5,res6);

	return 0;

	// 0x 7f fe ef 93 f7 a8
	// 7f fe e9 4c 87 a8
}