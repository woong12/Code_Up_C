/* 1265

#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= 9; i++) {
        printf("%d*%d=%d\n", a, i, a*i);
    }
}

----------*/

/* 1266

#include <stdio.h>

int main () {
    int n, a, sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("%d", sum);
}

----------*/

/* 1267

#include <stdio.h>

int main () {
    int n, a, sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &a);
        if (a % 5 == 0) {
        sum += a;
        }
    }
    printf("%d", sum);
}

----------*/

/* 1268

#include <stdio.h>

int main () {
    int n, a, sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &a);
        if (a % 2 == 0) {
        sum += 1;
        }
    }
    printf("%d", sum);
}

----------*/

/* 1269

#include <stdio.h>

int main () {
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);

    for(int i = 1; i < n; i ++) {
			a = a * b + c;
		}
    printf("%d", a);
}

----------*/

/* 1270

#include <stdio.h>

int main () {
    int a, sum = 0;
    scanf("%d", &a);
    
    for(int i = 0; i <= a; i++) {
        if(i % 10 == 1) {
            sum += 1;
        }
    }
    printf("%d", sum);
}

----------*/

/* 1271



----------*/

/* 1272



----------*/

/* 1273



----------*/

/* 1274



----------*/

/* 1275



----------*/

/* 1276



----------*/

/* 1277



----------*/

/* 1278



----------*/

/* 1279



----------*/

#include <stdio.h>

int main () {
    int a, sum = 0;
    scanf("%d", &a);
    
    for(int i = 0; i <= a; i++) {
        if(i % 10 == 1) {
            sum += 1;
        }
    }
    printf("%d", sum);
}