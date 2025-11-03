#include<stdio.h>
#include<stdlib.h>

main(){
    int i,N;
    float *height;
    float sum=0,avg;
    printf("input the number of student:\n");
    scanf("%d",&N);
    height=(float*)malloc(N*sizeof(float));
    printf("input hirght for %d students\n");
    for(i=0;i<N;i++){
        scanf("%d",&height[i]);

    }
     for(i=0;i<N;i++){
        sum+=height[i];
        avg=sum/(float)N;
        printf("average of height =%f\n",avg);

    }
}
