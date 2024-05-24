//PINES VALENCE
int posicionV1 = 2;
int posicionV2 = 3;
int posicionV3 = 4;
int posicionV4 = 5;
int posicionV5 = 6;
int posicionV6 = 7;
int posicionV7 = 8;
int posicionV8 = 9;

//PINES AROUSAL
int posicionA1 = 10;
int posicionA2 = 11;
int posicionA3 = 12;
int posicionA4 = 19;
int posicionA5 = 18;
int posicionA6 = 17;
int posicionA7 = 16;
int posicionA8 = 15;

//PIN BOTÓN
int boton = 13;

//VALOR VALENCE
int valueV1 = 0;
int valueV2 = 0;
int valueV3 = 0;
int valueV4 = 0;
int valueV5 = 0;
int valueV6 = 0;
int valueV7 = 0;
int valueV8 = 0;

//VALOR AROUSAL
int valueA1 = 0;
int valueA2 = 0;
int valueA3 = 0;
int valueA4 = 0;
int valueA5 = 0;
int valueA6 = 0;
int valueA7 = 0;
int valueA8 = 0;

//VALOR BOTÓN
int buttonState = 0; //estado del boton base
int contador = 0; //valor inicial del contador

void setup() {
  Serial.begin(9600);
  //SETEAR VALENCE
  pinMode(posicionV1, INPUT);
  pinMode(posicionV2, INPUT);
  pinMode(posicionV3, INPUT);
  pinMode(posicionV4, INPUT);
  pinMode(posicionV5, INPUT);
  pinMode(posicionV6, INPUT);
  pinMode(posicionV7, INPUT);
  pinMode(posicionV8, INPUT);
  //SETEAR AROUSAL
  pinMode(posicionA1, INPUT);
  pinMode(posicionA2, INPUT);
  pinMode(posicionA3, INPUT);
  pinMode(posicionA4, INPUT);
  pinMode(posicionA5, INPUT);
  pinMode(posicionA6, INPUT);
  pinMode(posicionA7, INPUT);
  pinMode(posicionA8, INPUT);
  //SETEAR BOTÓN
  pinMode(boton, INPUT);
}

