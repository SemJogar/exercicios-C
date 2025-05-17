#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

void quadradoVetor () {
    int i, x;
    int vetor[2];
    
    for (i = 0; i < 2; i++) {
        printf("insira um numero \n");
        scanf("%i",&vetor[i]); 
        system("pause");
        system("cls");
    }
    
    for (i = 0; i < 2; i++) {
        vetor[i] = sqrt(vetor[i]);
    }
    
    for (i = 0; i < 2; i++) {
        printf("o quadrado dele é %i \n", vetor[i]);
        system("pause");
        system("cls");
    }
}

void palindromo () {
     char string[10], inverso[10];
      int i, j, cont;
      i = 0;
      cont = 0;
      j = 0;
      
      printf("escreva um palindromo: \n");
      scanf("%[^\n]", string);
      system("pause");
      system("cls");
      
      for (i =0; i < 10;i++) {
          if (string[i] == '\0') break;
          cont++;
      } 
      
      cont--;
      
      for (i = 0, j = cont; i < cont; j--,i++){
      	  if (string[i] == ' ') {
      	  	i++;
      	   }
			else if (string[j] == ' ') {
      	  	j--;
      	   }
			else {
	      	  	if (string[i] != string[j]) {
			        printf("nao e palindromo \n");
			        system("pause");
			        break;
		        	}
				else{
			        printf("e palindromo \n");
			        system("pause");
			        break;
	          	}
		    }
	  }
}

void moedaAleatorio () {
     int resultado;
    
    srand(time(NULL));
    /* gera resultados:
    0 ou 1*/
    resultado = rand()%2;
    
    if(resultado != 1) {
       printf("coroa\n");
       system("pause");
    }else{
          printf("cara\n");
          system("pause");
          }
}

void minuscula () {
     char caracter, maiusculo;
    char string[30];
    int i, tamanho, endereco[30];
    
    printf("mano coloca a string meu");
    scanf("%s", string);
    system("pause");
    
    tamanho = strlen(string);
   
    for(i=0; i<tamanho;i++){
        caracter = string[i]; 
        maiusculo = caracter - 32;
        if(caracter != maiusculo) {
           string[i] = maiusculo;
        }
    }

    printf("%s\n", string);
    system("pause");
}

void menorMaior () {
     int maior, n1, menor, contador;
    contador = 0;
    n1 = 0;
    
    printf("escreva o 6 numeros\n");
    system("pause");
    system("cls");
    
    do {
        if (n1 == 0) {
            printf("escreva o numero\n"); 
            scanf("%i",&n1);
            system("pause");
            system("cls");
            
            maior = n1;
            menor = n1;
            }
        
        if (maior < n1) {
           maior = n1;
           }
        
        if (menor > n1) {
           menor = n1;
           }
            
         printf("escreva o numero\n");        
         scanf("%i",&n1);
         system("pause");
         system("cls");
         
         
        contador = contador + 1;
        } while ( contador < 4);
        
        printf("o maior numero e %i\n", maior);
        printf("o menor numero e %i\n", menor);
        system("pause");
}

void matrizesSoma () {
     //está errado, eu acho que não pode somar 2x3 + 2x3
       int matriz[2][3];
// 2 é linha e o 3 coluna
  int i, j, x;
  
   for(i = 0; i < 2; i++) {
        for (j = 0; j<3;j++) {
            x = x + 1;
            matriz[i][j] = x;
        }
  }
  
  for(i = 0; i < 2; i++) {
        for (j = 0; j<3;j++) 
            printf("%i ", matriz[i][j]);
            getchar();
  }
   
   printf("\n");
   
   for(i = 0; i < 2; i++) {
        for (j = 0; j<3;j++) {
            x = i + 1;
            matriz[i][j] = matriz[i][j] + x;
        }
  }
  
   for(i = 0; i < 2; i++) {
        for (j = 0; j<3;j++) 
            printf("%i ", matriz[i][j]);
            getchar();
  }
}

void matrizesMultiplicacaoEscalar () {
     	int matriz[2][3];
	int i, j, x;
	
	x = 0;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			x = x + 1;
			matriz[i][j] = x;
		}
	}
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++)
			printf("%i ", matriz[i][j]);
			getchar();
	}
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			matriz[i][j] = 2 * matriz[i][j];
		}
	}
	
	printf("\n");
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++)
			printf("%i ", matriz[i][j]);
			getchar();
	}
}

