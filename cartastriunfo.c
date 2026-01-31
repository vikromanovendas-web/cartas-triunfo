#include <stdio.h>

int main(){
   // declaração de variaveis
    int populacao, numeros_de_Pontos_Turisticos;
    float area_em_km2, PIB;
    char cidade [50],Estado[50], codigo_da_carta[10];
    float PIB_percapita;
    float densidade_populacional;
   
    printf("Digite Estado \n");
    scanf(" %s", &Estado);
    
    printf("Digite codigo da carta \n");
    scanf(" %s", &codigo_da_carta);
   
    printf("Digite sua cidade \n");
    scanf(" %s", &cidade);
   
    printf("Digite sua populacao \n");
    scanf(" %d", &populacao);
   
    printf("Digite sua area km2: \n");
    scanf(" %f", &area_em_km2);
   
    printf ("Digite numeros de pontos turisticos \n");
    scanf (" %d", &numeros_de_Pontos_Turisticos);
   
    printf("Digite o PIB \n");
    scanf(" %f", &PIB);

   // Cálculos
   densidade_populacional = populacao / area_em_km2;
   PIB_percapita = PIB / populacao;
       
    printf("\n--- CARTA CADASTRADA---\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo da carta: %s\n",codigo_da_carta);
    printf("cidade: %s\n",cidade);
    printf("Populacao: %d\n", populacao);
    printf("area em km2: %.2f\n", area_em_km2);
    printf("numeros de Ponto Turisticos: %d\n", numeros_de_Pontos_Turisticos);
    printf("PIB: %.2f\n" , PIB);
    printf("Densidade populacional: %.2f\n ",densidade_populacional);
    printf("PIB Percapita: %.2f\n",PIB_percapita);


    // declaração de variaveis carta2
    int populacao2, numeros_de_Pontos_Turisticos2;
    float area_em_km22, PIB2;
    char cidade2 [50],Estado2[50], codigo_da_carta2[10];
    float PIB_percapita2;
    float densidade_populacional2;
   
    printf("Digite Estado2 \n");
    scanf(" %s", &Estado2);
    
    printf("Digite codigo da carta2 \n");
    scanf(" %s", &codigo_da_carta2);
   
    printf("Digite sua cidade2 \n");
    scanf(" %s", &cidade2);
   
    printf("Digite sua populacao2 \n");
    scanf(" %d", &populacao2);
   
    printf("Digite sua area km22: \n");
    scanf(" %f", &area_em_km22);
   
    printf ("Digite numeros de pontos turisticos2 \n");
    scanf (" %d", &numeros_de_Pontos_Turisticos2);
   
    printf("Digite o PIB2 \n");
    scanf(" %f", &PIB2);

   // Cálculos
   densidade_populacional2 = populacao2 / area_em_km22;
   PIB_percapita2 = PIB2 / populacao2;
       
    printf("\n--- CARTA CADASTRADA---\n");
    printf("Estado2: %s\n", Estado2);
    printf("Codigo da carta2: %s\n",codigo_da_carta2);
    printf("cidade2: %s\n",cidade2);
    printf("Populacao2: %d\n", populacao2);
    printf("area em km22: %.2f\n", area_em_km22);
    printf("numeros de Ponto Turisticos2: %d\n", numeros_de_Pontos_Turisticos);
    printf("PIB2: %.2f\n" , PIB2);
    printf("Densidade populacional2: %.2f\n ",densidade_populacional2);
    printf("PIB Percapita2: %.2f\n",PIB_percapita2);

printf("\n----carta vencedora-----\n");
// comparação das cartas vitoriosas

if(populacao > populacao2){

      printf("carta1 venceu em População!\n");}
      
      else{
      
        printf("carta2 venceu em População\n");}

if(numeros_de_Pontos_Turisticos> numeros_de_Pontos_Turisticos2 ){
    printf("carta1 venceu em Numeros em Pontos Turisticos!\n");}

else{
    printf("carta2 venceu em Numero em Pontos Turisticos!\n");}
    

if(PIB > PIB2){
      printf("carta1 venceu em PIB!\n");}

else {
      printf("carta2 venceu em PIB!\n");}
 
      if(area_em_km2 > area_em_km22){
    printf("carta1 venceu em area em km2!\n");}

else{
    printf("carta2 venceu em area em km2!\n");}
    

    if(densidade_populacional > densidade_populacional2){
    printf("carta1 venceu em densidade populacional!\n");}

else{
    printf("carta2 venceu em densidade populacional!\n");}
    

    if(PIB_percapita > PIB_percapita2){
    printf("carta1 venceu em PIB percapita!\n");}

else{
    printf("carta2 venceu em PIB percapita!\n");}
    

return 0;


}

