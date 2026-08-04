int push (int[], int, int, int);
int pop ( int[], int, int);

main() 
{
    int stack[20], top = -1, max = 19;
    int val, choice, i;

    while(i)
    {
        printf("\n enter choice from 1-4");
        printf("\n 1-push \n 2-pop \n 3-display \n 4-exit");
        scanf("%d", &choice);

        if(choice == 4)
        break;

    switch (choice)
    {
        scanf("%d", &val);
    case 1:
        top = push(stack, val, top, max);
        break;
    case 2:
        top = pop(stack, top, max);
        break;
    case 3:
        printf("\n values from stack");
        for (i=0; i<=top; i++)
            printf("\n %d", stack[top]);
    default:
        printf("\n invalid choice");
    }
    }
}