void main()
{
    int n, i, sum;
    i = 1;
    sum = 0;
    printf("Please input n: ");
    read(n); //相当于scanf(&n)	
    while(i <= n)
    {
        sum = sum + i;
        i = i + 1;	
    }	    
    printf("sum = ");
    write(sum); //相当于printf("%d", sum)
printf("\n");	
}
