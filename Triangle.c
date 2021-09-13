//standard I/O
#include<stdio.h>
//console I/O
#include<conio.h>

//print after space bar
void space_barin(int pos)
{
    int cnt=1;
    while(cnt<=pos){

        if(cnt==pos)
            printf("*");
        else
            printf(" ");
        cnt++;
    }
    printf("\n");

}

void space_barout(int pos,int n)
{
    int cnt=1;
    while(cnt<=pos){

        if(cnt==pos)
            printf("*");

        //print at nth and n-ith position where i keeps increasing by 2
        else if(cnt==pos-n){
        	printf("*");        	                                                        
        }    
        else
            printf(" ");
        cnt++;
    }
    printf("\n");

}

void space_barfill(int pos)
{

    int cnt=1;
    while(cnt<=pos){
        printf("*");
        cnt++;
    }
    printf("\n");
}



void main(){
    //clrscr()

    int ht,check=0,line_end,i = 2; 
    printf("Enter the height of triangle: ");
    scanf("%d",&ht);
    line_end = ((ht*2)-1);
    
    while(ht<=line_end){

        check++;

        if(check==1)
            space_barin(ht);
        else{
            if(ht!=line_end){
                space_barout(ht,i);
                i+=2;
            }
            else
                space_barfill(ht);
        }

        ht++;
    }

    //space_barin(idx);
    //space_barout(idx);
    //space_barfill(idx);

    getch();
}