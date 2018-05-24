/*----------------------------------------------------------------*/
/* Autor: Pedro Merino Lopez	  														  */
/* E-mail: pedromerino97@outlook.com*/
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: Definicion de variables enum                      */
/*----------------------------------------------------------------*/

#ifndef ENUMS_H_
#define ENUMS_H_

/* Declaracion de enumeraciones para el control de menu de opciones:                */
/* INSERTAR   = 1                                                                   */
/* LISTAR    = 2                                                                   */
/* LISTAR_ASC = 3                                                                   */
/* LISTAR_DES = 4                                                                   */
/* BUSCAR     = 5                                                                   */
/* ACTUALIZAR = 6                                                                   */
/* ELIMINAR   = 7                                                                   */
/* SALIR      = 8                                                                   */
enum OPCIONES_MENU{INSERTAR = 1,
									 LISTAR,
									 ORDENAR_ASCENDENTE,
                   ORDENAR_DESCENDENTE,
                   BUSCAR,
                   ACTUALIZAR,
                   ELIMINAR,
                   SALIR};


/* Declaracion de enumeracion para el manejo de los casos: */
/* Buscar por:     Material o por Tamaño,                 */
/* Actualizar por: Material o por Tamaño,                 */
/* Eliminar por:   Materila o por Tamaño                  */
enum OPCIONES_BUSCAR_ACTUALIZAR_ELIMINAR{_xMaterial=1,
                                         _xMarca};


#endif
