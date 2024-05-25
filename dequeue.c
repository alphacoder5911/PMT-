#include <stdio.h>
#include<stdlib.h>
int n = 10;
int dq[10];
int f = -1, r = -1;

void enqfront(char c) {
    if ((f == 0 && r == n - 1) || (f == r + 1)) {
        printf("Queue is full\n");
        return;
    } else if (f == -1 && r == -1) {
        f = r = 0;
    } else if (f == 0) {
        f = n - 1;
    } else {
        f--;
    }
    dq[f] = c;
}
else if(f==-1 && r==-1)
{
    f=r=0;
    dq[r]=c;
}
else if(r==n-1)
{
    r=0;
    dq[r]=c;

}
else{
    r++;
    dq[r]=c;
}
}

void dqfront()
{
if(f==-1 && r==-1)
{
printf("KHAALI HAI RE BABA");
}
else if(f==r)
{
printf("deleted element %c",dq[f]);
f=-1;
r=-1;

}
else if(f==n-1)
{
    printf("deleted element %c ",dq[f]);
    f=0;

}
else{
    printf("DELETED ELEMENT %c",dq[f]);
    f++;
    
}

}

void display() {
    if (f == -1 && r == -1) {
        printf("Queue is empty\n");
        return;
    }
    int i = f;
    do {
        printf("%c ", dq[i]);
        i = (i + 1) % n;
    } while (i != r);
    printf("%c\n", dq[r]);
}

void enqrear(char c) {
    if ((f == 0 && r == n - 1) || (f == r + 1)) {
        printf("Queue is full\n");
        return;
    } else if (f == -1 && r == -1) {
        f = r = 0;
    } else if (r == n - 1) {
        r = 0;
    } else {
        r++;
    }
    dq[r] = c;
}

void dqfront() {
    if (f == -1 && r == -1) {
        printf("Queue is empty\n");
        return;
    } else if (f == r) {
        printf("Deleted element: %c\n", dq[f]);
        f = r = -1;
    } else if (f == n - 1) {
        printf("Deleted element: %c\n", dq[f]);
        f = 0;
    } else {
        printf("Deleted element: %c\n", dq[f]);
        f++;
    }
}

void dqrear() {
    if (f == -1 && r == -1) {
        printf("Queue is empty\n");
        return;
    } else if (f == r) {
        printf("Removed element: %c\n", dq[r]);
        f = r = -1;
    } else if (r == 0) {
        printf("Deleted element: %c\n", dq[r]);
        r = n - 1;
    } else {
        printf("Deleted element: %c\n", dq[r]);
        r--;
    }
}

int main() {
    char dku;
    int x, respo;
    do {
        printf("Enter operation:\n1: Enqueue Front\n2: Enqueue Rear\n3: Dequeue Front\n4: Dequeue Rear\n5: Display\n");
        scanf("%d", &x);
        switch (x) {
            case 1:
                printf("Enter the character: ");
                scanf(" %c", &dku);
                enqfront(dku);
                break;
            case 2:
                printf("Enter the element to be enqueued from rear: ");
                scanf(" %c", &dku);
                enqrear(dku);
                break;
            case 3:
                dqfront();
                break;
            case 4:
                dqrear();
                break;
            case 5:
                display();
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
        printf("Do you want to perform the above operation again? (Press 1 for Yes, or any other key to exit): ");
        scanf("%d", &respo);
    } while (respo == 1);
    return 0;
}
