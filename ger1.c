int main ()
 {
     int n,i,cont=0;
     printf ("Digite um numero n: ");
     scanf ("%d", &n);

     for (i=n-1; i>1; i--)
     {
         if(n%i==0)
         {
             cont++;
         }
     }
     if(cont==0)
     {
         printf("ele e primo");
     }
     else
        printf("ele nao e primo");
     return 0;
 }
