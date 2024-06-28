// structure of a C program
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define B 2 //macro

// function declarations
void swapv(int a, int b);
void swapr(int* a, int* b);
int retval(int a);
// void scope();

// structures
struct car{
        int num;
        int age;
    };

void main(){
    printf("hello world\n");

    // data types / variables
    int a = 5;
    float b = 5.5;
    char c = 'a';
    bool d = true;
    double e = 1.9;
    
    // size of data types
    printf("Size of \nint: %d, float: %d, double: %d, char: %d\n", sizeof(a), sizeof(b), sizeof(e), sizeof(c));

    // constants
    const int CONSTANT = 1;

    // operators
    printf("%.2f\n",(a+b));

    // conditional statements
    if(a>2){
        printf("This is a control structure\n");
    }else{
        printf("Won't execute\n");
    }
    switch(a){
        case 3:
            printf("not going to execute\n");
            break;
        case 5:
            printf("this is a switch statement\n");
            break;
        default:
            printf("executes if none of the conditions are met\n");
    }

    // loops
    for(int i=0;i<4;i++){
        printf("loop %d of for\n",i+1);
    }
    int counter = 0;
    while(counter!=3){
        counter++;
        printf("loop %d of while\n",counter);
    }
    do{
        printf("Obviously this do-while loop will be executed at least once\n");
    }while(counter!=3);

    // function for call by value and call by reference
    int x = 2;
    int y = 3;
    printf("before swap function: x=%d    y=%d\n",x,y);
    swapv(x,y);
    printf("after call by value function: x=%d    y=%d\n",x,y);
    swapr(&x,&y);
    printf("after call by reference function: x=%d    y=%d\n",x,y);

    // return value from function
    printf("returned value from function: %d\n",retval(9));

    // arrays
    int arr[] = {4,3,2,1,4,5,6,6};
    int arr2d[2][4] = {{2,5,2,1},{5,2,3,9}};

    // strings
    char str[] = "hello, how are you?";
    printf("string: %s, string length: %d\n",str,strlen(str));

    // pointers
    int* ptra = &a; //integer pointer
    char* ptrstr = str; //pointer to first element of array
    char (*ptrarr)[20] = &str; //pointer to entire array
    //function pointers
    int* ptrn = NULL; //null pointer
    void* ptrv; //void/generic pointer, can be typecasted into any other type
    int* ptrw; //wild pointer
    int* const CONSTANT_PTR = &a; //constant pointer
    const int* ptrToConstant = &CONSTANT; //pointer to constant variable
    int** ptrdouble = &ptra; //double pointers
    int (*retval_ptr)(int) = &retval; //function pointer
    (*retval_ptr)(10); //function pointer use


    //passing functions as parameter


    // structures
    struct car bmw = {256,4};
    struct car honda = {391, 2};
    struct car maruti = {906, 1};
    printf("The bmw has no. %d and is %d years old\n",bmw.num, bmw.age);


}

// funtion definition
void swapv(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("inside call by value function: x=%d    y=%d\n",a,b);
}

void swapr(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("inside call by reference function: x=%d    y=%d\n", *a,*b);
}

int retval(int a){
    return a;
}

// The below function cannot access the variable of the main function as the variable is out of scope for this function
// void scope(){
//     printf("%d",a);
// }