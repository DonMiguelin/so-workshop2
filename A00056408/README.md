# so-workshop2
## Taller 2
Universidad ICESI  
**Curso:** Sistemas Operativos  
**Estudiante:** Yesid Leonardo Lòpez.  
**Tema:** Llamadas al sistema  

## Descripcion:  
Las llamadas del sistema que se hicieron fueron las siguientes: open, rename y unlink  
### **Función open**  
La función open abre un archivo ya existente, retornando un descriptor de archivo. La función tiene este prototipo:  
int open ( char nombre, int modo, int permisos )  
-El parámetro nombre es la cadena conteniendo el nombre del archivo que se quiere abrir.  
-El parámetro modo establece la forma en que se va a trabajar con el archivo  
-El parámetro acceso sólo se ha de emplear cuando se incluya la opción O_CREAT, y es un entero que define los permisos de acceso al archivo creado. Consulten en la bibliografía cómo se codifican los permisos.  
  
Retorna -1 si existe algún error, en caso contrario retorna un natural.
  
### **Función rename**  
La función rename se encarga de renombrar un archivo.  
int rename(const char oldpath, const char newpath);  
-El parámetro oldpath corresponde a la ubicación del archivo viejo.  
-El parámetro newpath corresponde a la ubicación nueva del archivo.  
  
Retorna -1 en caso de error  

### **Función unlink**

La función unlink borra el archivo de ruta nombre (absoluta o relativa). Devuelve -1 en caso de error.

int unlink ( char nombre );
-El parámetro nombre corresponde al nombre del archivo que se desea eliminar  
  
Retorna -1 en caso de error.  

