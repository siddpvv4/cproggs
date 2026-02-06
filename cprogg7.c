#include <stdio.h>
void pw(int count);

int main(){
    pw(10);
    return 0;
}
void pw(int count){
    if(count ==0)
    {
        return;
    }
    printf("hello world\n");
    pw(count-1);
}