#define PULS    2
#define PASO     1
unsigned int cont=0;

void setup(){
    pinMode(PULS, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(PULS), interrumpir, FALLING);


/* LOGICA DE UNO
*/
}
void loop(){


}
void interrumpir(){
    //cont=cont+1;
    cont+=1;

}