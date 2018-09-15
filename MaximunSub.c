#include <stdio.h>
//To count the maxmium sum of all the subsequences from a fixed sequence.
int main()
{
    int i, N, max = 0, sum = 0;
    scanf("%d", &N);
    int n[N];

    for(i = 0; i < N; i++){
        scanf("%d", &n[i]);
        sum += n[i];
        if(sum > max){
            max = sum;
        }else if(sum < 0){
            sum = 0;     
        }
    }

    printf("%d", max > 0 ? max : 0);
    return 0;
}