

    Quais são as vantagens e desvantagens em utilizar:

(a) fork?
Vantagens: A função roda diversos processos filho, cada filho executa sua própria tarefa, e tem seu espaço de memória protegido. Sua comunicação é feita por pipes, sinais, entre outros.

(b) threads?
Vantagem Uma só aplicação pode rodar várias threads, assim sendo, cada thread compartilha o mesmo espaço de tempo com outras threads. A comunicação é mais simples por usar memória compartilhada, troca de contexto (lightweight). Desvantagens: 
Risco de perda de dados


    Quantas threads serão criadas após as linhas de código a seguir? Quantas coexistirão? Por quê?

(a) Neste caso, duas thread criadas e igual duas coexistirão, pelo fato de terminarem ao mesmo tempo, São duas funções de criação de thread.

void* funcao_thread_1(void *arg);
void* funcao_thread_2(void *arg);

int main (int argc, char** argv)
{
	pthread_t t1, t2;
	pthread_create(&t1, NULL, funcao_thread_1, NULL);
	pthread_create(&t2, NULL, funcao_thread_2, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	return 0;
}

(b) Duas threads serão criadas porém pela fato da main esperar uma terminar, elas não coexistirão, duas funções thread criadas separadamente.

void* funcao_thread_1(void *arg);
void* funcao_thread_2(void *arg);

int main (int argc, char** argv)
{
	pthread_t t1, t2;
	pthread_create(&t1, NULL, funcao_thread_1, NULL);
	pthread_join(t1, NULL);
	pthread_create(&t2, NULL, funcao_thread_2, NULL);
	pthread_join(t2, NULL);
	return 0;
}

    Apresente as características e utilidades das seguintes funções:

(a) pthread_setcancelstate()
Direciona o estado de cancelamento da thread para o valor setado. O argumento de estado deve ter, necessariamente, um dos seguintes valores: 
PTHREAD_CANCEL_ENABLE: a thread é cancelável. 
PTHREAD_CANCEL_DISABLE: A thread não é cancelável. 

(b) pthread_setcanceltype()
Indica o tipo de cancelamento da thread. O tipo de cancelamento é retornado pelo buffer apontado por "oldtype". O argumento type deve ter um dos seguintes valores: 
PTHREAD_CANCEL_DEFERRED
PTHREAD_CANCEL_ASYNCHRONOUS


(DICA: elas são relacionadas à função pthread_cancel().)
