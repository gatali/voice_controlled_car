
#include <SoftwareSerial.h>
SoftwareSerial BT(0, 1); //TX, RX sırasıyla bağlayınız

String device;

#define SolMotorileri 12
#define SolMotorGeri 13
#define SagMotorileri 9
#define SagMotorGeri 10



#define kirmizi_bir 7
#define kirmizi_iki 2
#define yesil_bir 4
#define yesil_iki 3
#define buzzer 6
#define bluetooth_vcc 8
#define motor_surucu_vcc 11

void setup() {

  BT.begin(9600);

  Serial.begin(9600);

  pinMode(SolMotorileri, OUTPUT);
  pinMode(SolMotorGeri, OUTPUT);
  pinMode(SagMotorileri, OUTPUT);
  pinMode(SagMotorGeri, OUTPUT);

  pinMode(kirmizi_bir, OUTPUT);
  pinMode(kirmizi_iki, OUTPUT);
  pinMode(yesil_bir, OUTPUT);
  pinMode(yesil_iki, OUTPUT);
  pinMode(buzzer, OUTPUT);

  pinMode(bluetooth_vcc, OUTPUT);
  pinMode(motor_surucu_vcc, OUTPUT);

  digitalWrite(bluetooth_vcc, HIGH);
  digitalWrite(motor_surucu_vcc, HIGH);

  digitalWrite(kirmizi_bir, HIGH);
  digitalWrite(kirmizi_iki, HIGH);
  digitalWrite(yesil_bir, HIGH);
  digitalWrite(yesil_iki, HIGH);
  digitalWrite(buzzer, HIGH);
  delay (200);
  digitalWrite(kirmizi_bir, LOW);
  digitalWrite(kirmizi_iki, LOW);
  digitalWrite(yesil_bir, LOW);
  digitalWrite(yesil_iki, LOW);
  digitalWrite(buzzer, LOW);


}

//-----------------------------------------------------------------------//

void loop() {

  while (BT.available()) { //Okunacak bir bayt olup olmadığını kontrol edin

    delay(10); //Kararlı bir şekilde çalışması için gecikme eklendi

    char c = BT.read(); //seri okuma

    device += c;// }
  }

  if (device.length() > 0) {

    Serial.println(device);

    if (device == "yeşil led yak") {
      digitalWrite(yesil_bir, HIGH);
      digitalWrite(yesil_iki, HIGH);
    }

    else if (device == "yeşil led kapat") {
      digitalWrite(yesil_bir, LOW);
      digitalWrite(yesil_iki, LOW);
    }

    else if (device == "kırmızı led yak")
    {

      digitalWrite(kirmizi_bir, HIGH);
      digitalWrite(kirmizi_iki, HIGH);
    }

    else if ( device == "kırmızı led kapat") {

      digitalWrite(kirmizi_bir, LOW);
      digitalWrite(kirmizi_iki, LOW);
    }


    else if ( device == "sıralı led yak") {

      for (int a = 0 ; a < 10 ; a++)
      {

        digitalWrite(kirmizi_bir, LOW);
        digitalWrite(kirmizi_iki, LOW);
        digitalWrite(yesil_bir, LOW);
        digitalWrite(yesil_iki, LOW);
        delay (100);
        digitalWrite(kirmizi_bir, HIGH);
        delay (100);
        digitalWrite(yesil_bir, HIGH);
        delay (100);
        digitalWrite(yesil_iki, HIGH);
        delay (100);
        digitalWrite(kirmizi_iki, HIGH);
        delay (100);
      }

      digitalWrite(kirmizi_bir, LOW);
      digitalWrite(kirmizi_iki, LOW);
      digitalWrite(yesil_bir, LOW);
      digitalWrite(yesil_iki, LOW);
    }


    else if ( device == "lamba kapat") {

      digitalWrite(kirmizi_bir, LOW);
      digitalWrite(kirmizi_iki, LOW);
      digitalWrite(yesil_bir, LOW);
      digitalWrite(yesil_iki, LOW);
    }





    else if ( device == "lamba") {

      digitalWrite(kirmizi_bir, HIGH);
      digitalWrite(kirmizi_iki, HIGH);
      digitalWrite(yesil_bir, HIGH);
      digitalWrite(yesil_iki, HIGH);
    }





    else if ( device == "sağ dön")//----------------------
    {

      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      delay(500);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }


    else if ( device == "sağa dön")//----------------------
    {

      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      delay(500);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }


    else if ( device == "sağa dön")//----------------------
    {

      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      delay(500);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }

    else if ( device == "sola dön") {

      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      delay(500);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }





    else if ( device == "az git") {

      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      delay(500);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }





    else if ( device == "az gel") {

      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      delay(500);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }







    else if ( device == "sola dön ileri git") {

      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      delay(500);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
      delay(100);
      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      delay(500);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }








    else if ( device == "sağa dön ileri git") {

      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      delay(500);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
      delay(100);
      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      delay(500);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }








    else if ( device == "korna") {

      for (int a = 0; a < 5; a++)
      {
        digitalWrite(buzzer, HIGH);
        delay(1000);
        digitalWrite(buzzer, LOW);
        delay(300);
      }
    }








    else if ( device == "siren") {
      for (int a = 0; a < 5; a++)
      {
        digitalWrite(kirmizi_bir, HIGH);
        digitalWrite(yesil_iki, HIGH);
        digitalWrite(buzzer, HIGH);
        delay(100);
        digitalWrite(kirmizi_bir, LOW);
        digitalWrite(yesil_iki, LOW);
        digitalWrite(buzzer, LOW);
        delay(100);
        digitalWrite(kirmizi_iki, HIGH);
        digitalWrite(yesil_bir, HIGH);
        digitalWrite(buzzer, HIGH);
        delay(100);
        digitalWrite(kirmizi_iki, LOW);
        digitalWrite(yesil_bir, LOW);
        digitalWrite(buzzer, LOW);
        delay(100);
      }
    }







    else if ( device == "sol park et") {

      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      delay(450);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      delay(450);
      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      delay(450);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      delay(100);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }








    else if ( device == "sağ park et") {

      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      delay(450);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      delay(450);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      delay(450);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      delay(100);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }








    else if ( device == "sağ parktan çık") {
      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      delay(450);
      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      delay(450);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      delay(450);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }





    else if ( device == "son parktan çık") {

      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      delay(450);
      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      delay(450);
      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      delay(450);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }


    else if ( device == "sol parktan çık") {

      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      delay(450);
      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      delay(450);
      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      delay(450);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
    }

    else if (device == "git gel") {

      digitalWrite(SolMotorileri, HIGH);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, HIGH);
      digitalWrite(SagMotorGeri, LOW);
      delay(500);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
      delay(100);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, HIGH);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, HIGH);
      delay(500);
      digitalWrite(SolMotorileri, LOW);
      digitalWrite(SolMotorGeri, LOW);
      digitalWrite(SagMotorileri, LOW);
      digitalWrite(SagMotorGeri, LOW);
      delay(100);
    }


    device = "";
  }
}


