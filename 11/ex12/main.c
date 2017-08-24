#include "../../../ex00/ft_list.h"
#include "../../../ex00/ft_create_elem.c"
#include "../../../ex02/ft_list_push_front.c"
#include <stdio.h>

void   ft_list_push_front(t_list **begin_list, void *data);
t_list *ft_create_elem(void *data);
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

int	f_is_c(char *str, void *data)
{
  (void)str;
  (void)data;
  //  return (str[0] == ((char*)data)[0]);
  return (0);
}

int main()
{
	t_list	*list;

	list = ft_create_elem("coucou");
	ft_list_push_front(&list, "toi");
	ft_list_push_front(&list, "lui");
	ft_list_remove_if(&list, "c",  &f_is_c);
	while (list)
	  {
	    printf("%s\n", list->data);
	    list = list->next;
	  }
}
