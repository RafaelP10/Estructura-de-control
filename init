#include <stdio.h>

int main(int argc, char *argv[])
{

    char nombre[90];
    char cédula[10];

    float precioa = 150, preciob = 55, precioc = 180, preciod = 70, precioe = 120;
    float numa = 0, numb = 0, numc = 0, numd = 0, nume = 0;
    float subtotala = 0, subtotalb = 0, subtotalc = 0, subtotald = 0, subtotale = 0;
    float subtotal = 0, total = 0;

    char opcion = 'f';
    printf("****Escoja un producto que desee facturar:****\n");
    printf("a) Lantas (Precio: $150)\n");
    printf("b) Kit Pastillas de frenos (Precio: $55)\n");
    printf("c) Kit de embrague (Precio: $180)\n");
    printf("d) Faro (Precio: $70)\n");
    printf("e) Radiador (Precio: $120)\n");
    scanf("%c", &opcion);

    switch (opcion)
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
        break;
    }

    subtotala=precioa*numa;
    subtotalb=preciob*numb;
    subtotalc=precioc*numc;
    subtotald=preciod*numd;
    subtotale=precioe*nume;
    
    subtotal=subtotala+subtotalb+subtotalc+subtotald+subtotale;

    if (subtotal>100 && subtotal<=500)
    {
    total=subtotal-subtotal*0.05;
    }
    else if (subtotal>500 && subtotal<=1000)
    {
    total=subtotal-subtotal*0.07;
    }
    else if (subtotal>1000)
    {
    total=subtotal-subtotal*0.1;
    }
    
    printf("Ingrese el Nombre del cliente: \n");
    scanf("%s", &nombre);
    printf("Ingresela cédula del cliente: \n");
    scanf("%s", &cédula);

    printf("****Datos del Cliente****\n");
    printf("Nombre: %s\n", nombre);
    printf("Cédula: %s\n", cédula);
    printf("****Factura****\n");
    printf("Producto      Cantidad      Precio Unitario    Precio total\n");

    if (numa!=0)
    {
        printf("Llantas        %.0f          %.2f        %.2f\n",numa,precioa,subtotala);
    }
    if (numb!=0)
    {
        printf("Kit frenos        %.0f          %.2f        %.2f\n",numb,preciob,subtotalb);
    }
    if (numc!=0)
    {
        printf("Kit de embrague        %.0f          %.2f        %.2f\n",numc,precioc,subtotalc);
    }
    if (numd!=0)
    {
        printf("Faros        %.0f          %.2f        %.2f\n",numd,preciod,subtotald);
    }
    if (nume!=0)
    {
        printf("Radiador        %.0f          %.2f        %.2f\n",nume,precioe,subtotale);
    }

    printf("El subtotal es: %.2f\n",subtotal);
    printf("El total es: %.2f\n",total);


    return 0;
    
}
