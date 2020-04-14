#include <stdlib.h>
#include "prototipos.h"

int suma(int num1,int num2)
{
int resultado;
resultado=num1+num2;

return resultado;


}
int resta(int num1, int num2){
int resultado;
resultado=num1-num2;
return resultado;


}
float division(int num1, int num2){
float resultado;
resultado=(float)num1/(float)num2;
return resultado;
}

int multiplicacion(int num1,int num2){
int resultado;
resultado=num1*num2;
return resultado;

}
int factorialA(int num1){
    long long fact;

    if(num1<=0){
        fact = -1;
    }
    else{
        if(num1 == 1){
        return 1;}
        fact = num1*factorialA(num1-1);
    }

      return fact;
}
int factorialB(int num2){
    long long fact;

    if(num2<=0){
        fact = -1;
    }
    else{
    if(num2 == 1){
        return 1;}
        fact = num2*factorialB(num2-1);
    }

      return fact;
}
