#include <stdio.h>
int main()
{
    int l,w;
    printf("请输入长和宽：");
    scanf("%d %d",&l,&w);
    int perimeter = 2*(l+w);
    int area = l*w;
    printf("周长=%d\n",perimeter);
    printf("面积=%d\n",area);
    return 0;
}
