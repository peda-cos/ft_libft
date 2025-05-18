/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:02:17 by peda-cos          #+#    #+#             */
/*   Updated: 2025/05/17 22:19:30 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/* Libc functions */
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_isxdigit(int c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_puthex_fd(unsigned int n, int uppercase, int fd);
void				ft_putptr_fd(void *ptr, int fd);
void				ft_putunbr_fd(unsigned int n, int fd);
size_t				ft_strlen(const char *s);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcasecmp(const char *s1, const char *s2);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
int					ft_atoi(const char *str);
long				ft_atol(const char *str);
long long			ft_atoll(const char *str);
long				ft_strtol(const char *nptr, char **endptr, int base);
int					ft_abs(int n);
long				ft_labs(long n);
long long			ft_llabs(long long n);

/* Memory functions */
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
char				*ft_strndup(const char *s, size_t n);
void				*ft_xmalloc(size_t size);

/* Additional functions */
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strtoupper(char *str);
char				*ft_strtolower(char *str);
int					ft_startswith(const char *str, const char *prefix);
int					ft_endswith(const char *str, const char *suffix);

/* Bonus Part - Lists */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

/* Get Next Line */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

char				*get_next_line(int fd);
char				*handle_read_error(char *storage);
char				*init_storage(void);
char				*append_buffer(char *storage, char *buffer);

/* ft_printf */
int					ft_printf(const char *format, ...);
int					ft_printf_putchar_fd(char c, int fd);
int					ft_printf_putstr_fd(char *s, int fd);
int					ft_printf_putendl_fd(char *s, int fd);
int					ft_printf_putnbr_fd(int n, int fd);
int					ft_printf_putunbr_fd(unsigned int n, int fd);
int					ft_printf_puthex_fd(unsigned int n, int uppercase, int fd);
int					ft_printf_putptr_fd(void *ptr, int fd);

#endif
