/* You cannot declare a function that returns a function.
   Our implementation will reject this during parsing.
   Because the C grammar permits this declaration,
   some compilers may reject it during type checking.
*/
int foo()();

int main() {
    return 0;
}