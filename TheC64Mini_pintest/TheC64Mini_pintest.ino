/*
 * A small Arduino hack to find the correct pins for the matrix rows and columns, as well as the RESTORE key,
 * on the The C64 Mini keyboard by Bleurg / Dean Woolyatt.
 * The following is the end result, but the pins happened to be wired in the physical order, one side for rows
 * and one side for columns. This did not cover the RESTORE key, so I had to add some extra code to try out
 * a theory for that, which turned out to be right.
 */
int colpins[]={2,3,4,5,6,7,8,9};
int rowpins[]={10,16,14,15,A0,A1,A2,A3};
int testpin=0;

void setup() {
  for (int i=0; i<8; i++) {
    pinMode(colpins[i], OUTPUT);
    digitalWrite(colpins[i], HIGH);
    pinMode(rowpins[i], INPUT_PULLUP);
  }
  pinMode(0, OUTPUT);
  pinMode(1, INPUT_PULLUP);
  digitalWrite(0, LOW);
  Serial.begin(9600);
  while (Serial);
  Serial.println("Testing pin " + String(testpin));
  digitalWrite(colpins[testpin], LOW);
}

void loop() {
  for (int i=0; i<8; i++) {
    Serial.println("Pin " + String(i) + " = " + (digitalRead(rowpins[i])?"HIGH":"LOW"));
  }
  if (digitalRead(0) == HIGH) {
    Serial.println("Pin 0");
  }
  if (digitalRead(1) == HIGH) {
    Serial.println("Pin 1");
  }
  Serial.println();
  delay(1000);
}
