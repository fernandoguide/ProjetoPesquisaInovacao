# ProjetoPesquisaInovacao
Projeto de Pesquisa e Inovação  da Faculdade BandTec

https://github.com/fernandoguide/ProjetoPesquisaInovacao.git


				COMANDOS GIT 
--para checar o branch git branch ira aparecer *master *teste

git checkout -b teste para criar um branch

--para MUDAR o branch git checkout teste git checkout master

git init --> para iniciar o git

git pull origin master

--> para dar push

git status

git add .

git status

git commit -m "comentario"

git push -u origin master <--- o -u

Se você não clonou um repositório existente e quer conectar seu repositório a um servidor remoto, você deve adicioná-lo com git remote add origin Agora você é capaz de enviar suas alterações para o servidor remoto selecionado.

ramificando Branches ("ramos") são utilizados para desenvolver funcionalidades isoladas umas das outras. O branch master é o branch "padrão" quando você cria um repositório. Use outros branches para desenvolver e mescle-os (merge) ao branch master após a conclusão. sempre ira aparecer em qual vc esta entre parenteses (master)/(teste) por padrao é o master --->>>>>>(ATENÇÃO)antes de qualquer push ou commit fazer o pull para baixar o prejeto novo

verificar no site se foi

------------ outros comandos -------------------

git push -f origin master -> forcar a commit (NÃO RECOMENDADO USAR NO NOSSO PROJETO).

ssh-keygen -> apos digitar confirmar onde vai e depois digite uma senha ele cria uma senha ao seu repositorio deixando mais seguro o repositorio (usar so quando vc criar um novo repositorio)

depois de usar esse comando verificar se seu computador esta exibindo itens ocultos passo 1 se for windows va em C:/Usuarios/nome_do_desktop/.ssh passo 2 dentro dela vai ter 2 arquivos abrir id_rsa como txt copiar a chave que esta nela passo 3 abrir a foto do seu perfil no github em settings e depois SSH and GPG keys passo 4 clicar em new SSH key adiciona um titulo e depois cole sua key e salve.

git config --global push.default current -> restaura as config do push

git clone"SEU SSH AQUI" clonar o repositorio ssh

git clone "SEU SSH AQUI"

git remote add origin "SEU SSH AQUI" --> adicionar um acesso ao repositorio

git config --global user.name "seu nome aqui" --> deixar como padrão seu usuario

git config --global user.email "seu email aqui" --> como padrão seu email
