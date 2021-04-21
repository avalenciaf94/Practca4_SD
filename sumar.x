/** Este es un IDL y un IDL se describe la interfaz con la que se comunicaran cliente servidor **/

/** Agrupa un conjunto de funciones remotos(servicios) en diferentes versiones **/

/** Este IDL define una estructura que contiene los numeros enteros que se sumaran**/


struct dupla_int {
int a;
int b;

};
program SUMA_PROG{
version SUMA_VERS {
int SUMA(dupla_int) = 1; /** servicio suma con identificador de 1, toma como argumentos de entrada ala estructura que se definio**/
} = 1; /** version **/
} = 0x23451111; /** identificador **/
