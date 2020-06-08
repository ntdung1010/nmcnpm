#include <stdio.h>
void Nhapdayso(int a[],int n)
{
	int i;
	for (i=0; i<n ;i++)
	{
		printf ("Nhap phan tu thu %d ",i+1);
		scanf ("%d",&a[i]);
	}
}
void Xuatdayso (int a[], int n)
{
	int i;
	printf ("===== IN DAY SO ===== \n");
	for(i=0;i<n; i++)
	{
		printf (" %d ",a[i]);
	}
}
void search (int a[], int n, int x)
{
	int i,vt=0;
	printf ("\nNhap x de kiem tra: ");
	scanf ("%d", &x);
	for (i=0; i<n; i++)
	{
		if (a[i]==x)
		{
		vt=i;
			printf ("So %d xuat hien o a[%d] \n",x,vt+1);
		}
		else 
		{
			printf ("\n");
			}
	}
	
}
void Sapxep(int a[], int n)
{
	int i, j, temp;
	for(i=1; i<n-1; i++)
		for (j=n-1; j>i; j--)
		{
			if (a[j]<a[j-1])
			{
				temp =a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}

}
				
int main ()
{
	int a[100],n,x;
	printf ("Nhap n= ");
	scanf ("%d",&n);
	Nhapdayso(a,n);
	Xuatdayso(a,n);
	search (a,n,x);
	Sapxep(a,n);
	Xuatdayso(a,n);
	return 0;
}
