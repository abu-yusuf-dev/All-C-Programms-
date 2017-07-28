#include<stdio.h>

void DFS(int x); //function. copy marle naam ta change koira niss.
int G[8][8] = {{0,1,1,1,1,0,0,0},{1,0,0,0,0,1,0,0},{1,0,0,0,0,1,0,0},{1,0,0,0,0,0,1,0},{1,0,0,0,0,0,1,0},{0,1,1,0,0,0,0,1},{0,0,0,1,1,0,0,1},{0,0,0,0,0,1,1,0}};
//2 dimentional array, a diya ki jani ekta ase, naam kheyal nai. tui nijer graph use korte chaile aeita change korte paros.
int  visited[10],n;
n = 8; //number of verdict/stopage.

void main()
{
    int i,j;

    for(i=0;i<n;i++)
        visited[i]=0; //shobgulare unvisited koira rakhlam.

    DFS(0); //recurcive function tare call kortasi.
    //0 tomo verdict thika travarcing shuru hoise. 0 tare change koira onno kisu dileo prob nai.
}

void DFS(int i)
{
    int j;
    printf("\n%d",i); //i tomo stopage ta visit kora hoise, oita print kortasi.
    visited[i]=1;

    for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1) //jodi j tomo stopage ta visited na hoy and aei position a ekta 1 thake, means connection thake.
            DFS(j); //recursion use korsi. aeita nijerei abar call kortese.
}

