#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>

  main(void){
  
float altura, peso, imc;
printf("Entre com a sua altura e o seu peso:\n");
scanf("%f %f", &altura, &peso);
imc = (peso/altura)/altura;
printf("Seu IMC vale %.2f\n",imc);
    system("pause");
    return(0);
}


// Tipo	Formato	Observações
// char	 %c	 Um único caractere
// int	%d ou %i	Um inteiro (Base decimal)
// int	%o	Um inteiro (Base octal)
// int	%x ou %X	Um inteiro (Base hexadecimal)
// short int	%hd	Um short inteiro (Base decimal)
// long int	%ld	Um long inteiro (Base decimal)
// unsigned short int	%hu	Short inteiro positivo
// unsigned int	%u	Inteiro positivo
// unsigned long int	%lu	Long inteiro positivo
// float	%f ou %e ou %E	
// double	%f ou %e ou %E	