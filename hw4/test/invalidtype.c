typedef int VOID;
typedef float VOID;
typedef void VOIDD;

int main() {
    int b;
    float c;
    INT d; /* error INT */
    FLOAT e; /* error FLOAT */
    VOID f;
    VOIDD g; /* error : var of type void*/
    VOID h[6];
    VOIDD i[3][2]; /* error : var of void array */
    return 0;
}
