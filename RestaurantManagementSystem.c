#include <stdio.h>
#include <stdlib.h>
#define N 10
int queue[N];
int front = -1, rear = -1, count = 0;
void enqueue(int x)
{
	if (rear == N - 1)
	{
		printf("\nThe queue is full");
	}
	else if (front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
		queue[rear] = x;
		count++;
	}
	else
	{
		rear = rear + 1;
		queue[rear] = x;
	}
}

void dequeue(int x)
{
	if (front == -1 && rear == -1)
	{
		printf("queue underflow");
	}
	else if (front == rear)
	{
		rear = front = -1;
	}
	else
	{
		queue[front] = x;
		front++;
	}
}

int main()
	{
		while (1)
		{
			printf("\n<<<<<<<<<<WELCOME TO THE BUDDIES AND BITES RESTAURANT>>>>>>>>>>\n");
			int dosa = 30;
			int idly = 25;
			int vada = 25;
			int poori = 40;
			int milkshake = 60;
			int biryani = 100;
			int choice;
			int price = 0;
			int fp[6];
			fp[0] = dosa;
			fp[1] = idly;
			fp[2] = vada;
			fp[3] = poori;
			fp[4] = milkshake;
			fp[5] = biryani;
			enqueue(count);
			printf("\nMenu of the available food items today are given below: \n");
			printf("\n1.Dosa: 30\n2.Idly: 25\n3.Vada: 25\n4.Poori: 40\n5.Milkshake:60\n6.Biryani: 100\n");
			printf("\nEnter how many food items you want: ");
			int fooditems;
			scanf("%d", &fooditems);
			for (int i = 0; i < fooditems; i++)
			{
				printf("\nYour Order %d: ", i + 1);
				scanf("%d", &choice);
				if (choice < 0 || choice > 6)
				{
					printf("\nPlease check the options you're selecting.");
					break;
				}
				else
				{
					price = price + fp[choice - 1];
				}
			}

			printf("\nBill Number: % d ", count);
			printf("\nYour total bill is: % d ",price);
			printf("\nThank you and visit again!!\n ");
			dequeue(count);
		}

		return 0;
}
