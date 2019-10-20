#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Função: calcular_somatorio()
//   Entrada: vetor de inteiros v[] e o seu tamanho n
//   Saída: devolve o somatorio de todos os elementos do vetor 
//[]-------------------------------------------------------------[]
int calcular_somatorio(int v[], int n){
   int soma = 0;

   for (int i = 0; i < n; i++){
      soma += v[i];
   } 
   return soma;
}



//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(int obtido, int esperado){
   if (obtido == esperado)
	   printf("Parabéns !!!");
   else
	   printf("Ainda não !!!");
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   int v[6] = {1,2,3,4,5,6};
   testar(calcular_somatorio(v, 6), 21);
}

void caso_de_teste02(){
   int v[10] = {2,7,6,4,5,2,8,7,2,12};
   testar(calcular_somatorio(v, 10), 55);
}

void caso_de_teste03(){
   int v[10] = {12,12,65,45,12,91,82,7,13,12};
   testar(calcular_somatorio(v, 10), 351);
}

void caso_de_teste04(){
   int v[7] = {21,21,49,21,57,21,22};
   testar(calcular_somatorio(v, 7), 212);
}

void caso_de_teste05(){
   int v[6] = {17,2,17,4,14,18};
   testar(calcular_somatorio(v, 6), 72);
}

void caso_de_teste06(){
   int v[10] = {1,1,1,1,1,5,4,9,6,0};
   testar(calcular_somatorio(v, 10), 29);
}

void caso_de_teste07(){
   int v[10] = {2,18,27,33,22,15,24,19,26,2};
   testar(calcular_somatorio(v, 10), 188);
}

void caso_de_teste08(){
   int v[10] = {32,28,47,13,26,12,4,29,16,28};
   testar(calcular_somatorio(v, 10), 235);
}

void caso_de_teste09(){
   int v[10] = {32,32,32,32,32,32,32,32,32,32};
   testar(calcular_somatorio(v, 10), 320);
}

void caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,26,39,46,32};
   testar(calcular_somatorio(v, 10), 350);
}



//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
int main(){
   caso_de_teste01(); 
   caso_de_teste02(); 
   caso_de_teste03(); 
   caso_de_teste04(); 
   caso_de_teste05(); 
   caso_de_teste06(); 
   caso_de_teste07(); 
   caso_de_teste08(); 
   caso_de_teste09(); 
   caso_de_teste10(); 
   return 0;
}