#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conv.h"

int main()
{
    int op, num, res ;
    char *binario, *hex, *octal;
    do
    {
        menu();
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Ingresa un numero binario:  \n");
            scanf("%s", &binario);
            num= conv_binario_decimal(binario);
            printf("Su equivalente decimal es: %u\n", num);
            break;
        case 2:
            printf("Ingresa un numero hexadecimal :  \n");
            scanf("%s", &hex);
            num = conv_hex_decimal(hex);
            printf("Su equivalente decimal es: %i\n", num); 
            break;
        case 3:
            printf("Ingresa un numero octal:  \n");
            scanf("%s", &octal);
            num = conv_octal_decimal(octal);
            printf("Su equivalente decimal es: %d\n", num);
            break;
        case 4:
            printf("Ingresa un numero decimal:  \n");
            scanf("%d", &num);
            binario = conv_decimal_binario(num);
            printf("Su equivalente binario es: %s\n", binario);
            break;
        case 5:
            printf("Ingresa un numero hexadecimal:  \n");
            scanf("%s", &hex);
            binario = conv_hex_binario(hex);
            printf("Su equivalente binario es: %s\n", binario);
            break;
        case 6:
            printf("Ingresa un numero octal:  \n");
            scanf("%s", &octal);
            binario = conv_octal_binario(octal);
            printf("Su equivalente binario es: %s\n", binario);
            break;
        case 7:
            printf("Ingresa un numero decimal:  \n");
            scanf("%d", &num);
            hex = conv_decimal_hex(num);
            printf("Su equivalente hexadecimal es: %s\n", hex);
            break;
        case 8:
            printf("Ingresa un numero binario:  \n");
            scanf("%s", &binario);
            hex = conv_binario_hex(binario);
            printf("Su equivalente hexadecimal es: %s\n", hex);
            break;
        case 9:
            printf("Ingresa un numero octal:  \n");
            scanf("%s", &octal);
            hex = conv_octal_hex(octal);
            printf("Su equivalente hexadecimal es: %s\n", hex);
            break;
        case 10:
            printf("Ingresa un numero decimal:  \n");
            scanf("%d", &num);
            octal = conv_decimal_octal(num);
            printf("Su equivalente octal es: %s\n", octal);
            break;
        case 11:
            printf("Ingresa un numero binario :  \n");
            scanf("%s", &binario);
            octal = conv_binario_octal(binario);
            printf("Su equivalente octal es: %s\n", octal);
            break;
        case 12:
            printf("Ingresa un número hexadecimal:  \n");
            scanf("%s", &hex);
            octal = conv_hex_octal(hex);
            printf("Su equivalente octal es: %s\n", octal);
            break;
        }
        free(binario);
        binario = NULL;
        free(hex);
        hex = NULL;
        free(octal);
        octal = NULL;
    } while (op >=1 && op <= 12);
}

