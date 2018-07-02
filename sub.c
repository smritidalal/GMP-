#include<stdio.h>
#include<gmp.h>
int main()
{
 	mpz_t a,b,sub;
	/*Initilaize the variables*/
 	mpz_init(a);
 	mpz_init(b);
 	mpz_init(sub);

	gmp_printf("Enter first number:");gmp_scanf("%Zd", &a);
	gmp_printf("Enter second number:");gmp_scanf("%Zd", &b);
 
	mpz_sub(sub,a,b);
 	gmp_printf("Difference is:%Zd\n", sub);
 	
	/*Clear the values*/
	mpz_clear(a);
	mpz_clear(b);
	mpz_clear(sub);
	
	return 0;
}
