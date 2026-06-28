#include <stdio.h>

int main() {
    int arr[100], n, i, choice, value, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    do {
        printf("\n1.Display\n2.Insert\n3.Delete\n4.Search\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {

        case 1:
            printf("Array: ");
            for(i=0;i<n;i++)
                printf("%d ",arr[i]);
            printf("\n");
            break;

        case 2:
            printf("Enter position and value: ");
            scanf("%d%d",&pos,&value);

            if(pos>=1 && pos<=n+1){
                for(i=n;i>=pos;i--)
                    arr[i]=arr[i-1];

                arr[pos-1]=value;
                n++;
            }
            else
                printf("Invalid position\n");
            break;

        case 3:
            printf("Enter position: ");
            scanf("%d",&pos);

            if(pos>=1 && pos<=n){
                for(i=pos-1;i<n-1;i++)
                    arr[i]=arr[i+1];
                n--;
            }
            else
                printf("Invalid position\n");
            break;

        case 4:
            printf("Enter element to search: ");
            scanf("%d",&value);

            for(i=0;i<n;i++)
                if(arr[i]==value)
                    break;

            if(i<n)
                printf("Found at position %d\n",i+1);
            else
                printf("Not Found\n");
            break;

        case 5:
            printf("Exit\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while(choice!=5);

    return 0;
}
