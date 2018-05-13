# Taller 2

**Nombre:** Jonatan Ordoñez  
**Código:** A00054000

## Descripción
En este taller se crearon tres llamadas al sistema, se ejecutaron con un archivo llamado makefile y se verificaron con el comando strace.

## Llamada al sistema #1
La primera llamada al sistema es nanosleep(const struct timespec *req, struct timespec *rem), que se encarga de pausar un proceso indicandole por parametro el tiempo en nanosegundos que estará dormido.
	Info: http://man7.org/linux/man-pages/man2/nanosleep.2.html

## Llamada al sistema #2
La segunda llamada al sistema es kill(pid_t pid, int sig), que permite enviar una señal a un proceso; en este caso no se especifica el tipo de señal y por defecto se envia la señal de terminación.
	Info: http://man7.org/linux/man-pages/man2/kill.2.html

## Llamada al sistema #3
La tercera llamada al sistema es signal(int signum, sighandler_t handler), la cual permite especificar la acción que debe realizarse cuando un proceso recibe una señal. En este caso, al pararse el proceso que se esta ejecutando, se recibe la señal de terminación y se imprime en consola indicando que la señal fue recibida.
	Info: http://man7.org/linux/man-pages/man2/signal.2.html
