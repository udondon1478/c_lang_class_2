scanf("%d", &n);
scanf("%s %s %s", s, c, r);
for (i = 0; i < n; i++)
{
    if (s[i] == c[0])
    {
        for (j = 0; j < (int) strlen(r); j++)
        {
            printf("%c", r[j]);
        }
    }else {
        printf("%c", s[i]);
    }
    
}

/