void loop() {
  //LECTURA VALOR VALENCE
  valueV1 = digitalRead(posicionV1);  //lectura digital de pin
  valueV2 = digitalRead(posicionV2);  //lectura digital de pin
  valueV3 = digitalRead(posicionV3);  //lectura digital de pin
  valueV4 = digitalRead(posicionV4);  //lectura digital de pin
  valueV5 = digitalRead(posicionV5);  //lectura digital de pin
  valueV6 = digitalRead(posicionV6);  //lectura digital de pin
  valueV7 = digitalRead(posicionV7);  //lectura digital de pin
  valueV8 = digitalRead(posicionV8);  //lectura digital de pin

  //LECTURA VALOR AROUSAL
  valueA1 = digitalRead(posicionA1);  //lectura digital de pin
  valueA2 = digitalRead(posicionA2);  //lectura digital de pin
  valueA3 = digitalRead(posicionA3);  //lectura digital de pin
  valueA4 = digitalRead(posicionA4);  //lectura digital de pin
  valueA5 = digitalRead(posicionA5);  //lectura digital de pin
  valueA6 = digitalRead(posicionA6);  //lectura digital de pin
  valueA7 = digitalRead(posicionA7);  //lectura digital de pin
  valueA8 = digitalRead(posicionA8);  //lectura digital de pin

  //LECTURA VALOR BOTON
  buttonState = digitalRead(boton);  //lectura digital de pin
  counter(); //

  //FASE 1
  if (contador == 0) {
    //VALORES PARA VALENCE
    if (valueV1 == HIGH) {
      Serial.println(1);
    } else if (valueV2 == HIGH) {
      Serial.println(2);
    } else if (valueV3 == HIGH) {
      Serial.println(3);
    } else if (valueV4 == HIGH) {
      Serial.println(4);
    } else if (valueV5 == HIGH) {
      Serial.println(5);
    } else if (valueV6 == HIGH) {
      Serial.println(6);
    } else if (valueV7 == HIGH) {
      Serial.println(7);
    } else if (valueV8 == HIGH) {
      Serial.println(8);
    }
  }

  else if (contador == 1) {
    //VALORES PARA AROUSAL
    if (valueA1 == HIGH) {
      Serial.println(11);
      //Serial.println("dentro");
    } else if (valueA2 == HIGH) {
      Serial.println(12);
    } else if (valueA3 == HIGH) {
      Serial.println(13);
    } else if (valueA4 == HIGH) {
      Serial.println(14);
    } else if (valueA5 == HIGH) {
      Serial.println(15);
    } else if (valueA6 == HIGH) {
      Serial.println(16);
    } else if (valueA7 == HIGH) {
      Serial.println(17);
    } else if (valueA8 == HIGH) {
      Serial.println(18);
    }
  }

  else if (contador == 2) {  //valores superpuestos
    //COLUMNA 1 - VALENCE 1
    if (valueV1 && valueA1 == HIGH) {
      Serial.println(311);
    } else if (valueV1 && valueA2 == HIGH) {
      Serial.println(312);
    } else if (valueV1 && valueA3 == HIGH) {
      Serial.println(313);
    } else if (valueV1 && valueA4 == HIGH) {
      Serial.println(314);
    } else if (valueV1 && valueA5 == HIGH) {
      Serial.println(315);
    } else if (valueV1 && valueA6 == HIGH) {
      Serial.println(316);
    } else if (valueV1 && valueA7 == HIGH) {
      Serial.println(317);
    } else if (valueV1 && valueA8 == HIGH) {
      Serial.println(318);
    }
    //COLUMNA 2 - VALENCE 2
    else if (valueV2 && valueA1 == HIGH) {
      Serial.println(321);
    } else if (valueV2 && valueA2 == HIGH) {
      Serial.println(322);
    } else if (valueV2 && valueA3 == HIGH) {
      Serial.println(323);
    } else if (valueV2 && valueA4 == HIGH) {
      Serial.println(324);
    } else if (valueV2 && valueA5 == HIGH) {
      Serial.println(325);
    } else if (valueV2 && valueA6 == HIGH) {
      Serial.println(326);
    } else if (valueV2 && valueA7 == HIGH) {
      Serial.println(327);
    } else if (valueV2 && valueA8 == HIGH) {
      Serial.println(328);
    }
    //COLUMNA 3 - VALENCE 3
    else if (valueV3 && valueA1 == HIGH) {
      Serial.println(331);
    } else if (valueV3 && valueA2 == HIGH) {
      Serial.println(332);
    } else if (valueV3 && valueA3 == HIGH) {
      Serial.println(333);
    } else if (valueV3 && valueA4 == HIGH) {
      Serial.println(334);
    } else if (valueV3 && valueA5 == HIGH) {
      Serial.println(335);
    } else if (valueV3 && valueA6 == HIGH) {
      Serial.println(336);
    } else if (valueV3 && valueA7 == HIGH) {
      Serial.println(337);
    } else if (valueV3 && valueA8 == HIGH) {
      Serial.println(338);
    }
    //COLUMNA 4 - VALENCE 4
    else if (valueV4 && valueA1 == HIGH) {
      Serial.println(341);
    } else if (valueV4 && valueA2 == HIGH) {
      Serial.println(342);
    } else if (valueV4 && valueA3 == HIGH) {
      Serial.println(343);
    } else if (valueV4 && valueA4 == HIGH) {
      Serial.println(344);
    } else if (valueV4 && valueA5 == HIGH) {
      Serial.println(345);
    } else if (valueV4 && valueA6 == HIGH) {
      Serial.println(346);
    } else if (valueV4 && valueA7 == HIGH) {
      Serial.println(347);
    } else if (valueV4 && valueA8 == HIGH) {
      Serial.println(348);
    }
    //COLUMNA 5 - VALENCE 5
    else if (valueV5 && valueA1 == HIGH) {
      Serial.println(351);
    } else if (valueV5 && valueA2 == HIGH) {
      Serial.println(352);
    } else if (valueV5 && valueA3 == HIGH) {
      Serial.println(353);
    } else if (valueV5 && valueA4 == HIGH) {
      Serial.println(354);
    } else if (valueV5 && valueA5 == HIGH) {
      Serial.println(355);
    } else if (valueV5 && valueA6 == HIGH) {
      Serial.println(356);
    } else if (valueV5 && valueA7 == HIGH) {
      Serial.println(357);
    } else if (valueV5 && valueA8 == HIGH) {
      Serial.println(358);
    }
    //COLUMNA 6 - VALENCE 6
    else if (valueV6 && valueA1 == HIGH) {
      Serial.println(361);
    } else if (valueV6 && valueA2 == HIGH) {
      Serial.println(362);
    } else if (valueV6 && valueA3 == HIGH) {
      Serial.println(363);
    } else if (valueV6 && valueA4 == HIGH) {
      Serial.println(364);
    } else if (valueV6 && valueA5 == HIGH) {
      Serial.println(365);
    } else if (valueV6 && valueA6 == HIGH) {
      Serial.println(366);
    } else if (valueV6 && valueA7 == HIGH) {
      Serial.println(367);
    } else if (valueV6 && valueA8 == HIGH) {
      Serial.println(368);
    }
    //COLUMNA 7 - VALENCE 7
    else if (valueV7 && valueA1 == HIGH) {
      Serial.println(371);
    } else if (valueV7 && valueA2 == HIGH) {
      Serial.println(372);
    } else if (valueV7 && valueA3 == HIGH) {
      Serial.println(373);
    } else if (valueV7 && valueA4 == HIGH) {
      Serial.println(374);
    } else if (valueV7 && valueA5 == HIGH) {
      Serial.println(375);
    } else if (valueV7 && valueA6 == HIGH) {
      Serial.println(376);
    } else if (valueV7 && valueA7 == HIGH) {
      Serial.println(377);
    } else if (valueV7 && valueA8 == HIGH) {
      Serial.println(378);
    }
    //COLUMNA 8 - VALENCE 8
    else if (valueV8 && valueA1 == HIGH) {
      Serial.println(381);
    } else if (valueV8 && valueA2 == HIGH) {
      Serial.println(382);
    } else if (valueV8 && valueA3 == HIGH) {
      Serial.println(383);
    } else if (valueV8 && valueA4 == HIGH) {
      Serial.println(384);
    } else if (valueV8 && valueA5 == HIGH) {
      Serial.println(385);
    } else if (valueV8 && valueA6 == HIGH) {
      Serial.println(386);
    } else if (valueV8 && valueA7 == HIGH) {
      Serial.println(387);
    } else if (valueV8 && valueA8 == HIGH) {
      Serial.println(388);
    }
  }

  else if (contador == 3) {
    Serial.println(666); //valor para indicar que la secuencia acaba
    if (valueV1 && valueA1 == HIGH) {
      contador = 0; //reseteo del contador para voler a empezar
    } 
    else {
      Serial.println(0000); //si los valores de los conmutadores no están en su posicion 1
      }
  }
}

void counter() { //función contadaor
  buttonState = digitalRead(boton); //leer el estado del boton
  if (buttonState == HIGH) { //si está apretado, sumamos 1 al contador
    contador = contador + 1;
  }
  delay(200);
}