#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char	*n;
	//short int n;
	//int n;
	//long n;
	//long long n;
	//double n;
	//long double n;


	n = "martin";

	dprintf(1, "\n\n-----------------------------------------------\n\n");
	dprintf(1, "NORMAL\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %s\t", n));

	dprintf(1, " %d\n", ft_printf("  %1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %10.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %30.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %30.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");
/*	
	dprintf(1, "PLUS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %+.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+10.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+10.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+20.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+20.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %-s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %-.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-10.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-10.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-20.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-20.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %01s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %01s\t", n));

	dprintf(1, " %d\n", ft_printf("  %010s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010s\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %0.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %0.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %010.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %010.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %020.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %020.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#01s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#01s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %#0.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#020.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#020.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %   s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   s\t", n));

	dprintf(1, " %d\n", ft_printf("  %   1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %   .1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %   .10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   .10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %   10.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   10.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %   20.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %   20.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+01s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+01s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %+00.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+00.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+00.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+010.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+010.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+020.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+020.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#01s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#01s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %#0.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#0.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#0.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#010.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#010.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#020.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#020.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % 0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0s\t", n));

	dprintf(1, " %d\n", ft_printf("  % 01s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 01s\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 010s\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  % 0.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  % 0.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 0.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 010.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  % 010.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  % 10.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  % 10.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 10.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  % 20.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % 20.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %+#0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#01s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#01s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %+#0.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#0.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#0.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#010.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#010.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %+#020.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+#020.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + HASH + ZERO\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % #0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0s\t", n));

	dprintf(1, " %d\n", ft_printf("  % #01s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #01s\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010s\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  % #0.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  % #0.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #0.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  % #010.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #010.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  % #020.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % #020.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS + PLUS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %-+s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %-+.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+10.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+10.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %-+20.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %-+20.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + MOINS\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  % -s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -s\t", n));

	dprintf(1, " %d\n", ft_printf("  % -1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -1s\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10s\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  % -.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  % -.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  % -10.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -10.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  % -20.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % -20.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "PLUS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#+s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %#+.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+10.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+10.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#+20.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#+20.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %# s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# s\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %# .1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %# .10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# .10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 10.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 10.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %# 20.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %# 20.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "MOINS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#-s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %#-.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-10.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-10.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#-20.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#-20.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	dprintf(1, "ESPACE + MOINS + HASH\n\n\n");

	dprintf(1, "-----------------------------------------------\n\n");
	dprintf(1, " %d\n", ft_printf("  %#- s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .0s\t", n));
	
	dprintf(1, " %d\n", ft_printf("  %#- .1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- .10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- .10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.0s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.0s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.1s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.1s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.20s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.20s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 10.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 10.10s\t", n));

	dprintf(1, " %d\n", ft_printf("  %#- 20.10s\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#- 20.10s\t", n));
	dprintf(1, "-----------------------------------------------\n\n");

	*/
}