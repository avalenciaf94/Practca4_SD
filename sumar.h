/*
 * No editar este archivo
 * fue generado usando rpcgen.
 */

#ifndef _SUMAR_H_RPCGEN
#define _SUMAR_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct dupla_int {
	int a;
	int b;
};
typedef struct dupla_int dupla_int;

#define SUMA_PROG 0x23451111
#define SUMA_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define SUMA 1
extern  int * suma_1(dupla_int *, CLIENT *); /* interface STUB del cliente */
extern  int * suma_1_svc(dupla_int *, struct svc_req *); /* procedmiento remote del servidor */
extern int suma_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SUMA 1
extern  int * suma_1();
extern  int * suma_1_svc();
extern int suma_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_dupla_int (XDR *, dupla_int*); /* boolean para verificar consistencia de la estructura */

#else /* K&R C */
extern bool_t xdr_dupla_int ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SUMAR_H_RPCGEN */
