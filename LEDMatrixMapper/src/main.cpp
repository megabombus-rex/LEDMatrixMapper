#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define LED_PIN 9
#define LED_COUNT 64

struct Pattern {
  int red[8][8];
  int green[8][8];
  int blue[8][8];
};

class LEDMatrixHandler{
private:
Pattern patterns[5]; // will change it so it is allocated dynamically on setup


void displayPattern(int index);

public:

Adafruit_NeoPixel matrix;
LEDMatrixHandler(Adafruit_NeoPixel m_matrix);
LEDMatrixHandler();

};

//LEDMatrixHandler _matrixHandler;

Adafruit_NeoPixel* matrix;
void setup() {
  Adafruit_NeoPixel m_matrix(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
  matrix = &m_matrix;
  matrix->begin();
  matrix->show();
  matrix->setBrightness(64);

}

void loop() {
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      matrix->setPixelColor(i + j, (i * 2 + j), i, j);
      matrix->show();
    }
    
  }
}