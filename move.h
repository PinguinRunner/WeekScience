/*
Integrated used for motor:  dual H bridge.
Pin connections in main code program

Function move motor (move_m(bool, int, int);)
Input data dir -> direction (front (1), back (0))
           rot -> rotation (+-180°)
           spe -> speed (0 stop, 255 max)
The robot still move until main program call stop_m();
*/
bool f_b=1; //Store direction of motors

void set_rotation(int rot, int spe){
  //Code to move motors
}

void move_m(bool dir, int rot, int spe){
  if(dir!=f_b){ //Need for optimized code: if status is the same, skip 4 istructions
    if(dir){  //Set the pins to move the motor backward or forward
      digitalWrite(MR1, HIGH); digitalWrite(MR2, LOW);  //-------MUST BE VERIFIED------
      digitalWrite(ML1, HIGH); digitalWrite(ML2, LOW);
    }else{
      digitalWrite(MR1, LOW); digitalWrite(MR2, HIGH);
      digitalWrite(ML1, LOW); digitalWrite(ML2, HIGH);
    } f_b=dir;  //Change status of store value for next call to function
  }
  set_rotation(rot, spe); //Call function to set rotation speed
}

//Stop the robot - both enable pin LOW
void stop_m(){
  digitalWrite(ENR, LOW);
  digitalWrite(ENL, LOW);
}

