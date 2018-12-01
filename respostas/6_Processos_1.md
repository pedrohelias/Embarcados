1. Como se utiliza o comando `ps` para:

(a) Mostrar todos os processos rodando na máquina?

 ps -aux | less

(b) Mostrar os processos de um usuário?

ps -u [nome_de_usuario]

(c) Ordenar todos os processos de acordo com o uso da CPU?

ps aux k-pcpu

(d) Mostrar a quanto tempo cada processo está rodando?

ps -ef

2. De onde vem o nome `fork()`?

Quando ocorre a bifurcação, geração de um segundo código independente, através de um código principal

3. Quais são as vantagens e desvantagens em utilizar:

(a) `system()`?

É uma função de uso simples. Basicamente um código ou função pode ser executada dentro de um código, atráves de um comando no shell, no terminal do Sistema Operacional. A desvantagem é que dá a possibilidade a falhas de execução pois depende muito do sistema, não há controle de execuçaõ.

(b) `fork()` e `exec()`?

4. É possível utilizar o `exec()` sem executar o `fork()` antes?

5. Quais são as características básicas das seguintes funções:

(a) `execp()`?

(b) `execv()`?

(c) `exece()`?

(d) `execvp()`?

(e) `execve()`?

(f) `execle()`?
