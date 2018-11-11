int bin(int n,char a[])
{

    if(n<1)
        printf("\n%s",a);
        else
        {

            a[n-1]='0';
            bin(n-1,a);
            a[n-1]='1';
            bin(n-1,a);
        }
    }
    main()
    {

        int bin(int ,char[]);
        char a[11];
        a[10]='\0';
        bin(10,a);
        return 0;
    }

