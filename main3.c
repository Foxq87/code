#include <stdio.h>


int main()
{
    int a;
    char b,c,d,e,f,g,h,i;
    int wallet=0;
    int ttl=0;

    str:
    printf("Welcome!\nif you want to order something please answer the questions below\n[1]-Hamburger Menu\n[2]-Pizza Menu\n[3]-A Menu\n[4]-B Menu\n");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
            printf("Hamburger Menu is 8$ do you want to continue? y/n ");
            scanf("%c",&b);
            
            if(b=='y'||b=='Y')
            {
                wallet+=8;
                hmb:

                printf("Your order has been received! Would you like to continue ordering? y/n ");
                scanf("%c",&f);

                if(f=='y'||f=='Y')
                {
                    goto str;
                }

                else if(f=='n'||f=='N')
                {
                    goto end;
                }

                else 
                {
                    printf("please use valid statements");
                    goto hmb;
                }
                
            }

            else if(b=='n'||b=='N')
            {
                printf("your checkout has been cancelled");
                goto str;
            }

            else
            {
                printf("please use valid statements");
                goto str;
            }

        break;

        case 2:
            printf("Pizza Menu is 9$ do you want to continue? y/n");
            scanf("%c",&c);

            if(c=='y'||c=='Y')
            {
                wallet+=9;
                piz:
                printf("Your order has been received! Would you like to continue ordering? y/n ");
                scanf("%c",&g);

                    if(g=='y'||g=='Y')
                    {
                        goto str;
                    }

                    else if(g=='n'||g=='N')
                    {
                        goto end;
                    }

                    else
                    {
                        printf("Please use valid statements");
                        goto piz;
                    }
                    
                    
            }

            else if(c=='n'||c=='N')
            {
                printf("your checkout has been cancelled");
                goto rend;
            }

            else
            {
                printf("please use valid statements");
                //
            }

        break;

        case 3:
            printf("a Menu is 6$ do you want to continue? y/n");
            scanf("%c",&d);

            if(d=='y'||d=='Y')
            {
                wallet+=9;
                    printf("Your order has been received! Would you like to continue ordering? y/n ");
                    scanf("%c",&i);

                    if(h='y'||h=='Y')
                    {
                        goto str;
                    }

                    else if(h=='n'||h=='N')
                    {
                        goto end;
                    }

                    else
                    {
                        printf("Please use valid statements");
                        goto str;
                    }
                    
            }

            else if(d=='n'||d=='N')
            {
                printf("your checkout has been cancelled");
                goto rend;
            }

            else
            {
                printf("please use valid statements");
            }   

        break;

        case 4:
            printf("b Menu is 10$ do you want to continue? y/n");
            scanf("%c",&e);

            if(e=='y'||e=='Y')
                {
                    wallet+=10;
                    printf("Your charge is 10$ please pay to the cashier");
                    
                }

            else if(e=='n'||e=='N')
            {
                printf("your checkout has been cancelled");
                goto rend;
            }

            else
            {
                printf("please use valid statements");
            }

        break;

        default:
            printf("Please use valid statements");
            goto str;

        break;
    }
    end:
    
    printf("Your checkout is %d",wallet);

    rend:
    return 0;
}
