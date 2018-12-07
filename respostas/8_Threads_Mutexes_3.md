1. Apresente as características e utilidades das seguintes funções:

(a) `popen()`

A função popen () inicializa um processo por meio de um um pipe, dando o forking e chamando o shell. Como um pipe é, por definição, unidirecional,o argumento de tipo pode especificar somente leitura ou escrita, não ambos; O fluxo resultante é correspondentemente somente leitura ou somente gravação. O argumento do comando é um ponteiro para uma cadeia terminada com nulo contendo uma linha de comando do shell. Este comando é passado para / bin / sh usando o sinalizador -c ;

(b) `pclose()`

A função espera que o processo associado termine, por meio de sleep, e retorna o status de saída do comando 

(c) `fileno()`



2. Quais são as vantagens e desvantagens em utilizar:

(a) `popen()

popen, por ser um pipe que inicializa um fork, permite que seja inicializado qualquer software.


(b) `exec()?`
