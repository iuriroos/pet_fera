# pet_fera
Projeto da disciplina Linguagem de Programação I da UFRN

- Membros do grupo:

ANDERSON BEZERRA DA ROCHA - Matrícula: 20190000670
IURI CARVALHO ROOS - Matrícula: 20180065573
WESTEFNS DAMIAO DE SOUZA SILVA - Matrícula: 20190043130

- Link do repositório:

https://github.com/iuriroos/pet_fera

- Link do vídeo do YouTube:

Subimos o vídeo nesse link inicialmente, porém o youtube restringiu devido ter mais de 15 minutos e era uma conta não verificada.
https://youtu.be/f63YMKfGGF0

Por causa disse reinviamos o vídeos agora na conta verificada, o novo link é esse.
https://youtu.be/SBmQoXTvWYE

- Descrição e usabilidade:

O programa apresenta a seguinte interface:

(1)  Cadastrar um novo animal a ser comercializado.
(2)  Comprar animal disponivel.
(3)  Alterar dados de um animal.
(4)  Listar dados de um determinado animal.
(5)  Listar dados de uma classe de animais.
(6)  Listar animais de um determinado Veterinario ou Tratador.
(7)  Cadastrar um novo funcionario. (Veterinario/Tratador)
(8)  Alterar dados de um funcionario.
(9)  Remover um funcionario.
(10) Listar dados de um determinado funcionario.
(11) Listar todos os funcionarios.
(12) Sair do programa.

O programa não leva em consideração nenhum parâmetro de linha de comando, sendo necessário ao usuário somente navegar através das opções numéricas do menu.

Opção (1) Cadastrar um novo animal a ser comercializado:

	Este método checará antes se existe pelo menos 1 veterinário e 1 tratador cadastrados, pois tais informações são necessárias para a criação do objeto animal. Caso não exista, a opção redireciona para o cadastro de funcionário. Depois dos funcionários serem selecionados, o programa perguntará ao usuário informações básicas do animal, como o nome (string), cor (string), tipo de alimentação (string), sexo (F | M), tamanho em cm (int), preço (double), tipo de classificação (1 | 2 | 3 | 4) e se é silvestre (S | N). Caso o animal seja silvestre, perguntas adicionais são feitas, como o país de origem (string), se está ameaçado de extinção (S | N), dentre outras perguntas específicas referente ao tipo de classificação escolhido (ave, anfíbio, mamífero ou réptil). Ao final, o animal é cadastrado em um vector.

Opção (2) Comprar animal disponivel:

	Pergunta o nome do animal a ser comprado, em seguida chama um método que procura o animal com tal nome no vector e o remove.

Opção (3)  Alterar dados de um animal:

	Pergunta o nome do animal a ser alterado, em seguida chama um método que procura o animal e que a cada atributo vai perguntar se deseja alterá-lo com as opções (S | N). Como por exemplo: nome (string), sexo (F | M), tamanho em cm (int), cor (string), preço (double), tipo de alimentação (string).

Opção (4)  Listar dados de um determinado animal:

	Pergunta o nome do animal a ser listado, em seguida chama um método que procura o animal com tal nome no vector e o lista sua informações.

Opção (5)  Listar dados de uma classe de animais:



Opção (6)  Listar animais de um determinado Veterinario ou Tratador:

	Pergunta o nome do funcionário, em seguida chama um método que lista as informações de qualquer animal que tenha o funcionário em questão como veterinário ou tratador.

Opção (7)  Cadastrar um novo funcionario (Veterinario/Tratador):

	Este método perguntará primeiro as informações básicas de um funcionário, como nome (string), cpf (string), matricula (string), salário (double) e data de nascimento (string). Em seguida, o usário decide se o funcionário é veterinário ou tratador (V | T), e caso seja veterinário, precisará informar também o crmv (string). Caso contrário, deverá informar o nível de segurança do tratador (Verde | Azul | Vermelho). Ao final, o funcionário é cadastrado num vector de veterinários ou tratadores dependendo da escolha.

Opção (8)  Alterar dados de um funcionario:

	Pergunta o nome do funcionário a ser alterado, em seguida chama um método que procura o funcionário (veterinário ou tratador) e que a cada atributo vai perguntar se deseja alterá-lo com as opções (S | N). Como por exemplo: nome (string), cpf (string), matrícula (string), data de nascimento (string), crmv (string) em caso de veterinário, nível de segurança (Verde | Azul | Vermelho) em caso de tratador.

Opção (9)  Remover um funcionario:

	Pergunta o nome do funcionário a ser removido, em seguida chama um método que procura o funcionário no vector baseado no nome e o remove.

Opção (10) Listar dados de um determinado funcionario:

	Pergunta o nome do funcionário a ser listado, em seguida chama um método que procura o funcionário no vector baseado no nome e lista suas informações.

Opção (11) Listar todos os funcionarios:

	Lista as informações de todos os funcionários cadastrados no vector, sejam veterinários ou tratadores.

Opção (12) Sair do programa:

	Emite mensagem de obrigado e encerra a execução do programa.

Obs: Existem várias verificações de assert pelo programa que encerrará-lo caso o usuário digite uma opção inválida (em uma pergunta (S | N), por exemplo).
Obs2: Caractéres minúsculos são aceitos em todas as perguntas.

Parte 2:

Na parte 2 do projeto, conseguimos implementar a persistência dos arquivos, tanto para gravar quanto para ler. Para gravar, conseguimos fazer para todos, mas para ler e carregar os arquivos no início do programa, só conseguimos fazer para o cadastro de Veterinários e Tratadores.
