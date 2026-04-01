//Utara
const int utaraMerah = 13;
const int utaraKuning = 12;
const int utaraHijau = 11;

//Timur
const int baratMerah = 10;
const int baratKuning = 9;
const int baratHijau = 8;

//Selatan
const int selatanMerah = 7;
const int selatanKuning = 6;
const int selatanHijau = 5;

//Barat
const int timurMerah = 4;
const int timurKuning = 3;
const int timurHijau = 2;

void setup() {
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void aktifkanSimpang(int pinMerah, int pinKuning, int pinHijau) {
  digitalWrite(pinMerah, LOW);

  digitalWrite(pinHijau, HIGH);
  delay(5000); 
  digitalWrite(pinHijau, LOW);

  for (int i = 0; i < 3; i++) {
    digitalWrite(pinKuning, HIGH);
    delay(300); 
    digitalWrite(pinKuning, LOW);
    delay(300); 
  }
  
  digitalWrite(pinKuning, HIGH);
  delay(2000); 
  digitalWrite(pinKuning, LOW);

  digitalWrite(pinMerah, HIGH);
}

void semuaMerah() {
  digitalWrite(utaraMerah, HIGH);
  digitalWrite(timurMerah, HIGH);
  digitalWrite(selatanMerah, HIGH);
  digitalWrite(baratMerah, HIGH);
  delay(1000);
  
  digitalWrite(utaraKuning, LOW); digitalWrite(utaraHijau, LOW);
  digitalWrite(timurKuning, LOW); digitalWrite(timurHijau, LOW);
  digitalWrite(selatanKuning, LOW); digitalWrite(selatanHijau, LOW);
  digitalWrite(baratKuning, LOW); digitalWrite(baratHijau, LOW);
}

void loop() {
  semuaMerah();
  aktifkanSimpang(utaraMerah, utaraKuning, utaraHijau);
  aktifkanSimpang(timurMerah, timurKuning, timurHijau);
  aktifkanSimpang(selatanMerah, selatanKuning, selatanHijau); 
  aktifkanSimpang(baratMerah, baratKuning, baratHijau); 
}
