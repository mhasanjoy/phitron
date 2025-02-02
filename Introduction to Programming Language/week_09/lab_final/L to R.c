#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>

void solve();
bool* sieve_of_eratosthenes(int n);

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solve();

    return 0;
}

void solve()
{
    int l, r, i;
    scanf("%d %d", &l, &r);
    bool *prime = sieve_of_eratosthenes(r);

    for(i = l; i <= r; i++)
        if(prime[i])
            printf("%d ", i);
    printf("\n");

    free(prime);
}

bool* sieve_of_eratosthenes(int n)
{
    bool *prime = (bool*) malloc((n + 1) * sizeof(bool));

    int i, j;
    for(i = 0; i <= n; i++)
        prime[i] = true;

    for(i = 2; i <= sqrt(n); i++)
        if(prime[i])
            for(j = i * i; j <= n; j += i)
                prime[j] = false;

    return prime;
}
