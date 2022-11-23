#include <Mouse.h>

//#define DEBUG  // decommenter cette ligne pour activer le mode debug via liaison serie

// Tableau a 2 entrees pour mapper les boutons avec la fonction desiree
int buttons_pins[3][2] = {
  { 9,  MOUSE_LEFT},
  { 10, MOUSE_RIGHT },
  { 11, MOUSE_MIDDLE }
};

// Nombre de bouton
const int buttons = 3;

void setup() {

#ifdef DEBUG
  Serial.begin(115200);
  while (!Serial);
  delay(1000);
  Serial.println("Hello");
#endif

// Configuration des entree avec activiation des resistances de tirage
  for (int i = 0; i < buttons; i++) {
    pinMode(buttons_pins[i][0], INPUT_PULLUP);
	
#ifdef DEBUG
    Serial.print("D");
    Serial.print(buttons_pins[i][0]);
    Serial.println("");
#endif

  }

// Initialisation de l'USB
  Mouse.begin();
  
}

void loop() {

// On balaie le tableau
  for (int i = 0; i < buttons; i++) {
	  
	// Bouton relache ?
    if (digitalRead(buttons_pins[i][0]) == HIGH) {
      if (Mouse.isPressed(buttons_pins[i][1])) Mouse.release(buttons_pins[i][1]); // s'il etait presse, on le relache sur l'USB
      delay(50);
	  
	// bouton presse  
    } else {
#ifdef DEBUG
      Serial.print("D");
      Serial.print(buttons_pins[i][0]);
      Serial.println(" is LOW");
#endif
      if (!Mouse.isPressed(buttons_pins[i][1])) Mouse.press(buttons_pins[i][1]); // s'il etait relache, on appuie sur l'USB
    }
  }
}
