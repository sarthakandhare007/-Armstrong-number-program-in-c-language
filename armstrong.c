void main()
{
    int x,a,b,r,c,y;

    printf("Enter a numbers:");
    scanf("%d",&x);

    a=x%10;
    y=x/10;
    b=y%10;
    c=y/10;


    r=(a*a*a)+(b*b*b)+(c*c*c);
    if(r==x){

        printf("It is Armstrong Number..!");
    }
    else{

        printf("It is not Armstrong Number..!");
    }



    getch();
}
