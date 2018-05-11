# pic18esp
PIC18F4550 with ESP8266

This project demonstrate one way to use the ESP8266 with PIC18F
microcontrollers.

Usage & compile

1. Error
"can't open include file "pconfig.h": No such file or directory"

Solution: Open project properties, select XC8 linker for your build 
configuration, select Option categories: Runtime scroll down to the 
"Link in Peripheral Library" option and check it.
