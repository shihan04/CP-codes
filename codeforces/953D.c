#include<stdio.h>
int main()
{
    char s[6][9];
    int i,j,a[6][6]={{3,3,4,4,3,3},{3,3,4,4,3,3},{2,2,3,3,2,2},{2,2,3,3,2,2},{1,1,2,2,1,1},{1,1,2,2,1,1}},m=0,x=0,y=0;
    for(i=0;i<6;i++){
        scanf("%s",s[i]);
        if(s[i][0]=='.' && a[i][0]>m){
            m=a[i][0];
            x=i;
            y=0;
        }
        if(s[i][1]=='.' && a[i][1]>m){
            m=a[i][1];
            x=i;
            y=1;
        }
        if(s[i][3]=='.' && a[i][2]>m){
            m=a[i][2];
            x=i;
            y=3;
        }
        if(s[i][4]=='.' && a[i][3]>m){
            m=a[i][3];
            x=i;
            y=4;
        }
        if(s[i][6]=='.' && a[i][4]>m){
            m=a[i][4];
            x=i;
            y=6;
        }
        if(s[i][7]=='.' && a[i][5]>m){
            m=a[i][5];
            x=i;
            y=7;
        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<8;j++){
            if(i==x&&j==y) printf("P");
            else printf("%c",s[i][j]);
        }
        printf("\n");
    }
}