void matrizesMultiplicacao () {
     int matriz[2][3], matriz2[3][2], resultado[12], final[4], matriz_final[2][2];
  int i, j, y, x, t, f;
  
  //matriz 1
  for(j = 0; j < 3; j++) {
        matriz[0][j] = j;
  }
  for(j = 0; j < 3; j++) {
        x = j + 1;
        matriz[1][j] = x;
  }
  for(i = 0; i < 2; i++) {
        for (j = 0; j<3;j++) 
            printf("%i ", matriz[i][j]);
            getchar();
  }
  
  printf("\n");
  
  y = 0;
  //matriz 2
  for(i = 0; i < 3; i++) {
	  for(j = 0; j < 2; j++) {
	  		y = y + 1;
	  		matriz2[i][j] = y;
	  }
  } 
  for(i = 0; i < 3; i++) {
        for (j = 0; j<2;j++) 
            printf("%i ", matriz2[i][j]);
            getchar();
  }
  
  y = 0;
  for(f = 0; f < 2; f++) {
	  for(t = 0; t < 2; t++) {
		  for(i = 0, j = 0; i < 3, j < 3; i++, j++) {
		            resultado[y] = matriz[f][j] * matriz2[i][t];
		            y++;
		            /*	matriz[0][j]*matriz2[i][0] 
		            	matriz[0][j]*matriz2[i][1]
		            	matriz[1][j]*matriz2[i][0]
		            	matriz[1][j]*matriz2[i][1]
		            */
		            //matriz[i][0] = coluna 1, então i tem que ir de 1 a 2 e matriz[0][j] = linha então o j tem que ir de 1 a 3 devido aos 3 elementos na linha;
		            //pela regra da matriz não se pode multiplicar uma (2x3).(2x3) ERRADO, (2X3).(3X2) CORRETO
		  }
	  }
  }
  
  printf("\n");
  for (i = 0; i < 12; i++) {
      printf("%i\n", resultado[i]);
      system("pause");
  }
  
  j = 0;
  for(j = 0; j < 12; j++) {
	  for(i = 0; i < 4; i++){
	  	final[i] = resultado[j] + resultado[j+1] + resultado[j+2];
	  	j = j + 3;
	  }
  }
  
  y = 0;
  for(j = 0; j < 2; j++){
	  for(i = 0; i < 2; i++){
	   		matriz_final[j][i] = final[y];
	   		y++;
	   		//final[0] = matriz_final[0][0]
	   		//final[1] = matriz_final[0][1]
	   		//final[2] = matriz_final[1][0]
	   		//final[3] = matriz_final[1][1]
	  }
  }
  
  for(i = 0; i < 4; i++) {
  	printf("%i\n", final[i]);
  }
  
  printf("\n");
  
  for(i = 0; i < 2; i++) {
        for (j = 0; j<2;j++) 
            printf("%i ", matriz_final[i][j]);
            getchar();
  }
}

void vetorInvertidoMultiplicacao () {
     int maior, n1, menor, contador;
	int exibicaocont, multiplicador;
	int vetor[4];
    contador = 0;
    n1 = 0;
    
	do {
		if (contador == 0) {
			printf("insira um numero\n");
			scanf("%i",&vetor[0]);
			system("pause");
			system("cls");
			
			maior = vetor[0];
			menor = vetor[0];
		}
		
		contador = contador + 1;
		
		printf("insira um numero\n");
		scanf("%i",&vetor[contador]);
		system("pause");
		system("cls");
		
		if (maior < vetor[contador]) {
			maior = vetor[contador];
		} else if (menor > vetor[contador]) {
			menor = vetor[contador];
		}
		
	}while(contador < 4);
	
	printf("insira um numero para multiplicar os outros\n ");
	scanf("%i",&multiplicador);
	
	for (exibicaocont = 4; exibicaocont > -1; exibicaocont--) {
		vetor[exibicaocont] = vetor[exibicaocont] * multiplicador;
	}
	for (exibicaocont = 4; exibicaocont > -1; exibicaocont--) {
		printf("os valores que foram digitados multiplicados por %i -> %i \n", multiplicador, vetor[exibicaocont]);
		system("pause");
	}
	
    printf("o maior numero e %i\n", maior);
    printf("o menor numero e %i\n", menor);
    system("pause");
}

