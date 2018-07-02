#include<stdio.h>
#include<gmp.h>
int main()
{
 	mpz_t a,b,product;
	/*Initilaize the variables*/
 	mpz_init(a);
 	mpz_init(b);
 	mpz_init(product);

	gmp_printf("Enter first number:");gmp_scanf("%Zd", &a);
	gmp_printf("Enter second number:");gmp_scanf("%Zd", &b);
 
	mpz_mul(product,a,b);
 	gmp_printf("Product is:%Zd\n", product);
 	
	/*Clear the values*/
	mpz_clear(a);
	mpz_clear(b);
	mpz_clear(product);
	
	return 0;
}
