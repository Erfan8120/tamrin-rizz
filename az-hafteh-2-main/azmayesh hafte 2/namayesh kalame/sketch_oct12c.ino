void setup() {
    Serial.begin(9600); // تنظیم نرخ تبادل داده بر حسب بیت بر ثانیه که باید مطابق نرخ تنظیم شده در سریال مانیتور باشد
}

void loop() {
    Serial.println("microprocessor!");  // چاپ یک پیغام بر روی سریال مانیتور و رفتن به خط بعدی
    delay(1000);  
}