# avr-minitools
Code Snippets


## Usage EasyIO.h

For Example you have a LED on PORTB Pin4 and a switch on PORTA Pin6...


Add #define LED1 B,4 and #define SWITCH1 A,6 to your main header file.

Now you can use SETPORT(LED1); SETPIN(SWITCH1); SETON(LED1); ... and so on in your C file

Don't forget to #include EasyIO.h

