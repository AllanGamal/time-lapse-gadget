
#define STEP_PIN_1 9
#define STEP_PIN_2 10
#define STEP_PIN_3 11
#define STEP_PIN_4 12
int step_n = 0;
void setup()
{
    pinMode(STEP_PIN_1, OUTPUT);
    pinMode(STEP_PIN_2, OUTPUT);
    pinMode(STEP_PIN_3, OUTPUT);
    pinMode(STEP_PIN_4, OUTPUT);
}

int duration(int minutes, int angle)
{
}

int sunmode(int minutes, int angle)
{
}

void loop()
{

    OneStep(false);
    delay(25);
}

void OneStep(bool dir)
{
    if (dir)
    {
        switch (step_n)
        {
        case 0:
            digitalWrite(STEP_PIN_1, HIGH);
            digitalWrite(STEP_PIN_2, LOW);
            digitalWrite(STEP_PIN_3, LOW);
            digitalWrite(STEP_PIN_4, LOW);
            break;
        case 1:
            digitalWrite(STEP_PIN_1, LOW);
            digitalWrite(STEP_PIN_2, HIGH);
            digitalWrite(STEP_PIN_3, LOW);
            digitalWrite(STEP_PIN_4, LOW);
            break;
        case 2:
            digitalWrite(STEP_PIN_1, LOW);
            digitalWrite(STEP_PIN_2, LOW);
            digitalWrite(STEP_PIN_3, HIGH);
            digitalWrite(STEP_PIN_4, LOW);
            break;
        case 3:
            digitalWrite(STEP_PIN_1, LOW);
            digitalWrite(STEP_PIN_2, LOW);
            digitalWrite(STEP_PIN_3, LOW);
            digitalWrite(STEP_PIN_4, HIGH);
            break;
        }
    }
    else
    {
        switch (step_n)
        {
        case 0:
            digitalWrite(STEP_PIN_1, LOW);
            digitalWrite(STEP_PIN_2, LOW);
            digitalWrite(STEP_PIN_3, LOW);
            digitalWrite(STEP_PIN_4, HIGH);
            break;
        case 1:
            digitalWrite(STEP_PIN_1, LOW);
            digitalWrite(STEP_PIN_2, LOW);
            digitalWrite(STEP_PIN_3, HIGH);
            digitalWrite(STEP_PIN_4, LOW);
            break;
        case 2:
            digitalWrite(STEP_PIN_1, LOW);
            digitalWrite(STEP_PIN_2, HIGH);
            digitalWrite(STEP_PIN_3, LOW);
            digitalWrite(STEP_PIN_4, LOW);
            break;
        case 3:
            digitalWrite(STEP_PIN_1, HIGH);
            digitalWrite(STEP_PIN_2, LOW);
            digitalWrite(STEP_PIN_3, LOW);
            digitalWrite(STEP_PIN_4, LOW);
        }
    }
    step_n++;
    if (step_n > 3)
    {
        step_n = 0;
    }
}
