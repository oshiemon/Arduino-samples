//------------------------------------------------------------------------------
// SPS-440-1
// 電源電圧：5V
//------------------------------------------------------------------------------

#include <IRremote.h>

IRrecv irrecv(11);

void  setup ( )
{
  Serial.begin(115200); delay(100); Serial.println("\nStart\n");
  
  irrecv.enableIRIn();
}

void  loop ( )
{
  decode_results  results;        // Somewhere to store the results

  if (irrecv.decode(&results)) {  // Grab an IR code
    dumpInfo(&results);           // Output the results
    dumpRaw(&results);            // Output the results in RAW format
    dumpCode(&results);           // Output the results as source code
    Serial.println("");           // Blank line between entries
    irrecv.resume();              // Prepare for the next value
  }
}
