// https://www.codewars.com/kata/581c6b075cfa83852700021f

struct Node {
	struct Node *next;
	int data;
};

int index_of (const struct Node *list, int search_val)
{
  int index = 0;
  for (struct Node *voy = list; voy; voy = voy->next, index++)
    if (voy->data == search_val) return index;
  return -1;
}