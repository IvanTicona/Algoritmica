# Capitulo 5: Programación Dinámica

Subproblemas

Optimizar = min, max

2 Enfoques:

1. Top-Down (Memoization) => Recursividad, Caché
2. Bottom-Up (Tabulation) => Iterativo, Desde el caso base hasta el caso general


### Top-Down

```cpp
int dp[1000]; //Actua como una caché
memset(dp, -1, sizeof(dp));
```

### Bottom-Up

```cpp
int dp[1000];
memset(dp, -1, sizeof(dp));
//caso base
dp[0] = 0;
dp[1] = 1;
for(int i = 2; i < 1000; i++){
    dp[i] = dp[i-1] + dp[i-2];
}
```


