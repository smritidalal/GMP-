#include<stdio.h>
#include<gmp.h>

int main()
{
	 mpz_t a,b,sum;
	 mpz_init(a);
 	 mpz_init(b);
	 mpz_init(sum);

	 gmp_printf("\n Enter 1st number:");
 	 gmp_scanf("%Zd", &a);
 	 gmp_printf("\n Enter 2nd number:");
 	 gmp_scanf("%Zd", &b);
 
         mpz_add(sum,a,b);
         gmp_printf("Sum is: %Zd", sum);

	 mpz_clear(a);
	 mpz_clear(b);
 	 mpz_clear(sum);

         return 0;

}


