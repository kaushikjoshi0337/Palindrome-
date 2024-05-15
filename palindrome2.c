#include<stdio.h>
    #include<string.h>
    main()
    {
    char a[100];
    int fres[200]={0};
    
    printf("enter any string\n");
    gets(a);
    for(int i=0;a[i]!='\0';i++){
    fres[a[i]]++;
    
    for(int i=0;a[i]!='\0';i++){
    if(fres[a[i]]!=0){
    printf("%c=%d\t\n",a[i],fres[a[i]]);
    fres[a[i]]=0;
    }
    }
    }
    }