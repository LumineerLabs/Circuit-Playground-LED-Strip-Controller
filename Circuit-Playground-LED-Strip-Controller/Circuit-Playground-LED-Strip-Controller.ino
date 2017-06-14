
#include <Adafruit_NeoPixel.h>
//#include <Adafruit_CircuitPlayground.h>

#include <Lumineer_LEDAnimation.h>

#define NUM_PIXELS 20
#define PIN 1

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXELS, PIN, NEO_GRB + NEO_KHZ800);
AnimationController animator = AnimationController(strip);

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  animator.SetAnimation(LumineerAnimation_PulseFill);
}

uint32_t last_update = 0;
uint32_t interval = 5000;

void loop() {
  // put your main code here, to run repeatedly:
  /*if(millis() - last_update > interval)
  {
    last_update = millis();
    animator.Next();
  }*/
  animator.Step();
}
