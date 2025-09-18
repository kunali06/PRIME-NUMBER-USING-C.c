void main(){
int i,j,isprime;

printf("prime numbers between 1-100 are:\n");

for(i=2;i<=100;i++)
{
    isprime=1;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==1)
    {
        printf("%d\n",i);
    }
}
getch();
}
