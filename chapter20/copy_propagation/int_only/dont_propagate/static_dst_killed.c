int x;

int update_x()
{
    x = 4;
}

int main()
{
    x = 3;
    update_x();
    return x; // can't propagte b/c it's static
}