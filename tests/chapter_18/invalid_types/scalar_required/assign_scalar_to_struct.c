struct s {
  int a;
};

struct s x = {1};

int main(void) {
  x = 2; // can't assign scalar to struct
  return 0;
}