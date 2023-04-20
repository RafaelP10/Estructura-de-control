#include <stdio.h>

int main(int argc, char *argv[])
{

    char nombre[50];
    int cedula;

    float precioa = 150, preciob = 55, precioc = 180, preciod = 70, precioe = 120;
    float numa = 0, numb = 0, numc = 0, numd = 0, nume = 0;
    float totala = 0, totalb = 0, totalc = 0, totald = 0, totale = 0;
    float subtotal = 0, total = 0;

    int opcion = 0;
    char opcionv;
    char continuar = ' ';
    do{
        printf("----- Sistema de facturación adaptoide: -----\n");
        printf("1. Facturar producto\n");
        printf("2. Imprimir factura\n");
        printf("3. Salir\n");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Ingrese el Nombre del cliente: \n");
            scanf("%s", &nombre);
            printf("Ingrese la cédula del cliente: \n");
            scanf("%d", &cedula);
            printf("****Escoja un producto que desee facturar:****\n");
            printf("a) Llantas (Precio: $150)\n");
            printf("b) Kit Pastillas de frenos (Precio: $55)\n");
            printf("c) Kit de embrague (Precio: $180)\n");
            printf("d) Faro (Precio: $70)\n");
            printf("e) Radiador (Precio: $120)\n");
            scanf("%s", &opcionv);

            switch (opcionv)
            {
                case 'a':
                    printf("Ingrese el número de llantas: \n");
                    scanf("%f", &numa);
                    break;
                    
                case 'b':
                    printf("Ingrese el número de pastillas de frenos: \n");
                    scanf("%f", &numb);
                    break;
                case 'c':
                    printf("Ingrese el número de embrague: \n");
                    scanf("%f", &numc);
                    break;
                case 'd':
                    printf("Ingrese el número de faros: \n");
                    scanf("%f", &numd);
                    break;
                case 'e':
                    printf("Ingrese el número de radiadores: \n");
                    scanf("%f", &nume);
                    break;

                default:
                    printf("la opción elegida no existe ");
                    break;
            }

            totala=precioa*numa;
            totalb=preciob*numb;
            totalc=precioc*numc;
            totald=preciod*numd;
            totale=precioe*nume;
            
            
                printf("\n¿Desea agregar otro repuesto? (s/n): \n");
                fflush(stdin);
                scanf("%c", &continuar);
                while (continuar == 's') { 
                    printf("****Escoja un producto que desee facturar:****\n");
                    printf("a) Llantas (Precio: $150)\n");
                    printf("b) Kit Pastillas de frenos (Precio: $55)\n");
                    printf("c) Kit de embrague (Precio: $180)\n");
                    printf("d) Faro (Precio: $70)\n");
                    printf("e) Radiador (Precio: $120)\n");
                    scanf("%s", &opcionv);

                    switch (opcionv)
                    {
                        case 'a':
                            printf("Ingrese el número de llantas: \n");
                            scanf("%f", &numa);
                            break;
                            
                        case 'b':
                            printf("Ingrese el número de pastillas de frenos: \n");
                            scanf("%f", &numb);
                            break;
                        case 'c':
                            printf("Ingrese el número de embrague: \n");
                            scanf("%f", &numc);
                            break;
                        case 'd':
                            printf("Ingrese el número de faros: \n");
                            scanf("%f", &numd);
                            break;
                        case 'e':
                            printf("Ingrese el número de radiadores: \n");
                            scanf("%f", &nume);
                            break;

                        default:
                            printf("la opción elegida no existe ");
                            break;
                        }
                        totala=precioa*numa;
                        totalb=preciob*numb;
                        totalc=precioc*numc;
                        totald=preciod*numd;
                        totale=precioe*nume;
                        printf("\n¿Desea agregar otro repuesto? (s/n): \n");
                        scanf(" %c", &continuar);
                }

        } else if (opcion == 2) {

        printf("****FACTURA****\n");
        printf("Nombre: %s\n", nombre);
        printf("Cédula: %d\n", cedula);
        printf("Producto      Cantidad      Precio Unitario    Precio total\n");

        if (numa!=0)
        {
            printf("Llantas        %.0f          %.2f        %.2f\n",numa,precioa,totala);
        }
        if (numb!=0)
        {
            printf("Kit frenos        %.0f          %.2f        %.2f\n",numb,preciob,totalb);
        }
        if (numc!=0)
        {
            printf("Kit de embrague        %.0f          %.2f        %.2f\n",numc,precioc,totalc);
        }
        if (numd!=0)
        {
            printf("Faros        %.0f          %.2f        %.2f\n",numd,preciod,totald);
        }
        if (nume!=0)
        {
            printf("Radiador        %.0f          %.2f        %.2f\n",nume,precioe,totale);
        }
        subtotal=totala+totalb+totalc+totald+totale;

            if (subtotal>500 && subtotal<=1000)
            {
            printf("Se aplica un descuento del 4 porciento\n");
            subtotal=subtotal*0.96;
            }
            else if (subtotal>1000 && subtotal<=5000)
            {
            printf("Se aplica un descuento del 7 porciento\n");
            subtotal=subtotal*0.93;
            }
            else if (subtotal>5000)
            {
            printf("Se aplica un descuento del 9 porciento\n");
            total=subtotal*0.91;
            }
            else
            {
            printf("No se aplica descuento dado que el monto no alcanzó el mínimo necesario\n");
            }

            total = subtotal * 1.12;
        printf("El subtotal es: %.2f\n",subtotal);
        printf("El total es: %.2f\n",total);
        break;
        }
    } while (continuar == 'n');

    return 0;

}
