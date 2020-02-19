/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:54:32 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/18 23:52:41 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *c);
int	f	t_atoi(char *str);
void *	memset(void *b, int c, size_t len);
void * 	ft_memalloc(size_t size);
void 	ft_memdel(void **ap);
char * 	ft_strnew(size_t size);
void 	ft_strdel(char **as);
void 	ft_strclr(char *s);
void 	ft_striter(char *s, void (*f)(char *));
void 	ft_striteri(char *s, void (*f)(unsigned int, char *));
char * 	ft_strmap(char const *s, char (*f)(char));
char * 	ft_strmapi(char const *s, char (*f)(unsigned int, char));
int 	ft_strequ(char const *s1, char const *s2);
int 	ft_strnequ(char const *s1, char const *s2, size_t n);
char *	 ft_strsub(char const *s, unsigned int start, size_t len);
char * 	ft_strjoin(char const *s1, char const *s2);
char *  ft_strtrim(char const *s);
char ** ft_strsplit(char const *s, char c);
char * 	ft_itoa(int n);
void 	ft_putchar(char c);
void	ft_bzero(void *s, size_t n);
void 	ft_putstr(char const *s);
