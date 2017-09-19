class DigitalPin
{
  private:
    int pin;

  public:

    DigitalPin(int pin, int MODE)
    {
      this->pin = pin;
      pinMode(pin, MODE);
    }
    
    int isHigh()
    {
      return digitalRead(pin);
    }
  
    int isLow()
    {
      return digitalRead(pin);
    }
  
    void high()
    {
      digitalWrite(pin, HIGH);
    }
  
    void low()
    {
      digitalWrite(pin, LOW);
    }
};
