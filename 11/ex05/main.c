#include "../../../ex00/ft_list.h"
#include "../../../ex00/ft_create_elem.c"
#include <unistd.h>
#include <stdio.h>

t_list *ft_create_elem(void *data);
t_list *ft_list_push_params(int ac, char **av);

int main(int argc, char **argv)
{
	t_list *list;

	list = ft_list_push_params(argc, argv);
	while (list)
	{
	  printf("%s\n", (char*)list->data);
	  list = list->next;
	}
}
