#include <Rele.h>


byte RelesPins[4] = {2, 3, 4, 5};

Rele customReles = Rele(RelesPins, 4);   


void setup()
{
  customReles.Liga(0);
  customReles.Liga(1);
  customReles.Liga(2);
  customReles.Liga(3);
  Serial.begin(9600);
}


void loop()
{
  Serial.println(customReles.Estado(0));
  Serial.println(customReles.Estado(1));
  Serial.println(customReles.Estado(2));
  Serial.println(customReles.Estado(3));
  delay(1000);  
}
