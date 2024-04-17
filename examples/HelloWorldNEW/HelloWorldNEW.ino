// HELLO WORLD NEW using autoBegin function
#include <LiquidCrystal_I2C.h>

// Set the LCD for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(16, 2);

void setup()
{
	// initialize the LCD
	lcd.autoBegin();

	// Turn on the blacklight and print a message.
	lcd.backlight();
	lcd.print("Hello, world!");
}

void loop()
{
	// Do nothing here...
}
