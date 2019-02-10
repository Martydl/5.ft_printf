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
	//int n = 1458628;
	//long n = 1485723452154785;
	//long long n = 1584756545680234;
	//double n;
	//long double n;
	float n = 123.123;

	ft_printf("%.21f\n", n);
	printf("%.21f\n", n);

	/*dprintf(1, "\n\n-----------------------------------------------\n\n");
	dprintf(1, "NORMAL\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %d\t", n));

	dprintf(1, " %d\n", ft_printf("  %1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %30.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %30.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");
	
	dprintf(1, "PLUS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+20.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+20.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %-d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %-.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-20.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-20.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %01d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %01d\t", n));

	dprintf(1, " %d\n", ft_printf("  %010d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010d\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %0.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %020.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %020.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#01d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#01d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %#0.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#020.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#020.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %   d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   d\t", n));

	dprintf(1, " %d\n", ft_printf("  %   1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %   .1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %   20.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   20.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+01d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+01d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %+00.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+020.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+020.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#01d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#01d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %#0.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#020.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#020.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % 0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0d\t", n));

	dprintf(1, " %d\n", ft_printf("  % 01d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 01d\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 010d\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  % 0.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 010.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  % 10.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  % 10.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  % 20.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 20.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+#0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#01d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#01d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %+#0.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#020.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#020.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % #0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0d\t", n));

	dprintf(1, " %d\n", ft_printf("  % #01d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #01d\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010d\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  % #0.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  % #020.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #020.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS + PLUS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %-+d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %-+.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+20.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+20.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + MOINS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % -d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -d\t", n));

	dprintf(1, " %d\n", ft_printf("  % -1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -1d\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10d\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  % -.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  % -20.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -20.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#+d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %#+.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+20.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+20.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %# d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# d\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %# .1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 20.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 20.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#-d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %#-.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-20.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-20.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + MOINS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#- d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .0d\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %#- .1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.0d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.1d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.1d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.20d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.20d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.10d\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 20.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 20.10d\t", n));
	dprintf(1, "-----------------------------------------------\n\n");
*/
}
