#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // alamat 0x27, 16 kolom, 2 baris

void setup()
{
  lcd.init();        // inisialisasi LCD
  lcd.backlight();   // menyalakan lampu latar
}

void loop()
{
  // Tampilkan pesan statis di posisi awal
  lcd.setCursor(0, 0);
  lcd.print("Apa? Cuma Stress dikit???");
  lcd.setCursor(0, 1);
  lcd.print("Gak ngaruh!!! udah stress dari awal!");
  
  // Scroll ke kanan sebanyak 42 langkah (pergeseran 1 karakter setiap 200ms)
  for (int i = 0; i < 42; i++) 
  {
    lcd.scrollDisplayRight(); 
    delay(200);
  } 
  
  // Scroll ke kiri sebanyak 42 langkah
  for (int a = 0; a < 42; a++) 
  {
    lcd.scrollDisplayLeft(); 
    delay(200);
  } 
}
