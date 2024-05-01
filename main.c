#include <stdio.h>  // Standard I/O
#include "inc/ft_printf.h" // For the printf header

// int main(void)
// {
    
//     ft_printf("Testing my printf: %s\n", "Hello, World!");
   
//    int x =printf("or : %s ",NULL);
//     printf("\n");
//    int y =ft_printf("ft : %s ",NULL);
//    printf("\nor: %d    ft: %d",x ,y);

//     // More tests...

//     return 0;
// }

void	test_simple(void)
{
	int	x;
	int	y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: simple string -----------\n\n");
	printf("Testing: (\"\\tHello!\\n\")\n");
	x += printf("  Or\t:\tHello!\n");
	y += ft_printf("  Ft\t:\tHello!\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_percent(void)
{
	int	x;
	int	y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: percent -----------\n\n");
	printf("Testing: (\"\\t%%%%\\n\")\n");
	x += printf("  Or\t:\t%%\n");
	y += ft_printf("  Ft\t:\t%%\n");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);

}

void	test_c(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%c -----------\n\n");
	printf("Testing: (\"\\t%%c\\n\", 'a')\n");
	x += printf("  Or\t:\t%c\n", 'a');
	y += ft_printf("  Ft\t:\t%c\n", 'a');
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe character %%c is visible.\\n\", 'x')\n");
	x += printf("  Or\t:\tThe character %c is visible.\n", 'x');
	y += ft_printf("  Ft\t:\tThe character %c is visible.\n", 'x');
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_s(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%s -----------\n\n");
	printf("Testing: (\"\\t%%s\\n\", \"coucou, ca va?\")\n");
	x += printf("  Or\t:\t%s\n", "coucou, ca va?");
	y += ft_printf("  Ft\t:\t%s\n", "coucou, ca va?");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe string \\\"%%s\\\" is visible.\\n\", \"TRALALA\")\n");
	x += printf("  Or\t:\tThe string \"%s\" is visible.\n", "TRALALA");
	y += ft_printf("  Ft\t:\tThe string \"%s\" is visible.\n", "TRALALA");
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	char *s = NULL;
	if (s == NULL)
		write(1, "(null)\n", 7);
	printf("Testing: (\"\\tNULL %%s NULL.\\n\", NULL)\n");
	x += printf("  Or\t:\tNULL %s NULL.\n", s);
	y += ft_printf("  Ft\t:\tNULL %s NULL.\n", s);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_d(void)
{
	int x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%d -----------\n\n");
	printf("Testing: (\"\\t%%d\\n\", 42)\n");
	x += printf("  Or\t:\t%d\n", 42);
	y += ft_printf("  Ft\t:\t%d\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe number %%d is visible.\\n\", 5671)\n");
	x += printf("  Or\t:\tThe number %d is visible.\n", 5671);
	y += ft_printf("  Ft\t:\tThe number %d is visible.\n", 5671);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%d\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%d\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%d\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%d\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%d\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%d\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", INT_MIN - INT_MIN)\n");
	x += printf("  Or\t:\t%i\n", INT_MIN - INT_MIN);
	y += ft_printf("  Ft\t:\t%i\n", INT_MIN - INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_i(void)
{
	int x, y;
	printf("\n----------- TEST: %%i -----------\n\n");
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", 4422)\n");
	x += printf("  Or\t:\t%i\n", 4422);
	y += ft_printf("  Ft\t:\t%i\n", 4422);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe number %%i is visible.\\n\", 0)\n");
	x += printf("  Or\t:\tThe number %i is visible.\n", 0);
	y += ft_printf("  Ft\t:\tThe number %i is visible.\n", 0);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%i\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%i\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%i\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%i\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%i\\n\", INT_MIN + INT_MAX)\n");
	x += printf("  Or\t:\t%i\n", INT_MIN + INT_MAX);
	y += ft_printf("  Ft\t:\t%i\n", INT_MIN + INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_x(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%x -----------\n\n");
	printf("Testing: (\"\\t%%x\\n\", 42)\n");
	x += printf("  Or\t:\t%x\n", 42);
	y += ft_printf("  Ft\t:\t%x\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe hex number %%x is visible.\\n\", 5671)\n");
	x += printf("  Or\t:\tThe hex number %x is visible.\n", 5671);
	y += ft_printf("  Ft\t:\tThe hex number %x is visible.\n", 5671);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%x\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%x\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%x\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%x\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", -42)\n");
	x += printf("  Or\t:\t%x\n", -42);
	y += ft_printf("  Ft\t:\t%x\n", -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%x\\n\", UINT_MAX)\n");
	x += printf("  Or\t:\t%x\n", UINT_MAX);
	y += ft_printf("  Ft\t:\t%x\n", UINT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_X(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%X -----------\n\n");
	printf("Testing: (\"\\t%%X\\n\", 42)\n");
	x += printf("  Or\t:\t%X\n", 42);
	y += ft_printf("  Ft\t:\t%X\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe hex number %%X is visible.\\n\", 5671)\n");
	x += printf("  Or\t:\tThe hex number %X is visible.\n", 5671);
	y += ft_printf("  Ft\t:\tThe hex number %X is visible.\n", 5671);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%X\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%X\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%X\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%X\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%X\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%X\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%X\\n\", -42)\n");
	x += printf("  Or\t:\t%X\n", -42);
	y += ft_printf("  Ft\t:\t%X\n", -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%X\\n\", UINT_MAX)\n");
	x += printf("  Or\t:\t%X\n", UINT_MAX);
	y += ft_printf("  Ft\t:\t%X\n", UINT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_u(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: %%u -----------\n\n");
	printf("Testing: (\"\\t%%u\\n\", 42)\n");
	x += printf("  Or\t:\t%u\n", 42);
	y += ft_printf("  Ft\t:\t%u\n", 42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\tThe number %%u is visible.\\n\", 5671)\n");
	x += printf("  Or\t:\tThe number %u is visible.\n", 5671);
	y += ft_printf("  Ft\t:\tThe number %u is visible.\n", 5671);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", INT_MAX)\n");
	x += printf("  Or\t:\t%u\n", INT_MAX);
	y += ft_printf("  Ft\t:\t%u\n", INT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", INT_MIN)\n");
	x += printf("  Or\t:\t%u\n", INT_MIN);
	y += ft_printf("  Ft\t:\t%u\n", INT_MIN);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", -42)\n");
	x += printf("  Or\t:\t%u\n", -42);
	y += ft_printf("  Ft\t:\t%u\n", -42);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%u\\n\", UINT_MAX)\n");
	x += printf("  Or\t:\t%u\n", UINT_MAX);
	y += ft_printf("  Ft\t:\t%u\n", UINT_MAX);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_p(void)
{
	int	x, y;
	printf("\n----------- TEST: %%p -----------\n\n");
	x = 0;
	y = 0;
	int	n;
	char	c;
	void	*p;

	n = 50;
	c = 'a';
	p = NULL;
	printf("Testing: (\"\\t%%p\\n\", (void *)&n)\n");
	x += printf("  Or\t:\t%p\n", (void *)&n);
	y += ft_printf("  Ft\t:\t%p\n", (void *)&n);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%p\\n\", (void *)&c)\n");
	x += printf("  Or\t:\t%p\n", (void *)&c);
	y += ft_printf("  Ft\t:\t%p\n", (void *)&c);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
	x = 0;
	y = 0;
	printf("Testing: (\"\\t%%p\\n\", p)\n");
	x += printf("  Or\t:\t%p\n", p);
	y += ft_printf("  Ft\t:\t%p\n", p);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

void	test_all(void)
{
	int	x, y;
	x = 0;
	y = 0;
	printf("\n----------- TEST: ALL -----------\n\n");
	printf("Testing: (\"\\tThe int is %%i or %%d, the char is %%c, the string is \\\"%%s\\\", the hex is %%x or %%X, the unsigned is %%u and the percent is %%%%.\\n\", 42, -42, 's', \"Hello\", 42, 42, 242)\n");
	x += printf("  Or\t:\tThe int is %i or %d, the char is %c, the string is \"%s\", the hex is %x or %X, the unsigned is %u and the percent is %%.\n", 42, -42, 's', "Hello", 42, 42, 242);
	y += ft_printf("  Or\t:\tThe int is %i or %d, the char is %c, the string is \"%s\", the hex is %x or %X, the unsigned is %u and the percent is %%.\n", 42, -42, 's', "Hello", 42, 42, 242);
	printf("Printf = %d, ft_printf = %d\n\n", x, y);
}

int main()
{
    test_simple();
    test_c();
    test_d();
    test_i();
    test_p();
    test_percent();
    test_s();
    test_u();
    test_X();
    test_x();
	// printf("  Or\t:\t%%, %i, %c, %s\n", 50, 'a', NULL);
	// printf("  Ft\t:\t%%, %i, %c, %s\n", 50, 'a', NULL);
}

// #include "inc/ft_printf.h"
// #include <limits.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char            *suc;
//     long            nbr;
//     int             smol;
//     unsigned int    uint;
//     void            *ptr;    uint = 4294967295;
//     suc = "Success";
//     ptr = (void *)suc;
//     smol = 42;
//     nbr = 7748484204820392;
//     ft_printf("c : %c\ns : %s = Success\np : %p\nd : %d \ni : %i\nu : %u\nx : %x\nX :%X\n%%", 'z', suc, ptr, nbr, smol,uint, nbr, nbr);
//     ft_printf("--------------|%%P FLAG|--------------\n");
//        printf("OG    (empty): %p                     \n", (void *)"");
//     ft_printf("|     (empty): %p                     \n", (void *)"");
//     ft_printf("|        NULL: %p                     \n", (void *)NULL);
//        printf("OG       NULL: %p                     \n", (void *)NULL);
//     ft_printf("|       LLMAX: %p                     \n", (void *)LLONG_MAX);
//        printf("OG      LLMAX: %p                     \n", (void *)LLONG_MAX);
//     ft_printf("|        LMAX: %p                     \n", (void *)LONG_MAX);
//        printf("OG       LMAX: %p                     \n", (void *)LONG_MAX);
//     ft_printf("|        LMAX: %p                     \n", (void *)LONG_MAX);
//        printf("OG       LMAX: %p                     \n", (void *)LONG_MAX);
//     ft_printf("|       ULMAX: %p                     \n", (void *)ULONG_MAX);
//        printf("OG      ULMAX: %p                     \n", (void *)ULONG_MAX);
//     ft_printf("|      -ULMAX: %p                     \n", (void *)-ULONG_MAX);
//        printf("OG     -ULMAX: %p                     \n", (void *)-ULONG_MAX);
//     ft_printf("|        LMIN: %p                     \n", (void *)LONG_MIN);
//        printf("OG       LMIN: %p                     \n", (void *)LONG_MIN);
//     ft_printf("|      UI_MAX: %p                     \n", (void *)UINT_MAX);
//        printf("OG     UI_MAX: %p                     \n", (void *)UINT_MAX);
//     ft_printf("|       I_MIN: %p                     \n", (void *)INT_MIN);
//        printf("OG      I_MIN: %p                     \n", (void *)INT_MIN);
//     ft_printf("|        -val: %p                    \n", (void *)-14523);
//        printf("OG       -val: %p                    \n", (void *)-14523);
//     ft_printf("|          -1: %p                     \n", (void *)-1);
//        printf("OG         -1: %p                     \n", (void *)-1);
//     ft_printf("|          42: %p                     \n", (void *)42);
//        printf("OG         42: %p                     \n", (void *)42);
//     ft_printf("--------------|%%d FLAG|--------------\n");
//     ft_printf("|      UI_MAX: %d                     \n", INT_MAX);
//        printf("OG     UI_MAX: %d                     \n", INT_MAX);
//     ft_printf("|       I_MIN: %d                     \n", INT_MIN);
//        printf("OG      I_MIN: %d                     \n", INT_MIN);
//        printf("OG         -1: %d                     \n", -1);
//     ft_printf("|          42: %d                     \n", 42);
//        printf("OG         42: %d                     \n", 42);
//     ft_printf("|         -42: %d                     \n", -42);
//        printf("OG        -42: %d                    \n", -42);    ft_printf("--------------|%%i FLAG|--------------\n");
//     ft_printf("|      UI_MAX: %i                     \n", INT_MAX);
//        printf("OG     UI_MAX: %i                     \n", INT_MAX);
//     ft_printf("|       I_MIN: %i                     \n", INT_MIN);
//        printf("OG      I_MIN: %i                     \n", INT_MIN);
//     ft_printf("|        -val: %i                    \n", -14523);
//        printf("OG       -val: %i                    \n", -14523);
//     ft_printf("|          -1: %i                     \n", -1);
//        printf("OG         -1: %i                     \n", -1);
//     ft_printf("|          42: %i                     \n", 42);
//        printf("OG         42: %i                     \n", 42);
//     ft_printf("|         -42: %i                     \n", -42);
//        printf("OG        -42: %i                     \n", -42);    ft_printf("--------------|%%u FLAG|--------------\n");
//     ft_printf("|      UI_MAX: %u                     \n", UINT_MAX);
//        printf("OG     UI_MAX: %u                     \n", UINT_MAX);
//     ft_printf("|      UI_MAX: %u                     \n", LONG_MAX);
//        printf("OG     UI_MAX: %u                     \n", LONG_MAX);
//     ft_printf("|      UI_MAX: %u                     \n", 9223372036854775807LL);
//        printf("OG     UI_MAX: %u                     \n", 9223372036854775807LL);
//     ft_printf("|      UL_MAX: %u                     \n", UINT_MAX);
//        printf("OG     UL_MAX: %u                     \n", UINT_MAX);
//        printf("|       L_MAX: %u                     \n", UINT_MAX);
//        printf("OG      L_MAX: %u                     \n", UINT_MAX);    ft_printf("|           0: %u                     \n", 0);
//        printf("OG          0: %u                     \n", 0);
//     ft_printf("|          42: %u                     \n", 42);
//        printf("OG         42: %u                     \n", 42);    ft_printf("--------------|%%x FLAG|--------------\n");    ft_printf("|       UIMAX: %x                     \n",  2019496700);
//        printf("OG      UIMAX: %x                     \n",  2019496700);
//     ft_printf("|       ULMAX: %x                     \n", ULONG_MAX);
//        printf("OG      ULMAX: %x                     \n", ULONG_MAX);
//     ft_printf("|    LONG_MIN: %x                     \n", LONG_MIN);
//        printf("OG   LONG_MIN: %x                     \n", LONG_MIN);
//     ft_printf("|    LONG_MAX: %x                     \n", LONG_MAX);
//        printf("OG   LONG_MAX: %x                     \n", LONG_MAX);
//     ft_printf("|        -val: %x                    \n", -14523);
//        printf("OG       -val: %x                    \n", -14523);
//     ft_printf("|          -1: %x                     \n", -1);
//        printf("OG         -1: %x                     \n", -1);
//     ft_printf("|          42: %x                     \n", 42);
//        printf("OG         42: %x                     \n", 42);
//     ft_printf("|         -42: %x                     \n", -42);
//        printf("OG        -42: %x                     \n", -42);
//         ft_printf("--------------|%%X FLAG|--------------\n");   
//     ft_printf("|        LMAX: %X                     \n", UINT_MAX);
//        printf("OG       LMAX: %X                     \n", UINT_MAX);
//     ft_printf("|        -val: %X                    \n", -14523);
//        printf("OG       -val: %X                    \n", -14523);
//     ft_printf("|           1: %X                     \n",1);
//        printf("OG          1: %X                     \n", 1);
//     ft_printf("|          42: %X                     \n", 42);
//        printf("OG         42: %X                     \n", 42);
//     ft_printf("|          42: %X                     \n", 42);
//        printf("OG         42: %X                     \n\n\n\n", 42);
//    ft_printf("test %c %d %% %p %s %i %x %X %u\n\n", 'A', 12345607, ptr, NULL, 9876543, 159159, 263526, 1234567);
//        printf("test %c %d %% %p %s %i %x %X %u", 'A', 12345607, ptr, NULL, 9876543, 159159, 263526, 1234567);
//     return (0);
// }


