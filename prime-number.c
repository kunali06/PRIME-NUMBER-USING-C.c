void main(){
int n,i,isprime=1;
printf("enter number:\n");
scanf("%d",&n);

if(n<=1)
{
 isprime=0;
}
else
{
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
}
if(isprime==1)
printf("%d is prime number.\n",n);
else
printf("%d is not prime number.\n",n);
getch();
}
