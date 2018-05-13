### Taller 2
**Universidad ICESI**  
**Curso:** Sistemas Operativos  
**Estudiante:** Estiven Landazury.  
**Codigo:**A00056992 

### Descripción
* Crear programas que hagan uso de llamadas al sistema

 ### Llamadas al sistema
**syscall_01.c**
* El encabezado limits.h determina varias propiedades de los diversos tipos de variables. 
 Las macros definidas en este encabezado limitan los valores de varios tipos de variables 
  como char, int y long.
  
  
**CHAR_BIT	8**:	
*Define la cantidad de bits en un byte.

**SCHAR_MIN:**	-128	Define el valor mínimo para un char firmado.

**SCHAR_MAX:**	+127	Define el valor máximo para un char firmado.

**UCHAR_MAX:**	255	Define el valor máximo para un char sin signo.

**CHAR_MIN:**	-128	Define el valor mínimo para el tipo char y su valor será igual a SCHAR_MIN si char representa valores negativos, de lo contrario, cero.

**CHAR_MAX:**	+127	Define el valor de tipo char y su valor será igual a SCHAR_MAX si char representa valores negativos, de lo contrario UCHAR_MAX.

**MB_LEN_MAX:**	dieciséis	Define la cantidad máxima de bytes en un carácter de múltiples bytes.

**SHRT_MIN:**	-32768	Define el valor mínimo para un int corto.

**SHRT_MAX:**	+32767	Define el valor máximo para un int corto.

**USHRT_MAX:**	65535	Define el valor máximo para un int corto sin signo.

**INT_MIN:**	-2147483648	Define el valor mínimo para un int.

**INT_MAX:**	+2147483647	Define el valor máximo para un int.

**UINT_MAX:**	4294967295	Define el valor máximo para un int sin firmar.

**LONG_MIN:**	-9223372036854775808	Define el valor mínimo para un int largo.

**LONG_MAX:**	+9223372036854775807	Define el valor máximo para un int largo.

**ULONG_MAX:**	18446744073709551615	Define el valor máximo para un int largo sin signo.
  
  
  **syscal_02.c**
  * Muestra el uso de algunas de las constantes definidas en el archivo float.h.
  
  **syscal_03.c** 
  
  *Muestra la fecha y la hora actual por pantalla

