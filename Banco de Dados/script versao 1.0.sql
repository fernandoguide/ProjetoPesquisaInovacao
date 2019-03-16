/* criando tabela Usuario */
create table Usuario (
codUsuario int primary key identity,
nome_usuario varchar(40),
senha_usuario varchar(40))
go

/* criando tabela Temperatura */
create table Temperatura (
idTemperatura int primary key identity,
registroTemp varchar(10),
dataTemp varchar(15),
horaTemp time
)
go

/* criando tabela Umidade */
create table Umidade (
idUmidade int primary key identity,
registroUmid varchar(10),
dataUmid varchar(15),
horaUmid time
)
go

/* inserindo dados na tabela Usuario */
insert into Usuario values
('admin','admin'),
('user','user')
go

/* comando para visualizar a tabela Usuario */
--select * from Usuario

/* inserindo dados na tabela Temperatura */
insert into Temperatura values
('23°C','13-03-2019','17:00:00'),
('38°C','14-03-2019','16:45:00'),
('32°C','15-03-2019','18:39:00')
go

/* comando para visualizar a tabela Temperatura */
--select * from Temperatura

/* inserindo dados na tabela Umidade */
insert into Umidade values
('45%','13-03-2019','17:00:00'),
('56%','14-03-2019','16:45:00'),
('78%','15-03-2019','18:39:00')
go

/* comando para visualizar a tabela Umidade */
--select * from Umidade

/* selecionando registro de tempperatura e data do registro na tabela Temperatura*/
--select registroTemp, dataTemp from Temperatura

/* selecionando as colunas de registro de temperatura e de registro de umidade */
--select registroTemp, registroUmid from Temperatura, Umidade

/* atualizando um campo da coluna registroTemp */
--update Temperatura set registroTemp = '25°C' where idTemperatura = 1

/* selecionando as colunas de registro de temperatura e hora de registro da tabela Temperatura*/
--select registroTemp, horaTemp from Temperatura

/* selecionando as colunas de registro de umidade e data do registro da tabela Umidade */
--select registroUmid, horaUmid from Umidade

/* selecionando as colunas de registro de umidade e hora do registro da tabela Umidade */
--select registroUmid, dataUmid from Umidade

/*apagando os dados do id 2 da tabela de Temperatura*/
--delete from Temperatura where idTemperatura = 2


