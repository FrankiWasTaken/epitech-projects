/*
** my_getnbr.c for my_getnbr in /home/boisso_c/rendu/Piscine-C-lib/my/source
** 
** Made by Christian Boisson
** Login   <boisso_c@epitech.net>
** 
** Started on  Tue Oct  8 13:19:39 2013 Christian Boisson
** Last update Sat Apr 12 11:09:57 2014 Christian Boisson
*/

#include	"lib.h"

int		aff(char *str, char n)
{
  int		i;
  int		t;
  long		nbr;

  t = 0;
  i = my_strlen(str);
  nbr = 0;
  if (i > 11 || (i > 10 && n == 0))
    return (0);
  while (47 < str[t] && str[t] < 58 && t <= i)
    t++;
  while (t > 0)
    {
      nbr = nbr * 10 + str[0] - 48;
      str++;
      t--;
    }
  if (nbr < -2147483648 || nbr > 2147483647)
    return (0);
  return (nbr);
}

int		my_getnbr(char *str)
{
  char		n;
  int		a;
  long		nbr;

  nbr = 0;
  a = 0;
  n = 0;
  while (str[0] == '+' || str[0] == '-')
    {
      str++;
      a++;
    }
  if (a != 0)
    str--;
  if (str[0] == '-')
    {
      n = 1;
      str++;
    }
  nbr = aff(str, n);
  if (n == 1)
    nbr = - nbr;
  return (nbr);
}
