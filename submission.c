intarr_t* intarr_create( unsigned int len )
{    
    intarr_t *arr = malloc(sizeof(intarr_t));
    if (arr == NULL)
    {
        return NULL;
    }
    arr -> len = len;
    arr -> data = malloc(sizeof(int)*arr->len);
    return arr;
    
}

void intarr_destroy( intarr_t* ia )
{
    if (ia != NULL)
    {
        free(ia);
    }
}
