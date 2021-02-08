const int pinWaterSensor=A1;

void setup()
{
  pinMode(pinRedLED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int valueWaterSensor=analogRead(pinWaterSensor);
  String mmWater;
  
  if (valueWaterSensor<=480){ 
    mmWater = "0mm"; 
  }
  else if (valueWaterSensor>480 && valueWaterSensor<=530){ 
    mmWater="0mm to 5mm"; 
  }
  else if (valueWaterSensor>530 && valueWaterSensor<=615){ 
    mmWater="5mm to 10mm"; 
  }
  else if (valueWaterSensor>615 && valueWaterSensor<=660){ 
    mmWater="10mm to 15mm"; 
  } 
  else if (valueWaterSensor>660 && valueWaterSensor<=680){ 
    mmWater="15mm to 20mm"; 
  }
  else if (valueWaterSensor>680 && valueWaterSensor<=690){ 
    mmWater="20mm to 25mm"; 
  }
  else if (valueWaterSensor>690 && valueWaterSensor<=700){ 
    mmWater="25mm to 30mm"; 
  }
  else if (valueWaterSensor>700 && valueWaterSensor<=705){ 
    mmWater="30mm to 35mm"; 
  }
  else if (valueWaterSensor>705){ 
    mmWater="35mm to 40mm"; 
  }
  
  Serial.print("\nWater level: ");
  Serial.print(mmWater);
  Serial.print(" mm");
  
  delay(1000);
}
