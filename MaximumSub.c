#include <stdio.h>
//To count the maximum sum of all the subsequences from a fixed sequence.
//TODO:fix the error which occurs when the max subsequence follows some zeros.
int sum_is_zero(int head, int rear, int *n){
    int *p, sum = 0;
    for(p = n + head; p - n <= rear; p++){
        sum += *p;
    }
    return !sum;
}

int main()
{
    int i, N, max = 0, sum = 0;
    scanf("%d", &N);
    int mhead = 0, mrear = N - 1, shead = 0, srear = 0;//To record head and rear
    int n[N];

    for(i = 0; i < N; i++){
        scanf("%d", &n[i]);
        sum += n[i];
        srear = i;
        if(sum == n[i] && n[shead]){
            shead = i;
        }
        if(sum > max || (sum == 0 && max == 0)){
            max = sum;
            mhead = shead;
            mrear = srear;
        }else if(sum < 0){
            sum = 0;     
        }
    }

    //printf("%d", max > 0 ? max : 0);
    if(max <= 0 && !sum_is_zero(mhead, mrear, n)){
        mhead = 0;
        mrear = N -1;
        max = 0;
    }
    printf("%d %d %d", max, n[mhead], n[mrear]);
    return 0;
}