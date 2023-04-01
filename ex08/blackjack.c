/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blackjack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:06:50 by kslik             #+#    #+#             */
/*   Updated: 2023/04/01 15:30:34 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(int ac, char **av)
{
    int sum = 0;
    int i = 0;
    while(av[1][i] != '\0')
    {
        if(av[1][i] >= 50 && av[1][i] <= 57)
        {
            sum = sum + (av[1][i] - 48);
        }
        else if(av[1][i] == 74 ||av[1][i] == 84 ||av[1][i] == 75 || av[1][i] == 81)
        {
            sum = sum + 10;
        }
        else if(av[1][i] == 65)
        {
            if(sum + 11 <= 21)
                sum = sum + 11;
            else
                sum = sum + 1;
        }
        else
        {
            printf("invalid cards");
            return 0;
        }
        i++;
    }
    if(sum == 21)
        printf("Blackjack!\n");
    else
        printf("%d\n", sum);
    
}