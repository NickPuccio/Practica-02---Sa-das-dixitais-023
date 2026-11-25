// C++ code
//
/*
Descrición de la Tarea
Realiza unha montaxe en TinkerCAD, seguindo o exemplo feito en clase, que empregue seis LEDs como saídas (nos pins 12 a 7). A continuación realiza un programa que faga o seguinte: 

Encenda e apague en intervalos de 500 ms cada un dos LEDs, en función do valor dunha variable textual de tipo String.
Encenda e apague en intervalos de 500 ms cada un dos LEDs, en función do valor dunha variable textual de tipo String, lido desde o monitor serie de Arduíno.
Usa un comentario de varias liñas para documentar o programa na cabeceira (que fai e como o fai, así como nome do autor e data de realización). Usa ademais os comentarios en liña (usando '//') para explicar o que fai cada parte do programa.
*/

/*
Aqui inicia el codigo de la PRIMERA PARTE
Encenda e apague en intervalos de 500 ms cada un dos LEDs, en función do valor dunha variable textual de tipo String.



String color = "Verde";
int pinRojo = 7;
int pinAmarillo = 8;
int pinAzul = 9;
int pinNaranja = 10;
int pinBlanco = 11;
int pinVerde = 12;

void setup()
{
  pinMode(pinRojo, OUTPUT);
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinAzul, OUTPUT);
  pinMode(pinNaranja, OUTPUT);
  pinMode(pinBlanco, OUTPUT);
  pinMode(pinVerde, OUTPUT);
}

void loop() 
{
 if (color == "Rojo")
     {
      digitalWrite(pinRojo, HIGH);
      delay(500);
      digitalWrite(pinRojo, LOW);
      delay(500);
     }
else if (color == "Amarillo")
     {
      digitalWrite(pinAmarillo, HIGH);
      delay(500);
      digitalWrite(pinAmarillo, LOW);
      delay(500);
     }
 else if (color == "Azul")
     {
      digitalWrite(pinAzul, HIGH);
      delay(500);
      digitalWrite(pinAzul, LOW);
      delay(500);
     }
 else if (color == "Naranja")
     {
      digitalWrite(pinNaranja, HIGH);
      delay(500);
      digitalWrite(pinNaranja, LOW);
      delay(500);
     }
 else if (color == "Blanco")
     {
      digitalWrite(pinBlanco, HIGH);
      delay(500);
      digitalWrite(pinBlanco, LOW);
      delay(500);
     }
 else if (color == "Verde")
     {
      digitalWrite(pinVerde, HIGH);
      delay(500);
      digitalWrite(pinVerde, LOW);
      delay(500);
     }
}
*/

/*
Aqui inicia el codigo de la SEGUNDA PARTE
Encenda e apague en intervalos de 500 ms cada un dos LEDs, en función do valor dunha variable textual de tipo String, lido desde o monitor serie de Arduíno.
*/
String color = "";
int pinRojo = 7;
int pinAmarillo = 8;
int pinAzul = 9;
int pinNaranja = 10;
int pinBlanco = 11;
int pinVerde = 12;

void setup()
{
  pinMode(pinRojo, OUTPUT);
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinAzul, OUTPUT);
  pinMode(pinNaranja, OUTPUT);
  pinMode(pinBlanco, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  if (Serial.available ())
     {
    color = Serial.readString ();
     }    
  
  if (color == "Rojo")
     {
      digitalWrite(pinRojo, HIGH);
      delay(500);
      digitalWrite(pinRojo, LOW);
      delay(500);
     }
else if (color == "Amarillo")
     {
      digitalWrite(pinAmarillo, HIGH);
      delay(500);
      digitalWrite(pinAmarillo, LOW);
      delay(500);
     }
 else if (color == "Azul")
     {
      digitalWrite(pinAzul, HIGH);
      delay(500);
      digitalWrite(pinAzul, LOW);
      delay(500);
     }
 else if (color == "Naranja")
     {
      digitalWrite(pinNaranja, HIGH);
      delay(500);
      digitalWrite(pinNaranja, LOW);
      delay(500);
     }
 else if (color == "Blanco")
     {
      digitalWrite(pinBlanco, HIGH);
      delay(500);
      digitalWrite(pinBlanco, LOW);
      delay(500);
     }
 else if (color == "Verde")
     {
      digitalWrite(pinVerde, HIGH);
      delay(500);
      digitalWrite(pinVerde, LOW);
      delay(500);
     }
}


