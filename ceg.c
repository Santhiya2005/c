/*write a c prgm to get the strating range from the user and count the even numbers
#include<stdio.h>
int main()
{
    int a;
    int b;

    scanf("%d",&a);
    scanf("%d",&b);
    int c=0;
    for(int i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            c++;
        }
    }
    printf("The number of  even numbers in the range %d and %d  are %d",a,b,c);

}

find the factor of a given number   
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d\n",i);


        }

    }

} 
//write a c prgm to print the multiplication  table without using the *opertor
#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int b=0;
    for(i=1;i<=10;i++)
    {
        b+=a;
        printf("%d\n",b);
    }
}

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++);
    {
        
        printf("%d\n",i);
    }
}

#include<stdio.h>
int main()
{
    int i;
    for(;;)
    {
    
        printf("%d",i);
    }
}
#include<stdio.h>
int main()
{
    int i=1;
    for(;;i++)
    {
    
        printf("%d",i);
    }
}
write a program to print the index of a matrix nxn or square pattern
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d%d ",i,j);
        }
        printf("\n");
    }
}
//print square pattern 
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

#include<stdio.h>
int main()
{
    int n,i,j;
    int k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            printf("%05d ",k);
            k++;
        }
        printf("\n");
    }
}

#include<stdio.h>
int main()
{
    int n,i,j;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=n;j++)
        {

            if(i==1 || i==n || j==1 || j==n) 
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
            
        }
        
        printf("\n");
    }
}

#include<stdio.h>
int main()
{
    int n,i,j;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=n;j++)
        {

            if(i==j || i+j==n+1) 
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
            
        }
        
        printf("\n");
    }
}

#include<stdio.h>
int main()
{
    int n,i,j;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {

            if((i%2==1 && j%2==1)||(i%2==0 && j%2==0))
            {
                printf("1");
            }
            else{
                printf("0");
            }
            
        }
        
        printf("\n");
    }
}

#include<stdio.h>
int main()
{
    int n,i,j;
   
    scanf("%d",&n);
     n=(2*n)-1;
    for(i=1;i<=n;i++,printf("\n"))
    {
        for(j=1;j<=n;j++)
        {

            if(i==1 || i==n || j==1 || j==n || i==j || i+j ==n+1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        
        
    }
}

write a c prgm to reverse the given numberand pali

#include<stdio.h>
int main()
{
    int n,d,k;
   
    scanf("%d",&n);  
    int rev=0; k=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
        
    }
    if(rev==k)
    {
printf("Palindrome");
    }
    else{
        printf("not palindrome");
    }
}

write a c program if to check whether the number is perfect number( sum of factors of a number excluding the number itsef = number)

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d=0;

    int i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            d+=i;
        }
    }
    if(n==d)
    {
        printf("Perfect");

    }
    else{
        printf("Not perfect");
    }
} 

adam number(a number's square and reverse of (reverse number square) are equal)

#include<stdio.h>
int rev(int n)
{
    int d;
    int rev=0;
    while(n)
    {
            d=n%10;
            rev=rev*10+d;
            n=n/10;

            

    }
        return rev;
}
int square(int n)
{
    return n*n;
}
int main()
{
    int n;
    scanf("%d",&n);
    int k=rev(n);
    int k2=square(k);
    
    
    if(square(n)==rev(k2))
    {
        printf("ADAMS  NUMBER");
    }
    else{
        printf("not");
    }
    
}

write a program ARMSTRONG


#include<stdio.h>
#include<math.h>

int main()
{
    int n,d,x;
    
    int c=0;
    int sum=0;
    scanf("%d",&n);
    int temp=n; 

    while(n)
    {  
      
      c++;
      n=n/10;
    
    }
    
    n=temp;
    while(n)
    {
        x=0;
        d=n%10;
        sum=sum+pow(d,c);
        
        n=n/10;
    }

    if(temp == sum)
    {
        printf("ARMSTRONG NUMBER");
    }
    else{
        printf("Not an ARMSTRONG NUMBER");
    }
}

//array
#include<Stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]*2);
    }
    
}

reverse a array
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
//to print the odd even count in the given array
#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("count of odd numbers: %d\n count of even numbers: %d",odd,even);
}
//write a c program to replace the particular element in the given array
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ind,ele;
    scanf("%d",&ind);
    scanf("%d",&ele);
    arr[ind]=ele;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
//maximum element in the given array
#include<stdio.h>
int main()
{
    int n,i,max=0,index;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
    }
    printf("Max element:%d\nmax element index:%d\npostion:%d",max,index,index+1);
}
swapping two numberin an array using 3rd variable and without using 3 rd variable
//using 3 variable
#include<stdio.h>
int main()
{
    int n,temp,i,ind1,ind2;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&ind1);
    scanf("%d",&ind2);
    temp=arr[ind1];
    arr[ind1]=arr[ind2];
    arr[ind2]=temp;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
//without using 3 variable
#include<stdio.h>
int main()
{
    int n,temp,i,ind1,ind2;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&ind1);
    scanf("%d",&ind2);
    arr[ind1]=arr[ind1]+arr[ind2];
    arr[ind2]=arr[ind1]-arr[ind2];
    arr[ind1]=arr[ind1]-arr[ind2];
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
// swap 2 numbers without using 3 variable using bitwise operator(^---EX-OR)
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
    
}
//write a c prog to count the occurance of a particular ele in the given array
#include<stdio.h>
int main()
{
    int n,num,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    int frequency=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            frequency++;
        }
    }
    printf("%d",frequency);
}
//element is found or not?
#include<stdio.h>
int main()
{
    int n,num,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    int frequency=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            frequency++;
        }
    }
    if(frequency>0)
    {
       printf("element found");
    }
    else
    {
        printf("not found");
      }
}
#include<stdio.h>
int main()
{
    int n,i,max=0,secondmax=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    };
    for(i=0;i<n;i++)
    {
        if(arr[i] < max && arr[i]>secondmax)
        {
            secondmax=arr[i];
        }
    }
    printf("%d",secondmax);
}
//write a c program to print the count of prime no in the given range
#include<stdio.h>
int main()
{
    int a,b,i,f=0,j;
    int count=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        f=0;
        for(j=1;j<=i;j++)
        {
            
            if(i%j==0)
            {
                f++;
            }
        }
        if(f==2)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\ncount of primes:%d",count);
}

//write a c program to count the trailing zero of the given number
#include<stdio.h>
int main()
{
    int n,count=0,s;
    scanf("%d",&n);
    while(n>0)
    {
        s=n%10;
        if(s==0)
        {
            count++; 
        }
        else
            break;
        n=n/10;
    }
    printf("%d",count);
}
write a c program to print the sum of the digit  until get the single digit.
#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d",&n);
   while(n>9)
    {
        int sum=0;
        while(n!=0)
        {
            sum+=n%10;   
            n=n/10;
        }
        n=sum;
    }
    printf("%d",n);
}
#include<Stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%9==0)
        printf("9");
    else
        printf("%d",n%9);
}
without using conditional operator input 1--2,2--1.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",3-n);
}
//write a program to remove the duplicate elements in the given array compare by 2-2 elements first sort tghe array
#include<stdio.h>xxxxxxxxxx
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ns=1;
    for(i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr[ns]=arr[i];
            ns++;
        }
    }
    for(i=0;i<ns;i++)
    {
        printf("%d ",arr[i]);
    }
}

       
}
//write a program to insert a element in a array( get element need to added,index value)
//write a program get the input in string and display
#include<stdio.h>
int main()
{
    char arr[100];
    scanf("%s",arr);
    printf("%s",arr);//prints the first word
}
#include<stdio.h>
int main()
{
    char arr[100];// prints the full sentences
    scanf("%[^\n]s",arr);
    printf("%s",arr);
}
//write a program to length of the string without using inbuilt func(strlen())
#include<stdio.h>
int main()
{
    char arr[100];
    int i,length=0;
    scanf("%[^\n]s",arr);
    for(i=0;arr[i]!='\0';i++)
    {
        length++;
    }
    printf("count the stringL:%d",length);
}
//write a c prog to count the number of words in the given string.
#include<stdio.h>
int main()
{
    char arr[100];
    int i,length=0;  
    scanf("%[^\n]s",arr);
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' ' && arr[i+1]!=' ')
        {
            length++;
        }
    }
    printf("count the string:%d",length+1);
}
//print the uppercase into lowercase in a string ascii(caital 65 to 90)
#include<stdio.h>
int main()
{
    char arr[100];
    int i;
    scanf("%[^\n]s",arr);
    for(i=0;arr[i];i++)
    {
        if(arr[i]>=65 && arr[i]<=90)
        {
            arr[i]=arr[i]+32;
        }
    }
    printf("%s",arr);
}
//print the lowercase  into uppercase in a string ascii(caital 65 to 90)
#include<stdio.h>
int main()
{
    char arr[100];
    int i;
    scanf("%[^\n]s",arr);
    for(i=0;arr[i];i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
        {
            arr[i]=arr[i]-32;
        }
    }
    printf("%s",arr);
}

//print the togging the uppercase and lowercase in a string ascii(caital 65 to 90)
 
#include<stdio.h>
int main()
{
    char arr[100];
    int i;
    scanf("%[^\n]s",arr);
    for(i=0;arr[i];i++)
    {
        if(arr[i]>='A' && arr[i]<='Z')
        {
            arr[i]=arr[i]+32;
        }
        else
        {
            arr[i]=arr[i]-32;
        }
    }
    printf("%s",arr);
}
//using inbuilt function(toggle)
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()     
{
    char arr[100];
    int i;
    scanf("%[^\n]s",arr);
    for(i=0;i<=strlen(arr);i++)
    {
        if(arr[i]>='A' && arr[i]<='Z')
        {
            arr[i]=tolower(arr[i]);
        }
        else
        {
            arr[i]=toupper(arr[i]);
        }
    }
    printf("%s",arr);
}
write a pogram to check the particular character in a string

#include<stdio.h>
#include<string.h>
int main(){
    int i,f=0;
    char n;
    scanf("%c",&n);
    char arr[100];
    scanf("%s",arr);
    for(i=0;arr[i];i++)
    {
        if(arr[i]==n)
        {
            f=1;
            printf("found");
            break;
        }

    }
    if(f==0)
    {
        printf("element not found");
    }

}
write a prog to find the number is power of 2 or not?

#include<stdio.h>
int main()
{
    int i,n,f=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=1)
    {
        if(temp%2!=0)
        {
            f=1;
            break;
        }
        temp=temp/2;

    }
    if(f==0)
    {
        printf("%d is the power of 2",n);
    }
    else
    {
        printf("%d is not the power of 2",n);
    }
}
write a prog to test the given string is palindrome or not?
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    scanf("%[^\n]s",arr);
    int len=strlen(arr);
    int i,f=0;
    for(i=0;i<=(len-1)/2;i++)
    {
        if(arr[i]!=arr[len-1-i])
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
write a prog to find the number of vowels in the given string.
//write a c pg to print the minimum of three numbers using functions with return type and with argument.
#include<stdio.h>
int small (int a)
{
   int sum=0;
   int n=a;
   while(a>0)
   {
     sum+=a%10;
     a/=10;
   }
   if(n%sum==0)
   {
      return 1;
   }
   else{
      return 0;
   }
}
int main()
{
   int a;
   scanf("%d",&a);
   if(small(a))
   {
      printf("harshad number");
   }
   else{
      printf("not");
   } 
}
write a  c prg a number is divisible by 6  without using  modulo(6)      

pointer---store the address of the another variable
scalar== stores a value but doesnot not allocate
vector== stores and allocate a values to the next variable
pointer==pointer stores only value but not address
pointervariable== stores the address of the variable(*)
#include <stdio.h>
 
int main()
{
   char string[1000], sub[1000];
   int position, length, c = 0;
 
   printf("Input a string\n");
   gets(string);
 
   printf("Enter the position and length of substring\n");
   scanf("%d%d", &position, &length);
 
   while (c < length) {
      sub[c] = string[position+c-1];
      c++;
   }
   sub[c] = '\0';
 
   printf("Required substring is \"%s\"\n", sub); // 
 
   return 0;
}

#include<stdio.h>
int main()
{
    char arr[100];
    scanf("%s",arr);
    printf("%s",&arr[2]);//prints the first word
}

//largest substring without reapeating
#include<stdio.h>
#include<stdbool.h>
#include<string.h>


int lengthOfLongestSubstring(char* str)
 {
    int n=strlen(str);
    int i,j;
    int res=0;
  for(i=0;i<n;i++)
  {
    bool vis[200]={false};
    for(j=i;i<n;j++){
        if(vis[(unsigned char)str[j]])
           break;
        else
            res=(res>(j-i+1))?res:(j-i+1);
            vis[(unsigned char)str[j]]=true;    
    
    
    }
  }
  return res;
  
 }


int main()
{
 char str[200];
 scanf("%s",str);
 printf("%d",lengthOfLongestSubstring(str));
}
//merging array
#include <stdio.h>
#include <stdlib.h>
#include <cstring> 

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size, int* mergedArray) {
    int num1 = 0;
    int num2 = 0;
    int ind = 0;

    while (num1 < nums1Size && num2 < nums2Size) {
        if (nums1[num1] < nums2[num2]) {
            mergedArray[ind] = nums1[num1];
            num1++;
        } else {
            mergedArray[ind] = nums2[num2];
            num2++;
        }
        ind++;
    }

    while (num1 < nums1Size) {
        mergedArray[ind] = nums1[num1];
        num1++;
        ind++;
    }

    while (num2 < nums2Size) {
        mergedArray[ind] = nums2[num2];
        num2++;
        ind++;
    }

    // Return median if needed, but for now, let's return 0 as this is not the focus.
    return 0;
}

int main() {
    char arr[100];
    char arr2[100];
    int nums1[100], nums2[100];
    int nums1Size = 0, nums2Size = 0;

    // Input strings
    scanf("%s", arr);
    scanf("%s", arr2);

    // Remove the brackets from the input strings
    char *cleanArr = arr + 1;
    cleanArr[strlen(cleanArr) - 1] = '\0';
    char *cleanArr2 = arr2 + 1;
    cleanArr2[strlen(cleanArr2) - 1] = '\0';

    // Parse the input strings into integer arrays
    char *token = strtok(cleanArr, ",");
    while (token != NULL) {   
        nums1[nums1Size++] = atoi(token);
        token = strtok(NULL, ",");
    }

    token = strtok(cleanArr2, ",");
    while (token != NULL) {
        nums2[nums2Size++] = atoi(token);
        token = strtok(NULL, ",");
    }

    int mergedArray[nums1Size + nums2Size];

    findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size, mergedArray);

    printf("Merged array: ");
    for (int i = 0; i < nums1Size + nums2Size; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    char c;
    int i = 0, j = 0;

int arr2[300];
    while (scanf("%d%c", &arr1[i++], &c) == 2 && c != '\n');
    while (scanf("%d%c", &arr2[j++], &c) == 2 && c != '\n');

   
    int k = 0, m = 0, n = 0;
    while (m < i && n < j) {
        if (arr1[m] < arr2[n]) {
            merged[k++] = arr1[m++];
        } else {
            merged[k++] = arr2[n++];
        }
    }

    while (m < i) {
        merged[k++] = arr1[m++];
    }

    while (n < j) {
        merged[k++] = arr2[n++];
    }

   
    printf("Merged array: ");
    for (int l = 0; l < k; l++) {
        printf("%d ", merged[l]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int arr[100];
    char c;
    int i=0;
    scanf("%c",&c);
    while(scanf("%d%c",&arr[i],&c)==2 && c!=']'){
        i++;
    }
    
    for(int j=0;j<=i;j++){
        printf("%d\n",arr[j]);
    }
}
#include <stdio.h>

int main() {
    int arr[100];
    char c;
    int i=0;
   
    while(scanf("%d%c",&arr[i],&c)==2 && c!='\n'){
        i++;
    }
    
    for(int j=0;j<=i;j++){
        printf("%d\n",arr[j]);
    }
}
*/