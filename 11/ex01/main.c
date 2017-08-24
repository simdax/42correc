#include "../../../ex00/ft_list.h"
#include "../../../ex00/ft_create_elem.c"
#include <unistd.h>

void   ft_list_push_back(t_list **begin_list, void *data);
t_list *ft_create_elem(void *data);

int main()
{
	t_list	*list;

	t_list *list_vide;

	list_vide = NULL;
	ft_list_push_back(&list_vide, "toi");
	write(1, list_vide->data, 5);

	list = ft_create_elem("coucou");
	ft_list_push_back(&list, "toi");
	ft_list_push_back(&list, "lui");

	while (list)
	{
		write(1, list->data, 5);
		write(1, "\n", 1);
		list = list->next;
	}
}
