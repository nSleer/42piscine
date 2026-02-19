char *ft_rev_print (char *str){
    int i = 0;
    int j = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    j = i - 1;
    while (j >= 0)
    {
        write(1, &str[j], 1);
        j--;
    }
    write(1, "\n", 1);
    return (str);
    
}