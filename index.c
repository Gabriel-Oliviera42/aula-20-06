#include <stdio.h>

int main(void) {

  system ("clear");
  
  int Logica[15], Linguagem[10], I, J, Nun_Logica, Nun_Linguagem;

  //----------------------------------------------------------//
  
  printf("lendo as matriculas de logica: ");
  scanf("%d",&Nun_Logica);

  for (I = 0; I < Nun_Logica; I++) {
    printf("entre com o %dª numero da metricula: ", I+1);
    scanf("%d",&Logica[I]);
  }
  //----------------------------------------------------------//
  printf("\nlendo as matriculas de linguagem: ");
  scanf("%d",&Nun_Linguagem);

  for (J = 0; J < Nun_Linguagem; J++) {
    printf("entre com o %dª numero da metricula: ", J+1);
    scanf("%d",&Linguagem[J]);
  }

  //----------------------------------------------------------//

  for (I = 0; I < Nun_Logica; I++) {
    for (J = 0; J < Nun_Linguagem; J++) {
      if (Logica[I] == Linguagem[J]) {
        printf("%d ", Linguagem[J]);
        break;
      }
      
    }
    
  }
  printf("\n");
  return 0; 
}