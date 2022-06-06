#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]){
    //printf("%s\n",argv[1]);
    FILE *fp = fopen(argv[1],"r");
    int M;
    fscanf(fp,"%d\n",&M);
    //printf("%d",M);
    int i=0;
    while(i<M){
        i++;
        char command[60];
        int var1,var2,result;
        fscanf(fp,"%s %d %d\n",command,&var1,&var2);
        if (strcmp(command,"quadratic") == 0){
            solve_quadratic(var1,var2);
        }
        else if (strcmp(command,"triples") == 0){
            find_triples(var1,var2);
        }
        else{
            modular_sum(var1,var2);
        }
    }
    return 0;
}
