#include <stdio.h> 
typedef int bool;
#define true 1
#define false 0 
void add(double number1 , double number2 , double *result){
*result = number1 + number2;
}

void mul(double number1 , double number2 , double *result){
*result = number1 * number2;
}

int main(void){
int choose;

double number1;
double number2;
double result;

int exitflag = false;

while( exitflag == false ){
fprintf(stdout,"%s", "Scegli il tipo di operazione da eseguire:\n"); 

fprintf(stdout,"%s", "1 - Addizione\n"); 

fprintf(stdout,"%s", "2 - Moltiplicazione:\n"); 

scanf("%d", &choose);

fprintf(stdout,"%s", "Inserisci primo numero:"); 

scanf("%lf", &number1);

fprintf(stdout,"%s", "Inserisci secondo numero:"); 

scanf("%lf", &number2);

if( choose == 1 ){
add(number1 , number2 , &result);
fprintf(stdout,"%s", ""); 
fprintf(stdout,"%lf", number1); 
fprintf(stdout,"%s", "+"); 
fprintf(stdout,"%lf", number2); 
fprintf(stdout,"%s", "="); 
fprintf(stdout,"%lf", result); 
fprintf(stdout,"%s", "\n"); 

}

if( choose == 2 ){
mul(number1 , number2 , &result);
fprintf(stdout,"%s", ""); 
fprintf(stdout,"%lf", number1); 
fprintf(stdout,"%s", "*"); 
fprintf(stdout,"%lf", number2); 
fprintf(stdout,"%s", "="); 
fprintf(stdout,"%lf", result); 
fprintf(stdout,"%s", "\n"); 

}

fprintf(stdout,"%s", "Cosa vuoi fare? Scegli un opzione\n"); 

fprintf(stdout,"%s", "0 - Altra operazione\n"); 

fprintf(stdout,"%s", "1 - Uscire:\n"); 

scanf("%d", &choose);

if( choose == 1 ){
exitflag = true;
}

}

fprintf(stdout,"%s", "Ciao!\n"); 

}