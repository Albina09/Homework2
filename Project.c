/*Изменить третий байт при помощи указателей*/
#include <locale.h>
#include <stdio.h>
void develop(char *prt);

void develop(char *prt){

    for(char i=1;i<5;i++){
        printf("%d байт a = %d\n",i, *prt);
        prt++;
    }

}

int main(){
    setlocale(LC_ALL,"Rus");

    int a = 270533154;
    printf("число а до изменений а = %d\n",a);
    char *prt;
    prt = &a;

    develop(prt);

    prt += 2;
    *prt = 8;

    printf("После изменения третьего байта\n");

    develop(prt-2);
    
    printf("число а после изменений а = %d\n",a);

    return 0;
}


