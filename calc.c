#include <stdio.h>

double add(double a, double b) {
    int res = a + b;
    if( res < 0 ){
      res = 0;
    }
    return res;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

double div(double a, double b){
    return a / b;
}

double calc(char* str){
    double num1, num2;
    char op;

   if(sscanf(str, "%lf %c %lf", &num1, &op, &num2) !=3){
      fprintf(stderr, "syntax wrong\n");
      return 0;
   }

    switch(op){
      case '+':
        return num1 + num2;
      case '-':
          return num1 - num2;
      case '*':
          return num1 * num2;
      case '/':
          if (num2 == 0.0) {
              fprintf(stderr, "worng：divid 0 error\n");
              return 0;
          }
            return num1 / num2;
        default:
            fprintf(stderr, " not support: %c\n", op);
            return 0;
    }
}
