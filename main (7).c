

#include <stdio.h>

int main(){
    
    char s [10];
    printf("digite algo (scanf convencional):\n ");
    scanf("%s", s);
      fflush(stdin);
      
      printf("Resultado:%s\n\n",s);
      
      printf("digite algo (scanf aprimorado):\n");
      scanf("%9[^\n]s",s);
      fflush(stdin);
      
      printf("Resultado:%s\n\n",s);
      
}
