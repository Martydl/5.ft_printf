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
	long double n;
	//double n = 9585.154653;
	n = 926585.15468L;


	//dprintf(1, " %d\n", ft_printf("  %#- 20.10Lf\t", n));
	//dprintf(1, " %d\n\n", dprintf(1, "  %#- 20.10Lf\t", n));

	dprintf(1, "\n\n-----------------------------------------------\n\n");
	dprintf(1, "NORMAL\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %30.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %30.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+20.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+20.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %-Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-20.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-20.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %01Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %01Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %010Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %020.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %020.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#01Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#01Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#020.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#020.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %   Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %   1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %   20.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   20.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+01Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+01Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+020.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+020.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#01Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#01Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#020.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#020.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % 0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % 01Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 01Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 010Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 010.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % 10.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % 10.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % 20.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 20.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+#0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#01Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#01Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#020.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#020.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % #0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % #01Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #01Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % #020.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #020.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS + PLUS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %-+Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+20.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+20.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + MOINS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % -Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % -1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  % -20.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -20.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#+Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+20.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+20.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %# Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 20.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 20.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#-Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-20.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-20.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + MOINS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#- Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.0Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.0Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.1Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.1Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.20Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.20Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.10Lf\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 20.10Lf\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 20.10Lf\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

}
