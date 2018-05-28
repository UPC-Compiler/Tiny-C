void main()
{
  int x, y;
  int z;
  printf("Please input x and y :\n");
  read(x); //相当于scanf(&n)
  read(y);
  z = ( x + y)*2 / 3;
  printf("z = ( x + y ) * 4 / 3 = ");
  write(z);
  printf("\n"); //相当于printf("%d", sum)
}
