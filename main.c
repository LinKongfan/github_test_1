#include<stdio.h>

int main()
{
    int n;
    printf("请输入一个数字，作为数组的长度：");
    fflush(stdout);
    scanf("%d",&n);

    int num[n];
    printf("请输入数组元素，空格隔开：\n");
    fflush(stdout);


    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d",&num[i]);
    }



    int a;
    for(int i = 0 ; i < n ; i ++)
    {
        while(num[num[i]] != num[i])
        {
            int a = num[i];
            int b = num[num[i]];
            num[i] = b;
            num[a] = a;
        }

        if(num[i] != i) a = num[i];
    }

    printf("%d",a);
    fflush(stdout);

    return 0;

}
//SFZAF AF A
//ssaD
