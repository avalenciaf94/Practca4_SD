/*
 * No editar este archivo
 * fue generado por rpcgen
 */

/* Esta en la funcion stub del cliente que implementa la funcion sumar_1,(realiza
el (marshhalling) el parametro llama al procedimiento remoto y devuelve el resultado*/
#include <memory.h> /* for memset */
#include "sumar.h"


static struct timeval TIMEOUT = { 25, 0 };

int *
suma_1(dupla_int *argp, CLIENT *clnt)
{
	static int clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	/*Todo lo explicado mediante el procedimiento clnt_call */
	if (clnt_call (clnt, SUMA,
		(xdrproc_t) xdr_dupla_int, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
