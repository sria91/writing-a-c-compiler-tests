int target() {
  // look for: no conditional jumps, no cmp instruction
  int x = 0 && 0;
  return x;
}

int main() { return target(); }