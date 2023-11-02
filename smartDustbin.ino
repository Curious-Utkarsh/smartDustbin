#include <ESP32Servo.h>
#include <WiFi.h>
#include <HTTPClient.h>

const char * ssid = "smartDustbin";
const char * password = "smartDustbin2023";

String server = "http://maker.ifttt.com";
String eventName = "smartDustbin";
String IFTTT_Key = "hGmxvUf-oy1Sdeg4vntBoMPtjIaAvQKibKEcLHCLau8";
String IFTTTUrl="http://maker.ifttt.com/trigger/smartDustbin/with/key/hGmxvUf-oy1Sdeg4vntBoMPtjIaAvQKibKEcLHCLau8";

#define servoPin 23
#define moistSensor 19
#define gasSensor 18

//Ultrasonic Cap
#define echoCap 13
#define trigCap 21

int ping_Travel_Time_Cap;
int distance_Cap;

//Ultrasonic Bin
#define echoBin 5
#define trigBin 22

int ping_Travel_Time_Bin;
int distance_Bin;

int gasVal = 0;
int moistVal = 0;

bool binStatus = false;
String gasStatus = "";
String moistStatus = "";
float binLevel = 0.0;
String binLvl = "";

Servo myServo;

void setup() 
{
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Hurray, Connected !!!");
  
  pinMode(trigCap,OUTPUT);
  pinMode(echoCap,INPUT);

  pinMode(trigBin,OUTPUT);
  pinMode(echoBin,INPUT);
  
  myServo.attach(servoPin);
  myServo.write(100); // Bin Close
  delay(1000);
}

void loop() 
{
  ultraBin();
  checkRange();
}
