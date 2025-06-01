#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRET = FALSE;
    printf("enter the charecter :\n");
    scanf("%c", &cValue);

    bRET = ChkAlpha(cValue);
    
    if (bRET == TRUE)

    {
       printf(" is the charecter : \n");

    }
    else
    {
        printf(" it is not charecter :"); 
    }

    return 0;
}