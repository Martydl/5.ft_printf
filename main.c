#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	//void	*n = "45";
	//char	n = 'z';
	//char	*n = "working?";
	//char	n = 'm';
	//short int n = 32767;
	int n = 2147483648;
	//int64_t n = 1485723452154785;
	//long n = 1584756545680234;
	//double n;
	//long double n;
	//double n = /*2.0/0.0 1 2.0/0.0 */;
	//n = 926585.15468L;


	//dprintf(1, "%d\n", ft_printf("% --- -++55.5% %i\t", n));
	//dprintf(1, "%d\n", dprintf(1, "% --- -++55.5% %i\t",n ));

	dprintf(1, "\n\n-----------------------------------------------\n\n");
	dprintf(1, "NORMAL\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %i\t", n));

	dprintf(1, " %d\n", ft_printf("  %1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %30.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %30.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+20.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+20.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %-i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-20.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-20.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %01i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %01i\t", n));

	dprintf(1, " %d\n", ft_printf("  %010i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010i\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %020.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %020.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#01i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#01i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#020.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#020.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %   i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   i\t", n));

	dprintf(1, " %d\n", ft_printf("  %   1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %   20.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   20.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+01i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+01i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+020.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+020.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#01i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#01i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#020.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#020.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % 0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0i\t", n));

	dprintf(1, " %d\n", ft_printf("  % 01i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 01i\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 010i\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 010.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  % 10.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  % 10.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  % 20.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 20.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+#0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#01i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#01i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#020.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#020.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % #0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0i\t", n));

	dprintf(1, " %d\n", ft_printf("  % #01i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #01i\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010i\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  % #020.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #020.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS + PLUS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %-+i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+20.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+20.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + MOINS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % -i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -i\t", n));

	dprintf(1, " %d\n", ft_printf("  % -1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -1i\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10i\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  % -20.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -20.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#+i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+20.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+20.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %# i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# i\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 20.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 20.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#-i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-20.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-20.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + MOINS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#- i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .10i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.0i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.0i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.1i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.1i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.15i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.15i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.20i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.20i\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 20.10i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 20.10i\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

}
