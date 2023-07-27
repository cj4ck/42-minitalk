/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_terminal_colors.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:20:49 by cjackows          #+#    #+#             */
/*   Updated: 2023/05/24 09:28:44 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../inc/libft.h"

// void print_terminal_colors(void)
// {
//     printf("-> To print in different colors use the sequence: 
//\\e[38;5;{NumberOfColor}m [text], use \\e[0m to reset color\n");
//     int i = 0;
//     while (i < 256)
//     {
//         printf(" \e[1;48;5;%im%i%s\e[0m", i, i, i < 100 ? " " : "");
//         if (i == 15 || !((i - 15) % 36))
//             printf("\n");
//         i++;
//     }
//     printf("\n");

//     i = 0;
//     while (i < 256)
//     {
//         printf("\e[1;48;5;%im  \e[0m", i);
//         if (i == 15 || !((i - 15) % 36))
//             printf("\n");
//         i++;
//     }
//     printf("\n");
//     printf("\\e[1m | \e[1m BOLD\033[0m \n");
//     printf("\\e[3m | \e[3m ITALIC\033[0m\n");
//     printf("\\e[4m | \e[4m UNDERLINE\033[0m\n");
//     printf("\\e[9m | \e[9m STRIKETHROUGH\033[0m\n");
//     printf("\n");
// }
