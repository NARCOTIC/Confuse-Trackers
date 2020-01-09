#include "DigiKeyboard.h"

void setup() 
{
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.println("chrome.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop()
{
  DigiKeyboard.sendKeyStroke(0);
  
  unsigned long time;
  
  int randm = random(999999);
  time = millis();

  int itmNum = (randm * time) % 50;

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_K, MOD_CONTROL_LEFT);

  DigiKeyboard.sendKeyStroke(0);
  switch (itmNum) 
  {
  case 0:
    DigiKeyboard.println("What is Area 51");
    break;
  case 1:
    DigiKeyboard.println("What is a VSCO girl");
    break;
  case 2:
    DigiKeyboard.println("What is momo");
    break;
  case 3:
    DigiKeyboard.println("What is a boomer");
    break;
  case 4:
    DigiKeyboard.println("What is quid pro quo");
    break;
  case 5:
    DigiKeyboard.println("Prom Dance Tutorials");
    break;
  case 6:
    DigiKeyboard.println("How to Dance");
    break;
  case 7:
    DigiKeyboard.println("How to Dance in a Party");
    break;
  case 8:
    DigiKeyboard.println("Party Music");
    break;
  case 9:
    DigiKeyboard.println("Dance in a Club");
    break;
  case 10:
    DigiKeyboard.println("Prom Dress");
    break;
  case 11:
    DigiKeyboard.println("Prom Queen Dress");
    break;
  case 12:
    DigiKeyboard.println("Prom King Dress");
    break;
  case 13:
    DigiKeyboard.println("EDM");
    break;
  case 14:
    DigiKeyboard.println("Electronic Music");
    break;
  case 15:
    DigiKeyboard.println("Music Playlists");
    break;
  case 16:
    DigiKeyboard.println("Music Download");
    break;
  case 17:
    DigiKeyboard.println("How to Dress to Prom");
    break;
  case 18:
    DigiKeyboard.println("Senior Prom");
    break;
  case 19:
    DigiKeyboard.println("High School Prom");
    break;
  case 20:
    DigiKeyboard.println("Popular Songs");
    break;
  case 21:
    DigiKeyboard.println("Popular Singers");
    break;
  case 22:
    DigiKeyboard.println("Popular Rappers");
    break;
  case 23:
    DigiKeyboard.println("Nicki Minaj");
    break;
  case 24:
    DigiKeyboard.println("Cardi B");
    break;
  case 25:
    DigiKeyboard.println("Billboard");
    break;
  case 26:
    DigiKeyboard.println("Billboard Top 100");
    break;
  case 27:
    DigiKeyboard.println("Best Songs");
    break;
  case 28:
    DigiKeyboard.println("Top Songs");
    break;
  case 29:
    DigiKeyboard.println("Top Songs Download");
    break;
  case 30:
    DigiKeyboard.println("Hot Pop Songs");
    break;
  case 31:
    DigiKeyboard.println("Tik Tok Songs");
    break;
  case 32:
    DigiKeyboard.println("Viral Songs");
    break;
  case 33:
    DigiKeyboard.println("Apple Top 10");
    break;
  case 34:
    DigiKeyboard.println("Apple Music");
    break;
  case 35:
    DigiKeyboard.println("Amazon Prime Music");
    break;
  case 36:
    DigiKeyboard.println("Apple Charts");
    break;
  case 37:
    DigiKeyboard.println("MTV Music Awards");
    break;
  case 38:
    DigiKeyboard.println("Music");
    break;
  case 39:
    DigiKeyboard.println("Good Music");
    break;
  case 40:
    DigiKeyboard.println("Eminem");
    break;
  case 41:
    DigiKeyboard.println("Eminem Songs");
    break;
  case 42:
    DigiKeyboard.println("Eminem Diss");
    break;
  case 43:
    DigiKeyboard.println("Eminem Dr. Dre");
    break;
  case 44:
    DigiKeyboard.println("Dr. Dre");
    break;
  case 45:
    DigiKeyboard.println("pupilpath.com");
    break;
  case 46:
    DigiKeyboard.println("PupilPath");
    break;
  case 47:
    DigiKeyboard.println("Pupil Path Grades");
    break;
  case 48:
    DigiKeyboard.println("High School Grades");
    break;
  case 49:
    DigiKeyboard.println("Crowdsourcing");
    break;
  default:
    DigiKeyboard.println("Fuck Google!");
    break;
  }
  DigiKeyboard.delay(5000);
}
