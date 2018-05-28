void main()
{
    int n, i, sum;
    sum = 0;
    printf("Please input n: ");
    read(n); //相当于scanf(&n)	
    for(i=1; i<=n; i=i+1)	
    {		
        sum = sum + i;	
    }	    
    printf("sum = ");
    write(sum); //相当于printf("%d", sum)
printf("\n");	
}
