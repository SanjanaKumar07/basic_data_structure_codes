#include<stdio.h>
#include<stdlib.h>

//Program to show a basic structure and how to acces its members.

struct Point{
    int x,y;
    char ch;
    int* pointer;
};

int main(){
    struct Point p1 = {1,0,'a'};
    //the pointer points to nil.
    printf("%d %d %c %p",p1.x,p1.y,p1.ch, p1.pointer);
}