#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

typedef struct {
    char valor[10];
} Str;

main(){
    char valor[3]={"um"};

    Str v={"123"};

    int i=0;
    while (i<=strlen(v.valor)){
        cout<<i<<"--"<<v.valor[i]<<endl;
        i++;
    }

cout<<"---------";

int j=0;
while (valor[j]!='\0'){
    cout<<"j ="<<j<<"- "<<valor[j]<<endl;
    j++;
}

cout<<j;

}

// i = 3 e j = 1