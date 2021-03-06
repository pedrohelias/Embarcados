Para todas as questões, compile-as com o gcc e execute-as via terminal.

1. Crie um "Olá mundo!" em C.

2. Crie um código em C que pergunta ao usuário o seu nome, e imprime no terminal "Ola " e o nome do usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_1':


$ ./ola_usuario_1
$ Digite o seu nome: Eu
$ Ola Eu



RESPOSTA: 

int main(){

char nome[20];

printf("digite seu nome\n");
scanf( "%s", nome);

printf ("ola %s \n", nome);

return 0;
}


3. Apresente os comportamentos do código anterior nos seguintes casos:

(a) Se o usuário insere mais de um nome.
```bash
$ ./ola_usuario_1
$ Digite o seu nome: Eu Mesmo
```
RESPOSTA:

O Software criado imprime apenas até o espaço. Após o espaço, a funçõa scanf não está habilitada, a princípio, para ler o caracter inserido 

(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:
```bash
$ ./ola_usuario_1
$ Digite o seu nome: "Eu Mesmo"
```
RESPOSTA:

Novamente a função Scanf verifica apenas o primeiro nome digitado

(c) Se é usado um pipe. Por exemplo:
```bash
$ echo Eu | ./ola_usuario_1
```
RESPOSTA:

Novamente a função Scanf verifica apenas o primeiro nome

(d) Se é usado um pipe com mais de um nome. Por exemplo:
```bash
$ echo Eu Mesmo | ./ola_usuario_1
```

RESPOSTA:

Novamente a função Scanf verifica apenas o primeiro nome


(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:
```bash
$ echo "Eu Mesmo" | ./ola_usuario_1
```
RESPOSTA:

Novamente a função Scanf verifica apenas o primeiro nome


(f) Se é usado o redirecionamento de arquivo. Por exemplo:
```bash
$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_1 < ola.txt
```

4. Crie um código em C que recebe o nome do usuário como um argumento de entrada (usando as variáveis argc e *argv[]), e imprime no terminal "Ola " e o nome do usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_2':

```bash
$ ./ola_usuario_2 Eu
$ Ola Eu
```

RESPOSTA:

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[]){

if (argc >1) {

	int i; //declarando a variavel i
	for(i = 1; i<argc; i++) // fazendo com que i comece em 1, garantindo que argc
				// não pare e determinando contagem do i
		printf("%s \n", argv[i]);
		printf("a quantidade de argumentos eh: %d\n", argc-1);
		printf("a quantidade de espaços entre palavras é: %d\n", argc-2); 		
	
}
	else
	printf("naõ foram passados argumentos\n");

return 0;


}

5. Apresente os comportamentos do código anterior nos seguintes casos:

(a) Se o usuário insere mais de um nome.
```bash
$ ./ola_usuario_2 Eu Mesmo
```
RESPOSTA:

Ola eu
Ola mesmo


(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:
```bash
$ ./ola_usuario_2 "Eu Mesmo"
```
RESPOSTA:

Ola eu mesmo

(c) Se é usado um pipe. Por exemplo:
```bash
$ echo Eu | ./ola_usuario_2
```

(d) Se é usado um pipe com mais de um nome. Por exemplo:
```bash
$ echo Eu Mesmo | ./ola_usuario_2
```

(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:
```bash
$ echo Eu Mesmo | ./ola_usuario_2
```

(f) Se é usado o redirecionamento de arquivo. Por exemplo:
```bash
$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_2 < ola.txt
```

6. Crie um código em C que faz o mesmo que o código da questão 4, e em seguida imprime no terminal quantos valores de entrada foram fornecidos pelo usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_3':

```bash
$ ./ola_usuario_3 Eu
$ Ola Eu
$ Numero de entradas = 2
```

RESPOSTA:

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[]){

if (argc >1) {

	int i; //declarando a variavel i
	for(i = 1; i<argc; i++) // fazendo com que i comece em 1, garantindo que argc
				// não pare e determinando contagem do i
		printf("%s ", argv[i]);
		printf("\n");
		printf("a quantidade de palavras eh: %d\n", argc-1);
	
}

return 0;


}

7. Crie um código em C que imprime todos os argumentos de entrada fornecidos pelo usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_argumentos':

```bash
$ ./ola_argumentos Eu Mesmo e Minha Pessoa
$ Argumentos: Eu Mesmo e Minha Pessoa
```
RESPOSTA:

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[]){


if (argc >1) {
	
	system("clear");

	int i; //declarando a variavel i
	printf("Argumentos: ");
	for(i = 1; i<argc; i++) // fazendo com que i comece em 1, garantindo que argc
				// pare e determinando contagem do i
		
		printf("%s ", argv[i]);
		printf("\n");
		
		

}



return 0;


}


8. Crie uma função que retorna a quantidade de caracteres em uma string, usando o seguinte protótipo:
`int Num_Caracs(char *string);` 
Salve-a em um arquivo separado chamado 'num_caracs.c'. Salve o protótipo em um arquivo chamado 'num_caracs.h'. Compile 'num_caracs.c' para gerar o objeto 'num_caracs.o'.

9. Re-utilize o objeto criado na questão 8 para criar um código que imprime cada argumento de entrada e a quantidade de caracteres de cada um desses argumentos. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_1':

```bash
$ ./ola_num_caracs_1 Eu Mesmo
$ Argumento: ./ola_num_caracs_1 / Numero de caracteres: 18
$ Argumento: Eu / Numero de caracteres: 2
$ Argumento: Mesmo / Numero de caracteres: 5
```

10. Crie um Makefile para a questão anterior.

11. Re-utilize o objeto criado na questão 8 para criar um código que imprime o total de caracteres nos argumentos de entrada. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_2':

```bash
$ ./ola_num_caracs_2 Eu Mesmo
$ Total de caracteres de entrada: 25
```

12. Crie um Makefile para a questão anterior.
