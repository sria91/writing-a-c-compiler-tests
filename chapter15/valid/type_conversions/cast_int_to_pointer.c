/* Test that we can explicitly convert integers to pointers */

int main() {
    int *a = (int *) 10l;
    long b = 10;
    return (a == (int *) b);
}