#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#define ind_soma 2
#define ind_sub 2


int main(void){
	setlocale(LC_ALL, "portuguese");
	char m_aux1[ind_soma][ind_soma], m_aux2[ind_soma][ind_soma];
	int opcao, m_soma1[ind_soma][ind_soma], m_soma2[ind_soma][ind_soma],r_soma[ind_soma][ind_soma], l_soma, c_soma;
	
	char n_aux, m_aux3[ind_sub][ind_sub];
	int n_sub, m_sub1[ind_sub][ind_sub],r_sub[ind_sub][ind_soma], l_sub, c_sub;
	printf("Escolha a Opção:\n[1]Soma\n[2]Subtração\nOpção: ");
	scanf("%i",&opcao);
	fflush(stdin);
	
	if(opcao == 1){
		printf("Dados da Matriz 1:\n");
		for(l_soma = 0; l_soma < ind_soma; l_soma++){
			for(c_soma = 0; c_soma < ind_soma; c_soma++){
				printf("Informe um número na posição [%i][%i]: (Número digitados: %i de %i): ", l_soma, c_soma, c_soma+1, ind_soma);
				scanf("%c",&m_aux1[l_soma][c_soma]);
				fflush(stdin);
				if(isdigit(m_aux1[l_soma][c_soma])){
					m_soma1[l_soma][c_soma] = m_aux1[l_soma][c_soma] - '0';
				}else{
					printf("Digite apenas números.\n");
					c_soma-=1;
				}
			
			}
		}
		printf("\n\nDados da Matriz 2:\n");
		for(l_soma = 0; l_soma < ind_soma; l_soma++){
			for(c_soma = 0; c_soma < ind_soma; c_soma++){
				printf("Informe um número na posição [%i][%i]: (Número digitados: %i de %i): ", l_soma, c_soma, c_soma+1, ind_soma);
				scanf("%c",&m_aux2[l_soma][c_soma]);
				fflush(stdin);
				if(isdigit(m_aux2[l_soma][c_soma])){
					m_soma2[l_soma][c_soma] = m_aux2[l_soma][c_soma] - '0';
				}else{
					printf("Digite apenas números.\n");
					c_soma-=1;
				}
			
			}
		}
		printf("\n\nResultado da Soma da Matriz 1 + Matriz 2:\n");
		for(l_soma = 0; l_soma < ind_soma; l_soma++){
			for(c_soma = 0; c_soma < ind_soma; c_soma++){
				r_soma[l_soma][c_soma] = (m_aux1[l_soma][c_soma] - '0') + (m_aux2[l_soma][c_soma] -'0');
				printf("%i\t", r_soma[l_soma][c_soma]);
			}
			printf("\n");
		}
		/* TESTE DE ARMAZENAMENTO 
		printf("\n\n");
		system("PAUSE");
		system("clear || cls");
		printf("Digite um numero: ");
		scanf("%i",&opcao);
		fflush(stdin);
		if(opcao == 1){
			for(l_soma = 0; l_soma < ind_soma; l_soma++){
				for(c_soma = 0; c_soma < ind_soma; c_soma++){
					r_soma[l_soma][c_soma] = m_soma1[l_soma][c_soma] + m_soma2[l_soma][c_soma];
					printf("%i\t", r_soma[l_soma][c_soma]);
				}
				printf("\n");
			}
			
		}*/
			
	}if(opcao == 2){
		printf("Dados da Matriz 1:\n");
		for(l_sub = 0; l_sub < ind_sub; l_sub++){
			for(c_sub = 0; c_sub < ind_sub; c_sub++){
				printf("Informe um número na posição [%i][%i]: (Número digitados: %i de %i): ", l_sub, c_sub, c_sub+1, ind_sub);
				scanf("%c",&m_aux3[l_sub][c_sub]);
				fflush(stdin);
				if(isdigit(m_aux3[l_sub][c_sub])){
					m_sub1[l_sub][c_sub] = m_aux3[l_sub][c_sub] - '0';
				}else{
					printf("Digite apenas números.\n");
					c_sub-=1;
				}
			}
		}
		printf("Digite um número a ser para subtrair: ");
		scanf("%c",&n_aux);
		fflush(stdin);
		if(!isdigit(n_aux)){
			printf("\nDigite apenas números para subtrair.");
		}else{
			printf("\n\nResultado da Subtração:\n");
			n_sub = n_aux - '0';
			for(l_sub = 0; l_sub < ind_sub; l_sub++){
				for(c_sub = 0; c_sub < ind_sub; c_sub++){
					r_sub[l_sub][c_sub] = ((m_aux3[l_sub][c_sub] - '0') - n_sub);
					printf("%i\t", r_sub[l_sub][c_sub]);
				}
				printf("\n");
			}
		}
	}else{
		printf("Opção incorreta.");
	}
	printf("\n\n");
	system("PAUSE");
	system("clear || cls");
	return 0;
}
                
