/*  ��1������5���۲��ִ���ꡰscanf("%d", &k); �����ʱ��sum��k��ֵ�Ƕ��٣�     sumΪ0��kΪ5
    ��2�ڴ�main������һ�ν���fabonacci����ǰ��һ�̣��۲��������ֵ�Ƕ��٣����غ����ͣ�����ĸ�����ϣ�    i���ɶ���kΪ5��sumΪ0�����غ����ͣ����sum += fabonacci(i);
    ��3�ڴ�main������һ�ν���fabonacci�������һ�̣��۲������main������sum += fabonacci(i); �������������   ������fabonacci����
    ��4��fabonacci�����ڲ�����ִ�У��۲캯���ĵݹ�ִ�й��̡����ݹ鷽ʽʵ�ֵļ��������������������ģ����ر�ע��ʲôʱ�̽����ݹ飬Ȼ��ֱ�Ӵӵ�һ��return��䷵�ص������       ��nΪ1����2ʱ�����ݹ飬�ӵ�һ��return�ص���һ��ݹ��return
    λ��
    ��5��fabonacci�����ݹ�ִ�й����й۲����n�ı仯��������ش�Ϊʲôk��sum��fabonacci�����ڲ����ɼ���      n��i��ʼ��Ϊi-1,i-2 .....�� k��sum����������main�����У���fabnacci�����в�����
*/

#include<stdio.h> 
int main(void)
{
    int i, k;
    long sum = 0, fabonacci(int n);
    printf("Inut n:");
    scanf("%d", &k);
    for (i = 1; i <= k; i++) {
        sum += fabonacci(i);
        printf("i=%d\tthe sum is %ld\n", i, sum);
    }
    return 0;
}
long fabonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fabonacci(n - 1) + fabonacci(n - 2);
}
