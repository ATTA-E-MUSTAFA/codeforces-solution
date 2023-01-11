
 //Program for codeforces team problem

#include<stdio.h>

int main(){

    int total_problems;

    scanf("%d",&total_problems);

    int count = 0;

    int p_view,v_view,t_view;  //variables for patya,vasya and tonya views

    for(int i=0;i<total_problems;i++){


    scanf("%d %d %d",&p_view,&v_view,&t_view);

    //When two or all are sure for the solution

    if((p_view + v_view + t_view)>=2){

        count++;

    }

    }

    printf("%d",count);

}
