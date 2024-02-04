// تعريف توصيل اللمبات
int lamp1 = 2; // اللمبة الأولى
int lamp2 = 3; // اللمبة الثانية
int lamp3 = 4; // اللمبة الثالثة
int count = 0; // عداد الرعشات
int count_of_onOff = 7; // عدد الرعشات
void setup()
{
    // تعيين أوضاع التوصيل
    pinMode(lamp1, OUTPUT);
    pinMode(lamp2, OUTPUT);
    pinMode(lamp3, OUTPUT);

    // تشغيل اللمبة الأولى
  digitalWrite(lamp1, HIGH);
}
// اللوب الرئيسية لتشغيل البرنامج
void loop()
{
  digitalWrite(lamp3, LOW);
// لوب لعمل الرعشات و التحكم فيها 
    while(count <= count_of_onOff )
    {
        // إيقاف تشغيل اللمبة الثانية (ترعيش)
        digitalWrite(lamp2, LOW);
        delay(1000);
        digitalWrite(lamp2, HIGH);
        count++;
    }
  // لايقاف تشغيل الاولي و التانية مع  تشغيل التالتة
    digitalWrite(lamp1, LOW);
    digitalWrite(lamp2, LOW);
    digitalWrite(lamp3, HIGH);

}
