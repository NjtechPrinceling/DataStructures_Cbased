#include <stdio.h>

int main(int argc, char const *argv[])
{
    double cost;
    char a[2];
	while(scanf("**** %lf %s��", &cost, a)){
        printf("�۸�Ϊ:%d,�ۿ�Ϊ%s\n",cost,a);
        getchar();
    }

    return 0;
}
