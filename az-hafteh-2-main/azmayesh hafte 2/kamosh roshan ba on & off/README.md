

 گزارش کار 

در این آزمایش هدف ما نوشتن برنامه ای می باشد که همچون آزمایش قبلی یک ورودی را دریافت کرده و بر اساس آن دستور روشن کردن LED را صادر کند و بلعکس. اما ایندفعه میخواهیم ورودی ما نه یک تک کاراکتر بلکه رشته ای از کاراکترها باشد که بدین منظور باید از نوع داده ای <b>String</b> استفاده کنیم. فرض می کنیم عبارت ورودی ' on ' ، باعث روشن شدن LED و ' OFF ' باعث خاموش شدن آن می شود.

---

 کد های برنامه 

 int ledpin=12;
     
        void setup(){

   pinMode(ledpin,OUTPUT);

    Serail.begin(9600);
}
      void loop(){

    if(Serial.available()>0){

  string value=Serial.readStringUntil('\n');

   if(value=="ON"||value=="on"||value=="H"||value=="h"){
 
  digitalWrite(ledpin,HiGH);

}
else if(value=="OFF"||value=="off"||value=="L"||value=="l"){
 
 digitalWrite(ledpin,LOW);

};
};
}


