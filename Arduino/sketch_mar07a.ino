//int pinoSensor = 0;
//int valorLido = 0;
//float temperatura = 0;
//int linha = 0;

 
//void setup() {
// put your setup code here, to run once:
// Serial.begin(9600);
  
//Serial.println("CLEARDATA");
//Serial.println("LABEL,HORA,TEMPERATURA,LINHA");
  
//}

//void loop() {

// put your main code here, to run repeatedly:
///valorLido = analogRead(pinoSensor);
//temperatura = (valorLido * 0.00488);
// temperatura = temperatura * 100;
//linha++;

//Serial.print("DATA,TIME, ");
// Serial.println(temperatura * 100);

//Serial.println(linha);

//  if(linha >= 10){
//    linha =0;
//  Serial.println("ROW,SET,2");
//}
//delay(500);
// }



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
