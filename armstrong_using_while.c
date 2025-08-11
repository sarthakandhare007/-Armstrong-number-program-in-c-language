void main()
{


int x,y,t,s=0;

printf("Enter a Number:");
scanf("%d",&x);
y=x;

while(y!=0)
{
t=y%10;
s=s+(t*t*t);
y=y/10;

}
if(x==s)
{
printf("it is Armstrong number");

}
else{
printf("it is not Armstrong number");
}

}