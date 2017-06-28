
#include <stdio.h>

const float F_FREEZING_PT = 32.0;
const float RATIO = 1.8;

void CelsToFahr(float lb, float ub, float step, int ASC_FLAG){
    float fahr, cels;
    cels = lb;

    if(ASC_FLAG){
        while(cels <= ub){
            fahr = (cels * RATIO) + F_FREEZING_PT;
            printf("%3.0f %6.1f\n", cels, fahr); 
            cels += step;
        }
    }

    else{
        cels = ub;
        while(cels >= lb){
            fahr = (cels * RATIO) + F_FREEZING_PT;
            printf("%3.0f %6.1f\n", cels, fahr); 
            cels -= step;
        }
    }

    
}

main(){
    CelsToFahr(0.0, 300.0, 20.0, 0);
}