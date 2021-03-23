// Rafael de Jesús Anguiano Suárez del Real
// 6to Semestre
// 22/03/2021
// Interrupción Simple
int contador = 0;   //Contador

void setup()
{
    pinMode(4, OUTPUT); // Outputs para LED
    pinMode(3, OUTPUT); // Outputs para LED
    pinMode(2, INPUT_PULLUP);   //Input de la interrupción
    attachInterrupt(digitalPinToInterrupt(2),BOTON,RISING); // Interrupción y acción
    Serial.begin(9600);
    // CHANGE (Subida y bajada)
    // RISING (Subida)
    // DROP (Bajada)
}
        
void loop()
{
    Serial.println(contador);   //Imprimo el contador en Serial Monitor
    if(contador %2 == 0){   //Cada que es Par Enciendo LEDs
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
    }
    if(contador %2 == 1){   //Cada que es Par Apago LEDs
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
    }
}

void BOTON(){   //Esta es nu ISR
    contador++;
}