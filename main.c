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
	//int n = 21;
	//int64_t n = 1485723452154785;
	//long n = 1584756545680234;
	//double n;
	//long double n;
	double n = -15.47297;
	//n = 926585.15468L;


	//mkedprintf(1, " %d\n", ft_printf("%G\n"));
	//dprintf(1, " %d\n\n", dprintf(1, "  %#- 20.10f\t", n));

	dprintf(1, "\n\n-----------------------------------------------\n\n");
	dprintf(1, "NORMAL\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %f\t", n));

	dprintf(1, " %d\n", ft_printf("  %1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %30.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %30.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+20.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+20.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %-f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-20.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-20.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %01f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %01f\t", n));

	dprintf(1, " %d\n", ft_printf("  %010f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010f\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %020.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %020.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#01f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#01f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#020.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#020.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %   f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   f\t", n));

	dprintf(1, " %d\n", ft_printf("  %   1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %   20.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   20.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+01f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+01f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+020.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+020.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#01f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#01f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#020.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#020.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % 0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0f\t", n));

	dprintf(1, " %d\n", ft_printf("  % 01f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 01f\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 010f\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 010.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  % 10.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  % 10.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  % 20.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 20.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+#0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#01f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#01f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#020.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#020.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % #0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0f\t", n));

	dprintf(1, " %d\n", ft_printf("  % #01f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #01f\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010f\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  % #020.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #020.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS + PLUS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %-+f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+20.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+20.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + MOINS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % -f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -f\t", n));

	dprintf(1, " %d\n", ft_printf("  % -1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -1f\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10f\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  % -20.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -20.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#+f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+20.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+20.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %# f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# f\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 20.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 20.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#-f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-20.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-20.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + MOINS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#- f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.0f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.0f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.1f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.1f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.20f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.20f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.10f\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 20.10f\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 20.10f\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

}
