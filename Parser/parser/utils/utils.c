/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:40:33 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 17:08:15 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser_utils.h"

int	ft_error(char *err_msg, char *err_arg, int err_type)
{
	if (err_msg)
	{
		if (err_arg)
			printf("Error: %s %s\n", err_msg, err_arg);
		else
			printf("Error: %s\n", err_msg);
	}
	if (err_type != 0)
		exit(err_type);
	return (0);
}

int	err_prnt(char *err_desc, char *err_code)
{
	printf("\033[1;33m%s\033[0m \033[1;31m%s\033[0m\n", err_desc, err_code);
	return (-1);
}
