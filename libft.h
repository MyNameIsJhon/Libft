#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int ft_isprint(int c);
int ft_memset(int c);
void *ft_bzero(void *s, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlcat(char *dest, const char *src, unsigned int n);
char	*ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
size_t ft_strlen(const char *str);
char *ft_strdup(char *str);
char *ft_substr(const char *s, unsigned int start, size_t len);
char ft_ischarset(char c, char *charset);
char *ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);
void	ft_revstr(char *tab);
void ft_putstr_fd(char *s, int fd);
void ft_putchar_fd(char c, int fd);
void ft_putchar_fd(char c, int fd);

#endif
