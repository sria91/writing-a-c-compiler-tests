int foo(int a) {
    return 0;
}

int main() {
    /* A function argument must be an expression, not a declaration */
    return foo(int a);
}