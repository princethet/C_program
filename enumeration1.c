// an example program to demonstrate working of enum in C
/* #include<stdio.h>
enum week{Mon,Tue,Wed,Thur,Fri,Sat,Sun};
int main()
{   
    enum week day;
    day = Wed;
    printf("%d",day);
    return 0;
}
 */

#include<stdio.h>
enum State {WORKING=2, FAILED, FREEZED};
enum State currState =2;

enum State FindState(){
    return currState;
}
int main(){
    (FindState() == WORKING)? printf("WORKING"):printf("NOT WORKING");
    return 0;
}