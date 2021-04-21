/*
 * Este es un ejemplo del codigo generado por rpcgen.
 * hay solo templates que puedes usarlos
 * como una guia para desarrollar tus propias funciones.
 */

/*Aqui implementaremos el procedimiento remoto*/

#include "sumar.h"

int *
suma_1_svc(dupla_int *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("El procedimiento ha sido invocado remotamente\n");
	printf("Parametros: %d,%d\n", argp->a, argp->b);
	result= argp->a + argp->b;
	printf("Es igual a %d\n", result);

	return &result;
}
