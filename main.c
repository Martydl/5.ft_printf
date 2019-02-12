#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	//void	*n = "45";
	//char	*n = "working?";
	//char	n = -128 127;
	//short int n = -32768/* 32767*/;
	//int n = -2147483648 2147483647;
	//long n = -9223372036854775807 9223372036854775807;
	//int64_t n = -9223372036854775807 9223372036854775807;
	//unsigned char n = 255;
	//unsigned short n = 65534;
	//unsigned int n = 4294967295;
	//unsigned long n = 18446744073709551615;
	//uint64_t n = 18446744073709551615;
	//double n;
	int n = 0;
	//long double n;
	//double n = /*2.0/0.0 1 2.0/0.0 */;


	//dprintf(1, "%d\n", ft_printf("% --- -++55.5% %o\t", n));
	//dprintf(1, "%d\n", dprintf(1, "% --- -++55.5% %o\t",n ));

	dprintf(1, "\n\n-----------------------------------------------\n\n");
	dprintf(1, "NORMAL\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %o\t", n));

	dprintf(1, " %d\n", ft_printf("  %1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %30.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %30.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+20.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+20.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %-o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-20.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-20.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %01o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %01o\t", n));

	dprintf(1, " %d\n", ft_printf("  %010o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010o\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %020.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %020.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#01o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#01o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#020.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#020.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %   o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   o\t", n));

	dprintf(1, " %d\n", ft_printf("  %   1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %   20.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   20.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+01o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+01o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+020.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+020.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#01o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#01o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#020.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#020.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % 0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0o\t", n));

	dprintf(1, " %d\n", ft_printf("  % 01o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 01o\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 010o\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 010.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  % 10.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  % 10.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  % 20.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 20.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+#0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#01o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#01o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#020.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#020.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % #0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0o\t", n));

	dprintf(1, " %d\n", ft_printf("  % #01o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #01o\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010o\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  % #020.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #020.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS + PLUS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %-+o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+20.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+20.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + MOINS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % -o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -o\t", n));

	dprintf(1, " %d\n", ft_printf("  % -1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -1o\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10o\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  % -20.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -20.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#+o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+20.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+20.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %# o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# o\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 20.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 20.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#-o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-20.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-20.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + MOINS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#- o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .10o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.0o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.0o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.1o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.15o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.15o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.20o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.20o\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 20.10o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 20.10o\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

}
