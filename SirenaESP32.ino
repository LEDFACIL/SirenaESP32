#define Base1 2
#define Base2 4
#define Rele 5

void setup() 
{
  pinMode(Base1, OUTPUT);
  pinMode(Base2, OUTPUT);
  pinMode(Rele, OUTPUT);

  digitalWrite(Rele, 0);
  delay(500);
  digitalWrite(Rele, 1);
}

void loop() 
{
  // Audiopenetrante ------------------------------------------------------------------------------------------

  for(uint8_t repeticiones_tono = 0; repeticiones_tono < 2; repeticiones_tono++)
  {
    for(uint16_t apertura_pulso = 845; apertura_pulso > 335; apertura_pulso -=4)
    {
      for(uint8_t repeticiones_periodo = 0; repeticiones_periodo < 20; repeticiones_periodo++)
      {
        digitalWrite(Base2, 0);
        digitalWrite(Base1, 1);
        digitalWrite(Base2, 0);
        delayMicroseconds(apertura_pulso);
          
        digitalWrite(Base1, 0);
        digitalWrite(Base2, 1);
        delayMicroseconds(apertura_pulso);
      }
    }   

    for(uint16_t apertura_pulso = 335; apertura_pulso < 845; apertura_pulso += 4)
    {
      for(uint8_t repeticiones_periodo = 0; repeticiones_periodo < 20; repeticiones_periodo++)
      {
        digitalWrite(Base2, 0);
        digitalWrite(Base1, 1);
        digitalWrite(Base2, 0);
        delayMicroseconds(apertura_pulso);
        
        digitalWrite(Base1, 0);
        digitalWrite(Base2, 1);
        delayMicroseconds(apertura_pulso);
      }
    }
  }

  // Ululante -------------------------------------------------------------------------------------------------

  for(uint8_t repeticiones_tono = 0; repeticiones_tono < 16; repeticiones_tono++)
  {
    for(uint16_t apertura_pulso = 845; apertura_pulso > 335; apertura_pulso -=4)
    {
      digitalWrite(Base2, 0);
      digitalWrite(Base1, 1);
      digitalWrite(Base2, 0);
      delayMicroseconds(apertura_pulso);
          
      digitalWrite(Base1, 0);
      digitalWrite(Base2, 1);
      delayMicroseconds(apertura_pulso);
    }   

    for(uint16_t apertura_pulso = 335; apertura_pulso < 845; apertura_pulso += 4)
    {
      digitalWrite(Base2, 0);
      digitalWrite(Base1, 1);
      digitalWrite(Base2, 0);
      delayMicroseconds(apertura_pulso);
        
      digitalWrite(Base1, 0);
      digitalWrite(Base2, 1);
      delayMicroseconds(apertura_pulso);      
    }
  }

  // Bitonal -------------------------------------------------------------------------------------------------

  for(uint8_t repeticiones_tono = 0; repeticiones_tono < 4; repeticiones_tono++)
  {
    for(uint16_t repeticiones_periodo = 0; repeticiones_periodo < 641; repeticiones_periodo++)
    {
      digitalWrite(Base2, 0);
      digitalWrite(Base1, 1);
      digitalWrite(Base2, 0);
      delayMicroseconds(571);
          
      digitalWrite(Base1, 0);
      digitalWrite(Base2, 1);
      delayMicroseconds(571);
    }   

    for(uint16_t repeticiones_periodo = 0; repeticiones_periodo < 512; repeticiones_periodo++)
    {
      digitalWrite(Base2, 0);
      digitalWrite(Base1, 1);
      digitalWrite(Base2, 0);
      delayMicroseconds(716);
        
      digitalWrite(Base1, 0);
      digitalWrite(Base2, 1);
      delayMicroseconds(716);      
    }
  }

  // Pato -------------------------------------------------------------------------------------------------

  for(uint8_t repeticiones_tono = 0; repeticiones_tono < 8; repeticiones_tono++)
  {
    for(uint8_t repeticiones_periodo = 0; repeticiones_periodo < 17; repeticiones_periodo++)
    {
      for(uint16_t apertura_pulso = 852; apertura_pulso > 373; apertura_pulso -=24)
      {
        digitalWrite(Base2, 0);
        digitalWrite(Base1, 1);
        digitalWrite(Base2, 0);
        delayMicroseconds(apertura_pulso);

        apertura_pulso -=24;

        digitalWrite(Base1, 0);
        digitalWrite(Base2, 1);
        delayMicroseconds(apertura_pulso);
       }   
    }

    for(uint8_t repeticiones_periodo = 0; repeticiones_periodo < 17; repeticiones_periodo++)
    {
      for(uint16_t apertura_pulso = 852; apertura_pulso > 373; apertura_pulso -=24)
      {
        digitalWrite(Base2, 0);
        digitalWrite(Base1, 0);
        digitalWrite(Base2, 0);          
        delayMicroseconds(apertura_pulso);

        apertura_pulso -=24;

        digitalWrite(Base1, 0);
        digitalWrite(Base2, 0);
        delayMicroseconds(apertura_pulso);
      }   
    }  
  }

   // Swatt -------------------------------------------------------------------------------------------------
  
  for(uint8_t repeticiones_periodo = 0; repeticiones_periodo < 8; repeticiones_periodo++)
  {
    for(uint16_t apertura_pulso = 845; apertura_pulso > 335; apertura_pulso -=24)
    {
      digitalWrite(Base2, 0);
      digitalWrite(Base1, 1);
      digitalWrite(Base2, 0);
      delayMicroseconds(apertura_pulso);
            
      digitalWrite(Base1, 0);
      digitalWrite(Base2, 1);
      delayMicroseconds(apertura_pulso);
    }   

    for(uint16_t apertura_pulso = 335; apertura_pulso < 845; apertura_pulso += 24)
    {
      digitalWrite(Base2, 0);
      digitalWrite(Base1, 1);
      digitalWrite(Base2, 0);
      delayMicroseconds(apertura_pulso);
          
      digitalWrite(Base1, 0);
      digitalWrite(Base2, 1);
      delayMicroseconds(apertura_pulso);      
    }
  }

  for(uint8_t repeticiones_periodo = 0; repeticiones_periodo < 1; repeticiones_periodo++)
  {
    for(uint16_t apertura_pulso = 845; apertura_pulso > 335; apertura_pulso -=24)
    {
      digitalWrite(Base2, 0);
      digitalWrite(Base1, 0);
      digitalWrite(Base2, 0);
      delayMicroseconds(apertura_pulso);
            
      digitalWrite(Base1, 0);
      digitalWrite(Base2, 0);
      delayMicroseconds(apertura_pulso);
    }   

    for(uint16_t apertura_pulso = 335; apertura_pulso < 845; apertura_pulso += 24)
    {
      digitalWrite(Base2, 0);
      digitalWrite(Base1, 0);
      digitalWrite(Base2, 0);
      delayMicroseconds(apertura_pulso);
        
      digitalWrite(Base1, 0);
      digitalWrite(Base2, 0);
      delayMicroseconds(apertura_pulso);      
    }
  }

  for(uint8_t repeticiones_periodo = 0; repeticiones_periodo < 16; repeticiones_periodo++)
  {
    for(uint16_t apertura_pulso = 845; apertura_pulso > 335; apertura_pulso -=24)
    {
      digitalWrite(Base2, 0);
      digitalWrite(Base1, 1);
      digitalWrite(Base2, 0);
      delayMicroseconds(apertura_pulso);
            
      digitalWrite(Base1, 0);
      digitalWrite(Base2, 1);
      delayMicroseconds(apertura_pulso);
    }   

  for(uint16_t apertura_pulso = 335; apertura_pulso < 845; apertura_pulso += 24)
    {
      digitalWrite(Base2, 0);
      digitalWrite(Base1, 1);
      digitalWrite(Base2, 0);
      delayMicroseconds(apertura_pulso);
          
      digitalWrite(Base1, 0);
      digitalWrite(Base2, 1);
      delayMicroseconds(apertura_pulso);      
    }
  }
}
