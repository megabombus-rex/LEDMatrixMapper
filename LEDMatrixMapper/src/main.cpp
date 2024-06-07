#include <Arduino.h>

class LEDMatrixHandler{
private:
Pattern patterns[5]; // will change it so it is allocated dynamically on setup

void mapPattern(Pattern p, int index);

public:


};

struct Pattern {
  int red[10][10];
  int green[10][10];
  int blue[10][10];
};

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}