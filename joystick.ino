
void setup()
{
  pinMode(A0, INPUT);         //اردوینو A0 ورودی کردن پین//
  pinMode(A1, INPUT);         //اردوینو A1 ورودی کردن پین//
  pinMode(10, OUTPUT);      //خروجی کردن پین سمت جلو//
  pinMode(11, OUTPUT);      //خروجی کردن پین سمت عقب//
  pinMode(12, OUTPUT);      //خروجی کردن پین سمت راست//
  pinMode(13, OUTPUT);      //خروجی کردن پین سمت چپ//

}
void loop()
{
  int VRx = analogRead(A0);   //VRx که عددی بین 0 تا 1023 می تواند باشد و ریختن ان در متغیر A0
  int VRy = analogRead(A1);   //VRy که عددی بین 0 تا 1023 می تواند باشد و ریختن ان در متغیر A1 خواندن مقدار ولتاژ انالوگ روی پین//


  if (VRx >= 550) {
    digitalWrite(13, HIGH);

  } else {
    digitalWrite(13, LOW);
  }
  if (VRx <= 500) {
    digitalWrite(12, HIGH);

  } else {
    digitalWrite(12, LOW);
  }


  if (VRy >= 550) {
    digitalWrite(11, HIGH);

  } else {
    digitalWrite(11, LOW);
  }
  if (VRy <= 500) {
    digitalWrite(10, HIGH);
  }
  else {
    digitalWrite(10, LOW);

  }

}