void jogo21 () {
     int total, parar, pontopc, chancepc;
    int ponto, totalpc, i, j;
    int memoria[7];
    ponto = 0;
    parar = 1;
    pontopc = 0;
    totalpc = 0;
    chancepc = 9;
    i = 0;

    srand(time(NULL));
    srand(rand());
    pontopc = (rand()%13) + 1;
    if (pontopc > 10) {
    	pontopc = 10;
    }
    totalpc = totalpc + pontopc;
    memoria[0] = totalpc;
    /*
    printf("total: %i\n", totalpc);
    system("pause");
    */

    while(chancepc > 4) {
			i++;
			
            if (totalpc > 13) {
                srand(rand());
                chancepc = rand()%10;
            }
            
            if (totalpc >= 17) {
                srand(rand());
                chancepc = rand()%6;
            }
            
            if (totalpc >= 19) {
                break;
            }
            if (totalpc == 21) {
            	break;
			}
            srand(rand());
            pontopc = (rand()%13) + 1;
            
            if (pontopc > 10) {
                        pontopc = 10;
            }
            
            totalpc = totalpc + pontopc;
            memoria[i] = totalpc;
            /*
            printf("total: %i\n", totalpc);
            system("pause");
            */
            
            if (totalpc > 21) {
            	/*
            	printf("Maquina perdeu\n");
            	system("pause");
            	*/
            	break;
			}
    }

	i = 0;
	
    do
	{  
       srand(time(NULL));
       ponto = (rand()%13) + 1;
        if (ponto > 10) {
			ponto = 10;
		}
       total = total + ponto;
       printf("TOMA CARTA\n");
       printf("soma total: %i\n", total);
       printf("valor do oponent: %i\n", memoria[i]);
       system("pause");
       if (memoria != '\0') {
    		i++;
	   }
       if (total > 21) {
        	break;
       }
       if (total == 21) {
			break;
	   }
       printf("Mais cartas? digite 1\n");
       printf("Quer parar digite 0\n");
       scanf("%i", &parar);
       system("pause");
    }while(parar != 0); 
    
    i++;
    if(memoria[i] != '\0') {
    	i--;
	    for (j = i; j < 7;j++) {
	    	if(memoria[j] == '\0') {
	    		break;
			}
	    	printf("Valor do oponete: %i\n", memoria[j]);
	    	system("pause");
		}
	}
     
     if (total == totalpc && total < 21){
            printf("EMPATE\n");
            system("pause");
     }else if (total > totalpc && total < 21){
            printf("VOCE GANHOU\n");
            system("pause");
     }else if (total < totalpc && totalpc < 21) {
     		printf("VOCE PERDEU\n");
     		system("pause");
	 }else if (total < 21 && totalpc > 21) {
			printf("VOCE GANHOU\n");
			system("pause");
	 }else if (total > 21) {
	 		printf("VOCE PERDEU\n");
	 		system("pause");
	 }
}

void bubbleSort () {
     int i, j, y, clone;
	
	/* o vetor começa a contar do 0, 
	mas quando voce vai inserir a quantidade de espaço dentro dele voce desconsidera o 0,
	voce conta normalmente*/
	
	int vetor[5];	
	
	for (i = 0; i != 5; i++) {
		printf("digite um numero:\n");
		scanf("%i",&vetor[i]);
		system("pause");
	}
	
	i = 0;
	
	for (j = 0; j != 5; j++) {
		for (i = 0; i != 5; i++) {
			y = i + 1;
			if (vetor[i] > vetor[y]) {
				clone = vetor[y];
				vetor[y] = vetor[i];
				vetor[i] = clone;
			}
		}
	}

	for (i = 0; i != 5; i++) {
		printf("numeros inseridos %i \n", vetor[i]);
		system("pause");
	}
}

void elevandoVetor () {
     int i, x;
int vetor[2];
    
    for (i = 0; i < 2; i++) {
        printf("insira um numero \n");
        scanf("%i",&vetor[i]); 
        system("pause");
        system("cls");
    }
    
    printf("insira um numero para elevar os outros \n");
    scanf("%i",&x);
    system("pause");
    system("cls");
    
    for (i = 0; i < 2; i++) {
        vetor[i] = pow(vetor[i], x);
    }
    
    for (i = 0; i < 2; i++) {
        printf("numero inserido %i \n", vetor[i]);
        system("pause");
        system("cls");
    }
}

void vetorFuncionamento () {
     int i, j, y, clone;
	
	/* o vetor começa a contar do 0, 
	mas quando voce vai inserir a quantidade de espaço dentro dele voce desconsidera o 0,
	voce conta normalmente*/
	
	int vetor[2];	
	vetor[0] = 222;
	vetor[1] = 12;
	
	i = 0;
	y = i + 1;
	
	if (vetor[0] > vetor[1]) {
		clone = vetor[1];
		vetor[1] = vetor[0];
		vetor[0] = clone;
	}
	
	for (i = 0; i < 2; i++) {
		printf("numeros inseridos %i \n", vetor[i]);
		system("pause");
	}
}
int main(){
  quadradoVetor();
}
