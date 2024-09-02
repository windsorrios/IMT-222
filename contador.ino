#define PULS    2
#define PASO    1
#define BAURENT   9600
#define RESET   3
#define VALOR   0

unsigned int cont;

void setup()
{
    Serial.begin(BAURENT);
    pinMode(PULS, INPUT_PULLUP);
    pinMode(RESET, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(PULS), interrumpir, FALLING);
    attachInterrupt(digitalPinToInterrupt(RESET), interrumpir, FALLING);


/* LOGICA DE UNO
*/
}
void loop()
{
    delay(5000);

}
void interrumpir(){
    //cont=cont+1;
    //cont+=1;
    cont+=PASO;
    Serial.println(cont);
    
}
void interrumpir()
    cont+=PASO;
    sERIAL.PRINTLN(cont);