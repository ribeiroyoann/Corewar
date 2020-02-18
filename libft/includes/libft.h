/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoribeir <yoribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 14:02:17 by sarobber          #+#    #+#             */
/*   Updated: 2019/11/04 18:47:12 by yoribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <libc.h>
# define BUFF_SIZE 100

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strtrim(char const *s);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strstr(const char *s1, const char *s2);
char			**ft_strsplit(char const *s, char c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);
char			*ft_strnew(size_t size);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strncpy(char *dest, const char *src, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncat(char *restrict s1,
				const char *restrict s2, size_t n);
size_t			ft_strlen(const char *s);
size_t			ft_strlcat(char *restrict dst,
				const char *restrict src, size_t size);
char			*ft_strjoin(char const *s1, char const*s2);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_striter(char *s, void (*f)(char *));
int				ft_strequ(char const *s1, char const *s2);
char			*ft_strdup(const char *s1);
void			ft_strdel(char **as);
char			*ft_strcpy(char *dst, const char *src);
int				ft_strcmp(const char *s1, const char *s2);
void			ft_strclr(char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strcat(char *restrict s1, const char *restrict s2);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putstr(char const *s);
void			ft_putnbr_fd(int n, int fd);
void			ft_putnbr(int n);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putendl(char const *s);
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			ft_memdel(void **ap);
void			*ft_memcpy(void *restrict dst,
				const void *restrict src, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memccpy(void *restrict dst,
				const void *restrict src, int c, size_t n);
void			*ft_memalloc(size_t size);
char			*ft_itoa(int n);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
void			ft_bzero(void *s, size_t n);
int				ft_atoi(char *str);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstnew(void const *content, size_t content_size);
int				get_next_line(const int fd, char **line);
int				check_end(char *keep);
size_t			ft_strclen(char *keep);

/*
***		FUNCTIONS ADDED FROM THE LIBRARY OF PRINTF
*/
char			*ft_ftoa(long double nbr, int precision);
char			*ft_ctoa(char c);
char			*ft_nctoa(char c, size_t n);

char			*ft_itoa_printf(long long nbr);
int				ft_atoi_printf(const char *str);

int				ft_power(int num, int pow);
long long		ft_max(long long a, long long b);
long long		ft_min(long long a, long long b);
char			*ft_itoa_base(unsigned long long nbr, unsigned short base);
unsigned int	ft_abs(int value);

int				ft_printf(const char *format, ...);

/*
***		FUNCTIONS ADDED FOR COREWAR
*/

int				ft_atoi_base(const char *str, int size, int base);
long			ft_atol(const char *str);

/*
***		FUNCTIONS FROM THE LIB OF YOANN (INCLUDING PRINTF FUNCTIONS)
*/

char			*ft_strnjoin(char *s1, char *s2, int n);
char			*ft_strndup(char const *src, int n);
char			*ft_strtoupper(char *str);
int				ft_islower(int c);
size_t			ft_wstrlen(const int *str);
unsigned int	ft_nblen(unsigned long long n, int base);
unsigned int	ft_nbrlen(long n);
char			*ft_strnjoinfree(char const *s1, char const *s2, size_t n);
char			*ft_strjoindel(char *s1, char *s2);
#endif
