#include <stdio.h>
//���򷵻�����
int main()
{
    int x;
    scanf_s("%d", &x);
    int digint;
    int ret=0;
    while (x > 0) {
    digint = x % 10;//ÿһ����������10�����������ڸ�λ���ϵ�����
    printf("digint=%d\n", digint);
    ret = ret * 10 + digint;  //ret��ʼ��Ϊ0���Ե�һ��Ϊ��λ�����֣��ڶ��ο�ʼÿ��*10
    printf("x=%d,digint=%d,ret=%d\n", x, digint, ret);
    x /= 10;
}
    printf("%d",ret);
    return 0;
}
