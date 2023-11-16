# include <stdio.h>
# include <ctype.h>
/* Decodifica.
El programa decodifica una cadena de caracteres compuesta por n�meros y
letras. */

void interpreta(char *); /* Prototipo de funci�n. */

void main(void)
{
char cadena[50];
printf("\nIngrese la cadena de caracteres: ");
gets(cadena);
interpreta(cadena);
}
void interpreta(char *cadena)
/* Esta funci�n se utiliza para decodificar la cadena de caracteres. */
{
int i = 0, j, k;
while (cadena[i] != '\0')
{
if (isalpha (cadena[i])) /* Se utiliza isalpha para observar si el caracteres una letra. */
{
k = cadena[i - 1] - 48;
/* En la variable entera k se almacena el ascii del n�mero �convertido
en caracter� que nos interesa, menos 48 que corresponde al ascii
del d�gito 0. */
for (j = 0; j < k; j++)
putchar(cadena[i]);
}
i++;
}
}
