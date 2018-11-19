#include <iostream>
void PaintC()
{
	int num;
	std::cin>>num;
	int c=num-1;
	for(int i=0;num>i;i++)
	{
		for(int j=0;num>j;j++)
		{
			if(i==j)
			{
				std::cout<<"*";
			}
			else if(j==c)
			{
				if(c!=num/2)
				{
					std::cout<<"*";
				}
			}
			else std::cout<<" ";
		}
		c=c-1;
		std::cout<<"\n";
	}
}
void PaintHD()
{
	int num;
	std::cin>>num;
for (int i=0; i<num/2; i++)
    {
        for (int j=0; j<num; j++)
        {
        	if (j>=num/2-i && j<=num/2+i)
        	{
            	if (j>num/2-i && j<num/2+i)
            	{
                	std::cout<<" ";
            	}	
            	else std::cout<<"*";
       		}
            else std::cout<<" ";
        }
        std::cout<<"\n";
    }
    for (int i=num/2; i>=0; i--)
    {
        for (int j=0; j<num; j++)
        {
            if (j>=num/2-i && j<=num/2+i)
            {
                if(j>num/2-i && j<num/2+i)
				{
					std::cout<<" ";
				}
				else std::cout<<"*";
            }
            else std::cout<<" ";
        }
        std::cout<<"\n";
    }
}
void PaintFD()
{
	int num;
    std::cin>>num;
    for (int i=0; i<num/2; i++)
    {
        for (int j=0; j<num; j++)
        {
            if (j>=num/2-i && j<=num/2+i)
            {
                std::cout<<"*";
            }
            else std::cout<<" ";
        }
        std::cout<<"\n";
    }
    for (int i=num/2; i>=0; i--)
    {
        for (int j=0; j<num; j++)
        {
            if (j>=num/2-i && j<=num/2+i)
            {
                std::cout<<"*";
            }
            else std::cout<<" ";
        }
        std::cout<<"\n";
    }
}
int main() 
{
	int a;
	std::cout<<"1) Cross\n"<<"2) Hollow Diamond\n"<<"3) Filled Diamond\n";
	std::cin>>a;
	switch(a)
	{
		
		case 1: 
			PaintC();
			break;
		case 2:
			PaintHD();
			break;
		case 3: 
			PaintFD();
			break;
	}
	return 0;
}

