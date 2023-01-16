#include<stdio.h>
// CODE TO INPUT AND PRINT THE ELEMENTS OF ARRAY
#include<stdio.h>
int main()
{
    int arr[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
// CODE TO FIND SUM OF ALL ELEMENTS OF ARRAY
#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
// CODE TO PRINT EVEN ELEMENTS OF ARRAY AND THEIR COUNT
#include<stdio.h>
int main()
{
    int arr[10],i,count=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\n",arr[i]);
            count++;
        }
    }
    printf("Total number of even elements are:%d",count);
}
// CODE TO FIND COUNT OF EVEN AND ODD ELEMENTS OF ARRAY
#include<stdio.h>
int main()
{
    int arr[10],i,count=0,t=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        count++;
        else
        t++;
    }
    printf("Total number of even elements are:%d\n",count);
    printf("Total number of odd elements are:%d",t);
}
// CODE TO PRINT SUM OF EVEN AND PRODUCT OF ODD NUMBERS
#include<stdio.h>
int main()
{
    int arr[10],i,sum=0,prod=1;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
        else
        prod=prod*arr[i];
    }
    printf("Sum of even elements is:%d\n",sum);
    printf("Product of odd elements is:%d\n",prod);
}
// CODE TO PRINT ALTERNATE ELEMENTS OF ARRAY
#include<stdio.h>
int main()
{
    int arr[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i=i+2)
    {
        printf("%d\n",arr[i]);
    }
}
// CODE TO PRINT ARRAY IN REVERSE ORDER
#include<stdio.h>
int main()
{
    int arr[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&arr[i]);
    }
    for(i=9;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}
