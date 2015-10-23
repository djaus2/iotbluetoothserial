// A serial loop back app
// Past setup
// Initiated by connected system
// Note can be used with Bluetooth where the RxTx of the BT device
//   are connected to the TxRx of the Arduino  board.
// Need to disconnect BT adapter for programming though.

void setup() {
  // My adpater is set to this BAUD 115200
  // This is the Arduino to BT adapter port rate
  // Set wehn BT adapter is in comamnd mode.
  // Its NOT the BT rate which you can't set.
  Serial.begin(115200);
  delay(333);
  while (!Serial)
    ;
   delay(1000);
  Serial.println("The quick brown fox jumps over the lazy dog!");
}

void loop() {

  char ch = Serial.read();
  while ( 255 == (byte) ch)
  {
        ch = Serial.read();
  }
  Serial.print(ch);

}
