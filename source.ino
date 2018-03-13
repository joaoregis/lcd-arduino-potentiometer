#include <LiquidCrystal.h>
 
// Configura os pinos que vão ser usados para ligar o display
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup()
{
  // Configura o número de colunas x linhas do display
  lcd.begin(16, 2);
}

void Animar()
{
  // Rolagem para a esquerda
  for (int posicao = 0; posicao < 3; posicao++)
  {
    lcd.scrollDisplayLeft();
    delay(300);
  }

  // Rolagem para a direita
  for (int posicao = 0; posicao < 6; posicao++)
  {
    lcd.scrollDisplayRight();
    delay(300);
  }
}
 
void loop()
{
  // Limpa a tela
  lcd.clear();
  
  // Posiciona o cursor na coluna 3, linha 0;
  lcd.setCursor(3, 0);
  
  // Renderiza o texto no display
  lcd.print("LCD Arduino");
  lcd.setCursor(3, 1);
  lcd.print("YeahH!");
  
  delay(5000);

  Animar();
}
