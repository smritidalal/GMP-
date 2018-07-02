#include<stdio.h>
#include<gmp.h>
int main()
{
	mpz_t a,b,c;
	mpz_init(a);
 	mpz_init(b);
 	mpz_init(c);
 	
 	gmp_printf("Enter first number:");gmp_scanf("%Zd", &a);
	gmp_printf("Enter second number:");gmp_scanf("%Zd", &b);

	mpz_gcd(c,a,b);
	
	gmp_printf("GCD : %Zd\n",c); 
	
	if(mpz_cmp_ui(c,1)==0) printf("ok\n");
	else printf(" not ok\n");
	   
    mpz_clear(a);
	mpz_clear(b);
	mpz_clear(c);
	
	return 0;
}
	
