/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:10/09/2023
  Description: progarmm id 26
*/

#include <stdio.h>
#include <stdlib.h>

struct TN
{
    int data;
    struct TN *l;
    struct TN *r;
};

struct TN *getnode(int value)
{
    struct TN *nn = ((struct TN *)malloc(sizeof(struct TN)));
    nn->data = value;
    nn->l = nn->r = NULL;
    return nn;
}

struct TN *insert(struct TN *root, int value)
{
    if (root == NULL)
    {
        return getnode(value);
    }

    if (value < root->data)
    {
        root->l = insert(root->l, value);
    }
    if (value > root->data)
    {
        root->r = insert(root->r, value);
    }

    return root;
}

struct TN *findMinNode(struct TN *node)
{
    while (node->l != NULL)
    {
        node = node->l;
    }
    return node;
}

struct TN *delete(struct TN *root, int value)
{
    if (root == NULL)
    {
        return root;
    }

    if (value < root->data)
    {
        root->l = delete (root->l, value);
    }
    else if (value > root->data)
    {
        root->r = delete (root->r, value);
    }
    else
    {
        if (root->l == NULL)
        {
            struct TN *temp = root->r;
            free(root);
            return temp;
        }
        else if (root->r == NULL)
        {
            struct TN *temp = root->l;
            free(root);
            return temp;
        }

        struct TN *temp = findMinNode(root->r);
        root->data = temp->data;
        root->r = delete (root->r, temp->data);
    }

    return root;
}

struct TN *search(struct TN *root, int value)
{
    if (root == NULL || root == value)
    {
        return root;
    }
    if (value < root->data)
    {
        return search(root->l, value);
    }
    if (value > root->data)
    {
        return search(root->r, value);
    }
}

void inorder(struct TN *root)
{
    if (root != NULL)
    {
        inorder(root->l);
        printf("%d ", root->data);
        inorder(root->r);
    }
    else
    {
        printf("empty tree \n");
    }
}

void postorder(struct TN *root)
{
    if (root != NULL)
    {
        postorder(root->l);
        postorder(root->r);
        printf("%d ", root->data);
    }
    else
    {
        printf("empty tree \n");
    }
}

void preorder(struct TN *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->l);
        preorder(root->r);
    }
    else
    {
        printf("empty tree \n");
    }
}

int main()
{
    struct TN *root = NULL;
    struct TN *result;
    int ch, n;

    while (1)
    {

        printf("----welcome to bst:----\n");
        printf("1.insert node\n");
        printf("2. Deletion of a node\n");
        printf("3.search node\n");
        printf("4.inorder\n");
        printf("5.postorder\n");
        printf("6.preorder\n");

        printf("enter your choice -> ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("enter the value to insert: ");
            scanf("%d", &n);
            root = insert(root, n);
            break;
        case 2:
            printf("Enter value to delete: ");
            scanf("%d", &n);
            root = delete (root, n);
            break;

        case 3:
            printf("enter the value to search: ");
            scanf("%d", &n);
            result = search(root, n);
            if (result != NULL)
            {
                printf("%d found in the tree", n);
            }
            else
            {
                printf("%d not found", n);
            }
            break;
        case 4:
            printf("inorder traversal:-> ");
            inorder(root);
            printf("\n");
            break;
        case 5:
            printf("preorder traversal:-> ");
            postorder(root);
            printf("\n");
            break;
        case 6:
            printf("postorder traversal:-> ");
            preorder(root);
            printf("\n");
            break;

        default:
            printf("error try again\n");
            break;
        }
    }
}
