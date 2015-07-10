String scratch[10] = {"3333","3333","3333","3333","3333","3333","3333","3333","3333","3333"};

// Takes 1 - 10 and slots a number between -999 and 999 there.
void set(int number, long data) {
  scratch[number - 1] = sanitizeSensor(data);
}

// Combines the 10 values from the scratch array to fit into
// the five scratch characteristics. 
void writeScratchData() {

  String outString;
  long number;

  for (int i = 0; i < 10; i += 2) {
    outString = String( scratch[i] + scratch[i + 1] );
    number = atol( outString.c_str() );
    Bean.setScratchNumber( (i / 2 + 1) , number );
  }
  
}
