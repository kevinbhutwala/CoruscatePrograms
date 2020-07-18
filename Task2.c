#include <stdio.h>
 
int main()
{
    int n,i,j,s;
	
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&j);
        if(j%12==1||j%12==0) 						//Mapping the Window Seat
        {
            if(j%12==0)				
            {
                s=j-11;
                printf("%d Window Seat\n",s);
            }
            else
            {
                s=j+11;
                printf("%d Window Seat\n",s);
            }
            
        }
        else if(i%12==6||j%12==7) 					
        {
            if(j%12==6)
            {
                s=j+1;
                printf("%d Window Seat\n",s);
            }
            else
            {
                s=j-1;
                printf("%d Window Seat\n",s);
            }
        }
        else if(j%12==5||j%12==8)						//Mapping the Middle Seat
        {
            if(j%12==5)
            {
                s=j+3;
                printf("%d Middle Seat\n",s);
            }
            else
            {
                s=j-3;
                printf("%d Middle Seat\n",s);
            }
        }
        else if(j%12==2||j%12==11)						
        {
            if(j%12==2)
            {
                s=j+9;
                printf("%d Middle Seat\n",s);
            }
            else
            {
                s=j-9;
                printf("%d Middle Seat\n",s);
            }
        }
        else if(j%12==3||j%12==10)							//Mapping the Aisle Seat
        {
            if(j%12==3)
            {
                s=j+7;
                printf("%d Aisle Seat\n",s);
            }
            else
            {
                s=j-7;
                printf("%d Aisle Seat\n",s);
            }
        }
        else
        {
            if(j%12==4)
            {
                s=j+5;
                printf("%d Aisle Seat\n",s);
            }
            else
            {
                s=j-5;
                printf("%d Aisle Seat\n",s);
            }
       }
            }
    return 0;
}