// CODE TO REVERSE ARRAY AND PRINT IT
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int a[n],i,j,k,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,k=n-1;i<n/2;i++,k--)
    {
        t=a[i];
        a[i]=a[k];
        a[k]=t;
    }
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
// CODE TO LINEAR SEARCH A NUMBER IN ARRAY
#include<stdio.h>
int main()
{
    int arr[10],key,i,flag=0,pos;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to searched:");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
            pos=i+1;
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("Number found at position %d",pos);
    else
    printf("Number not found");
}
// CODE TO FIND MINIMUM AND MAXIMUM
#include<stdio.h>
int main()
{
    int arr[10],i,min,max;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    printf("Minimum=%d\n",min);
    printf("Maximum=%d\n",max);
}
// CODE TO COUNT AND PRINT ALL NEGATIVE NUMBERS OF ARRAY
#include<stdio.h>
int main()
{
    int arr[10],i,count=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]<0)
        {
            printf("%d, ",arr[i]);
            count++;
        }
    }
    printf("\nTotal number of negative elements in array are:%d",count);
    return 0;
}
// CODE TO COPY ALL ELEMENTS FROM AN ARRAY TO ANOTHER ARRAY
#include<stdio.h>
int main()
{
    int arr[10],i,arr1[10];
    for(i=0;i<10;i++)
    {
        printf("Enter elements:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        arr1[i]=arr[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr1[i]);
    }
    return 0;
}
// CODE TO INSERT NEW ELEMENTS IN ARRAY
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,ele,pos,m;
    printf("Enter the number of elements in array:");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be added and position:");
    scanf("%d %d",&ele,&pos);
    for(i=m-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    m++;
    a[pos-1]=ele;
    for(i=0;i<m;i++)
    printf("%d\n",a[i]);
    return 0;
}
// CODE TO DELETE AN ELEMENT FROM ARRAY
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],i,pos,m;
    printf("Enter no of elements in array:");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position of element to be deleted:");
    scanf("%d",&pos);
    for(i=pos;i<m-1;i++)
    {
        a[i]=a[i+1];
    }
    m--;
    for(i=0;i<m;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
// SELECTION SORTING IN ARRAY
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],i,j,m,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\nArray elements after sorting:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
// CODE TO FIND FREQUENCY OF ANY ELEMENT
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],ele,i,j,count=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        count++;
    }
    printf("Frequency of %d=%d",ele,count);
}
// CODE FIND THE FREQUENCY OF ELEMENTS OF ARRAY
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],b[100]={0},i,max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    for(i=0;i<n;i++)
    b[a[i]]++;
    max++;
    for(i=0;i<max;i++)
    {
        if(b[i]>0)
        printf("%d=%d\n",i,b[i]);
    }
    return 0;
}
/*                        2D ARRAY                        */
/*                        2D ARRAY                        */
/*                        2D ARRAY                        */
// CODE TO ADD TWO MATRICES
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n],i,j;
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the elements of second matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    printf("%d\n",c[i][j]);
    return 0;
}
// CODE TO SUBTRACT TWO MATRICES
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n],i,j;
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the elements of second matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        c[i][j]=a[i][j]-b[i][j];
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    printf("%d\n",c[i][j]);
    return 0;
}
// CODE TO PERFORM SCALAR MATRIX MULTIPLICATION
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n][n],i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the number to multiply:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        a[i][j]=k*a[i][j];
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    printf("%d\n",a[i][j]);
    return 0;
}
// CODE TO MULTIPLY TWO MATRIX
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],sum;
    printf("Enter the elements of a matrix:");
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("Enter the elements of b matrix:");
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    scanf("%d",&b[i][j]);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=0;
            for(int k=0;k<3;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
                c[i][j]=sum;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
}
// CODE TO CHECK WHETHER TWO MATRICES ARE EQUAL OR NOT
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n][n],b[n][n],i,j,flag=0;
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the elements of second matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==b[i][j])
            flag=1;
            else
            flag=0;
        }
    }
    if(flag==1)
    printf("Both matrices are equal!");
    else
    printf("Both matrices are not equal!");
    return 0;
}
// CODE TO FIND SUM OF MAIN DIAGONAL ELEMENTS OF MATRIX
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n][n],i,j,sum=0;
    printf("Enter the elements of matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            sum=sum+a[i][j];
        }
    }
    printf("Sum of main diagonal elements of matrix=%d",sum);
    return 0;
}
// CODE TO FIND SUM OF MINOR DIAGONAL ELEMENTS OF MATRIX 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n][n],i,j,sum=0;
    printf("Enter the elements of matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            sum=sum+a[i][j];
        }
    }
    printf("Sum of minor diagonal elements of matrix=%d",sum);
    return 0;
}
// CODE TO FIND THE SUM OF EACH ROW AND COLUMN
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n][n],i,j;
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        int rsum=0;
        for(j=0;j<n;j++)
        {
            rsum=rsum+a[i][j];
        }
        printf("Sum of row %d:%d\n",i+1,rsum);
    }
    for(i=0;i<n;i++)
    {
        int csum=0;
        for(j=0;j<n;j++)
        {
            csum=csum+a[j][i];
        }
        printf("Sum of column %d:%d\n",i+1,csum);
    }
    return 0;
}
// CODE TO FIND UPPER TRIANGULAR MATRIX
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n],i,j,k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=k;j<n;j++)
        {
            printf("%d\n",a[i][j]);
        }
        k++;
    }
    
}
// CODE TO FIND LOWER TRIANGULAR MATRIX
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],i,j,k=1;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        printf("%d\n",a[i][j]);
        k++;
    }
}
// CODE TO FIND SUM OF UPPER TRIANGULAR MATRIX
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n],i,j,k=0,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=k;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        k++;
    }
    printf("%d",sum);
}
// CODE TO FIND SUM OF LOWER TRIANGULAR OF MATRIX
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n],i,j,k=1,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            sum=sum+a[i][j];
        }
        k++;
    }
    printf("%d",sum);
}
// CODE TO FIND TRANSPOSE OF A MATRIX
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the size of a matrix\n");
    scanf("%d", &n);
    int a[n][n],t[n][n];
    printf("Enter elements of the matrix\n");
    
    for (i= 0; i < n; i++)
        for (j= 0; j< n; j++)
        scanf("%d", &a[i][j]);
    
    for (i= 0; i< n;i++)
        for (j= 0;j< n;j++)
        t[j][i] = a[i][j];
    
    printf("Transpose of the matrix:\n");
 
    for (i= 0; i< n; i++) 
    {
        for (j= 0;j< n;j++)
        printf("%d\t", t[i][j]);
        printf("\n");
    }
    return 0;
}
// CODE TO CHECK IDENTITY MATRIX
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n],i,j,flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]==1)
                flag=1;
                else
                flag=0;
            }
        }
    }
    if(flag==1)
    printf("It is an Identity Matrix!");
    else
    printf("It is not an Identity Matrix!");
}
// CODE TO CHECK IF IT IS A SPARSE MATRIX
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n][n],i,j,count=0,l=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            count++;
            else
            l++;
        }
    }
    if(count>l)
    printf("It is a sparse matrix!");
    else
    printf("It is not a sparse matrix!");
    return 0;
}
// CODE TO CHECK SYMMETRIC MATRIX
#include<stdio.h>
int main()
{
    int n,i,j,flag=0;
    printf("Enter the size of a matrix\n");
    scanf("%d", &n);
    int a[n][n],t[n][n];
    printf("Enter elements of the matrix\n");
    for (i= 0; i < n; i++)
    for (j= 0; j< n; j++)
    scanf("%d", &a[i][j]);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    t[j][i]=a[i][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==t[i][j])
            flag=1;
            else
            {
            flag=0;
            break;
            }
        }
    }
    if(flag==1)
    printf("It is a Symmetric matrix!");
    else
    printf("It is not a Symmetric matrix!");
    return 0;
}
// CODE TO DISPLAY DIAGONAL ELEMENTS IN MATRIX FORM
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n][n],i,j;
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }	
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            printf("%d ",a[i][j]);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
