//
//单调栈
//
typedef struct node_l
{
    struct node_l *next;
    int val;
} node;

int main()
{
    return 1;
}
node *list;
int inStack(node *in_node, void(compare *)(int, int))
{
    if (list)
    {
        if (compare(list->val, in_node - val))
        {
            in_node->next = list;
        }
        else
        {
            node *n = list;
            while (compare(list->val, in_node - val) && list)
            {
                list = n->next;
                free(n);
            }
            if (list)
            {
            }
        }
    }
}
