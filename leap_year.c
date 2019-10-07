解一：
    #include<stdio.h>
    int main()
    {
    	int year=0;
    	int count=0;
    	for(year=1000;year<=2000;year++)
    	{
    		//判断闰年
    		 if(year%4==0) 
    		 {
    		 	if(year%100!=0)
    		 	{
    		 		count++;
    		 		printf("%d ",year);
    			 }
    		 }
    		  if(year%400==0)	//*************************此处一定要去掉else， 
    		 {
    		 	count++;
    		 	printf("%d ",year);
    		 }
    	}
    	printf("\n1000~2000之间闰年的个数为：%d\n",count);
     } 
解二：
    #include<stdio.h>
    int main()
    {
    	int count = 0;
    	int year = 0;
    	for (year = 1000; year <= 2000; year++)
    	{
    		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    		{
    				printf("%d ", year);
    				count++;
    		}
    	}
    	printf("\n1000~2000之间闰年的个数为： %d\n", count);
    	return 0;
    }
