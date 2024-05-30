#include <Adafruit_NeoPixel.h>

// Configuración del número de LEDs y el pin de datos
#define PIN 6
#define NUMPIXELS 113
#define brillo 10

// Inicialización del objeto Adafruit_NeoPixel
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();  //inicialización tira
  for (int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0));  // RESET a 0
  }
  strip.show();
}

void loop() {
  Serial.begin(9600);
  valorVALENCE();  //selección de valor random asociado a la variable VALENCE
  valorAROUSAL();  //selección de valor random asociado a la variable AROUSAL
  strip.show();    //imprimimos visualización
  delay(1000);     //1s
  reset();         //reseteo
}


//RESET 0
void reset() {
  for (uint8_t i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0));
  }
  strip.show();
}

//SETTING VALENCE VARIABLES VALUES
void valence1() {
  strip.setPixelColor(19, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(34, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(46, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(47, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(65, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(66, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(78, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(93, strip.Color(brillo, brillo, brillo));
}
void valence2() {
  strip.setPixelColor(17, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(18, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(19, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(20, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(31, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(36, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(46, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(51, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(61, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(66, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(76, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(81, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(92, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(93, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(94, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(95, strip.Color(brillo, brillo, brillo));
}
void valence3() {
  strip.setPixelColor(0, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(7, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(17, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(20, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(31, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(32, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(33, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(34, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(35, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(36, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(47, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(48, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(49, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(50, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(62, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(63, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(64, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(65, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(76, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(77, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(78, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(79, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(80, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(81, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(92, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(95, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(105, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(112, strip.Color(brillo, brillo, brillo));
}
void valence4() {
  strip.setPixelColor(3, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(4, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(16, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(18, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(19, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(20, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(32, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(35, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(45, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(46, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(47, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(48, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(49, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(50, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(51, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(52, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(60, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(61, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(62, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(63, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(64, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(65, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(66, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(67, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(77, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(80, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(91, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(93, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(94, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(96, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(108, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(109, strip.Color(brillo, brillo, brillo));
}
////////////////////////////////////////////////////
void valence5() {
  strip.setPixelColor(0, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(1, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(2, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(5, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(6, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(7, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(15, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(16, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(21, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(22, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(30, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(32, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(33, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(34, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(35, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(37, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(46, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(47, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(50, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(51, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(61, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(62, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(65, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(66, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(75, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(77, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(78, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(79, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(80, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(82, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(90, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(91, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(96, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(97, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(105, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(106, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(107, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(110, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(111, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(112, strip.Color(brillo, brillo, brillo));
}
void valence6() {
  strip.setPixelColor(1, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(2, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(3, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(4, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(5, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(6, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(15, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(16, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(17, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(18, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(19, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(20, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(21, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(30, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(31, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(33, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(34, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(36, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(37, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(45, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(47, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(50, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(52, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(60, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(62, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(65, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(67, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(75, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(76, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(78, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(79, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(81, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(82, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(90, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(91, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(92, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(93, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(94, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(95, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(96, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(97, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(106, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(107, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(108, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(109, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(110, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(111, strip.Color(brillo, brillo, brillo));
}
void valence7() {
  strip.setPixelColor(0, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(1, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(2, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(3, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(4, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(5, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(6, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(7, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(15, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(17, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(18, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(19, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(20, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(22, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(30, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(31, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(32, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(35, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(36, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(37, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(45, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(46, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(48, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(49, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(51, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(52, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(60, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(61, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(63, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(64, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(66, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(67, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(75, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(76, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(77, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(80, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(81, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(82, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(90, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(92, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(93, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(94, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(95, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(97, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(105, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(106, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(107, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(108, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(109, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(110, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(111, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(112, strip.Color(brillo, brillo, brillo));
}
void valence8() {
  strip.setPixelColor(1, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(2, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(3, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(4, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(5, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(6, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(15, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(16, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(17, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(18, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(19, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(20, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(21, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(22, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(30, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(31, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(32, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(33, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(34, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(35, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(36, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(37, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(45, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(46, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(47, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(48, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(49, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(50, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(51, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(52, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(60, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(61, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(62, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(63, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(64, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(65, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(66, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(67, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(75, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(76, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(77, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(78, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(79, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(80, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(81, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(82, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(90, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(91, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(92, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(93, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(94, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(95, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(96, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(97, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(106, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(107, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(108, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(109, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(110, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(111, strip.Color(brillo, brillo, brillo));
}

/////////////////////////////////////////////////////////////////
///////////////SETTING AROUSAL VARIABLES VALUES//////////////////
/////////////////////////////////////////////////////////////////
void arousal1() {
  strip.setPixelColor(24, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(28, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(84, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(88, strip.Color(brillo, brillo, brillo));
}

void arousal2() {
  strip.setPixelColor(24, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(28, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(84, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(88, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(40, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(42, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(70, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(72, strip.Color(brillo, brillo, brillo));
}

void arousal3() {
  strip.setPixelColor(8, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(9, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(10, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(14, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(29, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(44, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(68, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(83, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(98, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(102, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(103, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(104, strip.Color(brillo, brillo, brillo));
}

void arousal4() {
  strip.setPixelColor(8, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(9, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(13, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(14, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(23, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(24, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(28, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(29, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(83, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(84, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(88, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(89, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(98, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(99, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(103, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(104, strip.Color(brillo, brillo, brillo));
}
void arousal5() {
  strip.setPixelColor(13, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(29, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(28, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(27, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(43, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(9, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(25, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(24, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(23, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(39, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(73, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(89, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(88, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(87, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(103, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(69, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(85, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(84, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(83, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(99, strip.Color(brillo, brillo, brillo));
}

void arousal6() {
  strip.setPixelColor(8, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(9, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(10, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(12, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(13, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(14, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(23, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(24, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(28, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(29, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(38, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(44, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(68, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(74, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(83, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(84, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(88, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(89, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(98, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(99, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(100, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(102, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(103, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(104, strip.Color(brillo, brillo, brillo));
}

void arousal7() {
  strip.setPixelColor(8, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(9, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(10, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(12, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(13, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(14, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(23, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(29, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(38, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(39, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(40, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(42, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(43, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(44, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(68, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(69, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(70, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(72, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(73, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(74, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(83, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(89, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(98, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(99, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(100, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(102, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(103, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(104, strip.Color(brillo, brillo, brillo));
}

void arousal8() {
  strip.setPixelColor(9, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(10, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(12, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(13, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(29, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(28, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(27, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(25, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(24, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(23, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(44, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(43, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(42, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(38, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(39, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(40, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(68, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(69, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(70, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(72, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(73, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(74, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(83, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(84, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(85, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(87, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(88, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(89, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(99, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(100, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(102, strip.Color(brillo, brillo, brillo));
  strip.setPixelColor(103, strip.Color(brillo, brillo, brillo));
}


/////////////////////////////////////////////////////////////////
/////////////////////VARIABLE SELECIÓN VALENCE///////////////////
/////////////////////////////////////////////////////////////////

void valorVALENCE() {
  int randomNumberVALENCE = random(1, 8);
  Serial.println("randomNumberVALENCE");
  Serial.println(randomNumberVALENCE);

  if (randomNumberVALENCE == 1) {
    valence1();
    strip.show();
  } else if (randomNumberVALENCE == 2) {
    valence2();
    strip.show();
  } else if (randomNumberVALENCE == 3) {
    valence3();
    strip.show();
  } else if (randomNumberVALENCE == 4) {
    valence4();
    strip.show();
  } else if (randomNumberVALENCE == 5) {
    valence5();
    strip.show();
  } else if (randomNumberVALENCE == 6) {
    valence6();
    strip.show();
  } else if (randomNumberVALENCE == 7) {
    valence7();
    strip.show();
  } else if (randomNumberVALENCE == 8) {
    valence8();
    strip.show();
  }
}

/////////////////////////////////////////////////////////////////
/////////////////////VARIABLE SELECIÓN AROUSAL///////////////////
/////////////////////////////////////////////////////////////////
void valorAROUSAL() {
  int randomNumberAROUSAL = random(9, 16);
  Serial.println("randomNumberAROUSAL");
  Serial.println(randomNumberAROUSAL);
  if (randomNumberAROUSAL == 9) {
    arousal1();
    strip.show();
  } else if (randomNumberAROUSAL == 10) {
    arousal2();
    strip.show();
  } else if (randomNumberAROUSAL == 11) {
    arousal3();
    strip.show();
  } else if (randomNumberAROUSAL == 12) {
    arousal4();
    strip.show();
  } else if (randomNumberAROUSAL == 13) {
    arousal5();
    strip.show();
  } else if (randomNumberAROUSAL == 14) {
    arousal6();
    strip.show();
  } else if (randomNumberAROUSAL == 15) {
    arousal7();
    strip.show();
  } else if (randomNumberAROUSAL == 16) {
    arousal8();
    strip.show();
  }
}