int stat;

int target(int *stat_ptr) {
  stat = 10;
  *stat_ptr = 8;
  return stat;
}

int main() {
  int *ptr = &stat;
  return target(ptr);
}