int pinoSensor = 0; //saida do sensor A0
int valorLido = 0; // variavel auxiliar
float temperatura = 0; // variavel que armazena a temperatura lida
int linha = 0; //variael que se refere as  linhas do execel

 
void setup() { //função que sera executada uma sequencia de comandos
// put your setup code here, to run once:
 Serial.begin(9600);//incia a comunicacao serial a 9600 bauds.
  
Serial.println("CLEARDATA"); // reset comunicao serial
Serial.println("LABEL,HORA,TEMPERATURA,LINHA"); // nomeia as colunas
  
}

void loop() { //funcao que sera executada continuamente (um loop)

// put your main code here, to run repeatedly:
valorLido = analogRead(pinoSensor); //leitura analogica da porta A0
temperatura = (valorLido * 0.00488); //5volts /1023 = 0,00488 precisao do A/D
linha++; //incremnta linha pra leitura

Serial.print("DATA,TIME, "); // inicia a impressao dos dados
Serial.print(temperatura * 100); //imprime a temperatura em Grau Celsius e tambem ja converte milivolts para celsius cada 10mV == 1°C
Serial.print(" ,  "); // espaco entre  a temperatura e a linha 
Serial.println(linha); // mostra o valor da linha em numeros

 if(linha >  100){ // loop para  mostra a qnt de dados 
   linha =0; // incia do valor 0
  Serial.println("ROW,SET,2"); // alimentacao das linhas sempre com os dados ja iniciados
}
delay(1000); // tempo de delay a cada leitura 1000 = 1 segundo.
}

/*
// # include <string.h> exemplo de uma biblioteca
// O QUE É o COM?
// COM é um porta USB onde transmite os dados .
// PRINCIAPL DIFERENCA ENTRA COMPILADOR E EXECUTAVEL
// COMPILAÇÃO é voce traduzir a linguagem de alto nivel pra linguagem de maquina;
// EXECUTAVEL  é  a linguagem de maquina transformada em um programa executavel.
//Exemplo de um programa aonde se importa algunas BIBLIOTECAS.
//#include <stdio.h>  isso é  uma  BIBLIOTECA
//#include <string.h>// isso é uma  BIBLIOTECA
//#include <conio.h> isso é uma BIBLOTECA
//int main (void) isso é MÈTODO
//{
//  char str[10] = "Curso"; ISSO E UMA VARIAVEL
//  strcat(str, " de C"); ISSO E A CHAMADA DE UM METODO STRCAT
  //Concatena a string " de C" com o conteúdo da string str  
// printf("str = %s\n", str); ISSO E A CHAMADA DO METODO PRINTF
  //Será exibido curso de C 
//  return 0; ISSO E O RETORNO DO METODO
//}
 int vl = 0;
 int pinosensor = 0;
 float temp = 0;
 int linha = 0;
 void setup(){
  Serial.begin(9600);
  }
  void loop(){
    vl = analogRead(pinosensor);
    temp = (vl * 0.00488);
    Serial.println(temp * 100);
    linha++;
    if(linha >=10){
    linha=0;
      
      }
      delay (500);
    }
 */
