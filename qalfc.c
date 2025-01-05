/* FLOAT NUMBER*/
float fsum(float a, float b)
{
    return a + b;
}

float fsub(float a, float b)
{
    return a - b;
}

float fmol(float a, float b)
{
    return a * b;
}

float fdiv(float a, float b)
{
    return a / b;
}

float fexpp(float a, float b) {
    float i, result = 1;
    for (i = 0; i < b; i++)
        result *= a;
    return result;
}

double dsum(double a, double b)
{
    return a + b;
}

double dsub(double a, double b)
{
    return a - b;
}

double dmol(double a, double b)
{
    return a * b;
}

double ddiv(double a, double b)
{
    return a / b;
}

double dexpp(double a, double b) {
    double i, result = 1;
    for (i = 0; i < b; i++)
        result *= a;
    return result;
}

double sqrot(double a)
{
    double b=a/3;
    int c;
    if(a <= 0) return 0;
    for (c=0; c<32; c++)
    b = (b + a / b) / 2;
    return b;
    
}


/* INTEGER NUMBER */

int sum(int a, int b)
{
    return a + b;
} 

int sub(int a, int b)
{
    return a - b;
}

int mol(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int expp(int a, unsigned int b) {
    int i, result = 1;
    for (i = 0; i < b; i++)
        result *= a;
    return result;
}

int rest(int a, int b)
{
    return a % b;
}

long lsum(long a, long b)
{
    return a + b;
} 

long lsub(long a, long b)
{
    return a - b;
}

long lmol(long a, long b)
{
    return a * b;
}

long ldiv(long a, long b)
{
    return a / b;
}

long lexpp(long a, unsigned long b) {
    long i, result = 1;
    for (i = 0; i < b; i++)
        result *= a;
    return result;
}

long lrest(long a, long b)
{
    return a % b;
}

short ssum(short a, short b)
{
    return a + b;
} 

short ssub(short a, short b)
{
    return a - b;
}

short smol(short a, short b)
{
    return a * b;
}

short sdiv(short a, short b)
{
    return a / b;
}

short sexpp(short a, unsigned short b) {
    short i, result = 1;
    for (i = 0; i < b; i++)
        result *= a;
    return result;
}

short srest(short a, short b)
{
    return a % b;
}

