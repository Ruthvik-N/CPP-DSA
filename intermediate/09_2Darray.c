# include <stdio.h>

void storeTable(int tables[2][10],int n);

int main(){
    int n = 10;
    int tablearr[2][10];

    for (int i = 0; i < n ; i++)
    {
       tablearr[0][i] = 2*(1+i);
    }
    for (int i = 0; i < n ; i++)
    {
       tablearr[1][i] = 3*(1+i);
    }
    storeTable(tablearr, n);
}

void storeTable(int tables[2][10], int n) {
    for ( int i = 0;i <= 1 ; i++){
    for(int j = 0 ; j < n; j++){
        printf("%d ", tables[i][j]);
    }
    printf("\n");
}
}