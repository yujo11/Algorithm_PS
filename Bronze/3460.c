/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3460.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 13:02:16 by yujo              #+#    #+#             */
/*   Updated: 2020/03/18 13:04:35 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int x;
		scanf("%d", &x);
		int i = 0;
		while(x)
		{
			if (x&1)
				printf("%d ", i);
			x >>=1;
			i++;
		}
		printf("\n");
	}
}
