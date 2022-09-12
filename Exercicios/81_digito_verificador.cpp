#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num_conta, c , d, u, num_inv,soma, c_inv, d_inv, u_inv, digito;
	
	printf("Digite o numero da conta: ");
	scanf("%d", &num_conta);
	
	c = num_conta / 100 ;
	d = (num_conta  /10)%10;
	u = (num_conta)%10;
	
	num_inv = u * 100 + d * 10 + c;
	soma = num_conta + num_inv;
	
	c_inv = soma/100 *1;
	d_inv = (soma/10)%10 *2;
	u_inv = soma%10 *3;
	
	digito = c_inv + d_inv + u_inv;

	printf("DIGITO VERIFICADOR : %d \n", digito);
	
    /*		
	printf("c = %d \n", c);
	printf("d = %d \n", d);
	printf("u = %d \n", u);
	printf("int = %d \n", num_inv);
	*/
	
	
	
	return EXIT_SUCCESS;	
}
