/*
  Author: Liceo Scientifico Fulcieri Forlì
  Program for arduino robot
  ITA: Volendo ottimizzare le uscite, si può usare un solo pin
       per motore (anziché due) invertendo l'uscita a livello HW
       Si perde il freno motore ma non è fondamentale perché i mmotori
       presenti hanno un attrito elevato.
  Robot have to go standalone throught a place and skip object.
  It'll be drive by a remote command
*/
#define MR1 3 //Motor right pin 1
#define MR2 4 //Motor right pin 2
#define ML1 5 //Motor left pin 1
#define ML2 6 //Motor left pin 2
#define ENR 7 //Motor right enable pin !! Must be pwm !!
#define ENL 8 //Motor left enable pin !! Must be pwm !!
#include "move.h"



void setup() {
  pinMode(MR1, OUTPUT);
  pinMode(MR2, OUTPUT);
  pinMode(ML1, OUTPUT);
  pinMode(ML2, OUTPUT);
  pinMode(ENR, OUTPUT);
  pinMode(ENL, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
