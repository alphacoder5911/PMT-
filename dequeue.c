#include <stdio.h>
main()
{
    char dku;
    int x,respo;
    do
    {
    printf("enter 1:NQFRONT\n2:NQREAR\n3:DQFRONT\n4:DQREAR\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
                printf("ENTETR THE CHARECTER ");
                scanf(" %c",&dku);
                enqfront(dku);
                break;
        case 2:
                printf("ENTER THE ELEMENT TO BE EQ FORM REAR");
                scanf("%d",&dku);
                enqrear(dku);
                break;
        case 3:
                dqfront();
                break;
        case 4:
                dqrear();
                break;
        case 5:
                display();
                break;
        default:
                break;
    }
    
    printf("DO U WANT TO PERFORM THE ABOVE OPS AGAIN.IF YES PRESS 1 OR ANY OTHER INTEGER KEY");
    scanf("%d",&respo);
                
    
    }while(respo==1);
}
