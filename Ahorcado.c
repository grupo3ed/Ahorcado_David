#include<stdio.h>
#include<string.h>

int main() {
    char repetidas[100],temporal[100];
    int oportunidades=11;
    int temporal2=0,win=0;
    int repetido=0;
    char palabra[70];

        char pal;

    printf("Introduzca una palabra: ");
    gets(palabra);
    system("cls");



    int longitud = 0;
    int inicial = 0;
    int ini = 0;
    repetidas[0] = ' ';
    repetidas[1] = '\0';

    do {
        temporal2=0;

        if(inicial == 0) {
         for(int i=0;i<strlen(palabra);i++) {
          if(palabra[i] == ' ') {
            temporal[i] = ' ';
             longitud++;
          }
      else {
            temporal[i] = '?';
            longitud++;
          }
     }
        }

        inicial = 1;

        temporal[longitud] = '\0';

        for(int i=0;i<strlen(repetidas);i++) {
           if(repetidas[i] == pal) {
            repetido = 1;
            break;
          }
      else {
          repetido = 0;
            }
        }

        if(repetido == 0) {
         for(int i=0;i<strlen(palabra);i++) {
                    if(palabra[i] == pal) {
             temporal[i] = pal;
              temporal2=1;
            }
                }
        }

        if(repetido == 0) {
              if(temporal2 == 0) {
           oportunidades = oportunidades - 1;
         }}
        else {
         printf("Ya se ha introducido este caracter " );
        }

        printf("\n");
        for(int i=0;i<strlen(temporal);i++) {
         printf(" %c ",temporal[i]);
        }

        printf("\n");
        if(strcmp(palabra,temporal) == 0) {
          win = 1;
            break;
        }
        printf("\n");
        printf("Oportunidades Restantes: %d",oportunidades);
        printf("\n");

        repetidas[ini] = pal;
        ini++;
        if (oportunidades==0)
        {
           break;
        }

        printf("Introduzca una letra:");
        scanf("\n%c",&pal);
            system("cls");


    }while(oportunidades != 0);


    if(win) {
        printf("\n");
        printf("-----Ganaste!!!----");

    }
    else {
        printf("\n");
        printf("Has perdido.");
    }

    printf("\n");
  
    return 0;

}
