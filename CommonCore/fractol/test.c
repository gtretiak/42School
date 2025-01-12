/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtretiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:43:19 by gtretiak          #+#    #+#             */
/*   Updated: 2025/01/12 19:13:25 by gtretiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx-linux/mlx.h"
#include "fractol.h"
#include <X11/keysym.h>
#include <stdlib.h>
#include <stdio.h>
#define WIDTH 1024
#define HEIGHT 768
#include <time.h>
#include <unistd.h>

int	ft_waiting(t_mlx_data *data);

int	ft_handler(int keysym, t_mlx_data *data);

int	ft_button(int button, int x, int y, t_mlx_data *data);

int	main(void)
{
	int	x;
	int	y;
	srand(time(NULL));
	t_mlx_data	data;
	data.mlx = mlx_init();
	if (!data.mlx)
		return (1);
	data.window = mlx_new_window(data.mlx, WIDTH, HEIGHT, "My window");
	if (!data.window)
	{
		mlx_destroy_display(data.mlx);
		free(data.mlx);
		return (1);
	}
	x = WIDTH * 0.1;
	y = HEIGHT * 0.1;
	while (x < WIDTH * 0.9)
	{
		y = HEIGHT * 0.1;
		while (y < HEIGHT * 0.9)
		{
			mlx_pixel_put(data.mlx, data.window, x, y, rand() % 0x00ff00);
			y++;
		}
		x++;
	}
	data.color = 0xff0000;
	mlx_string_put(data.mlx, data.window, WIDTH * 0.5, HEIGHT * 0.95, 0xffffff, "My Pollock");
	mlx_key_hook(data.window, ft_handler, &data);
	mlx_mouse_hook(data.window, ft_button, &data);
//	mlx_hook();
	mlx_loop_hook(data.mlx, ft_waiting, &data);
	mlx_loop(data.mlx);
	mlx_destroy_display(data.mlx);
	mlx_destroy_window(data.mlx, data.window);
	free(data.mlx);
	free(data.window);
}

int	ft_waiting(t_mlx_data *data)
{
	mlx_string_put(data->mlx, data->window, WIDTH * 0.1, HEIGHT * 0.95, data->color, "Use your keyboard or mouse");
	if (data->color == 0xff0000)
		data->color = 0x00ff00;
	else if (data->color == 0x00ff00)
		data->color = 0x0000ff;
	else if (data->color == 0x0000ff)
		data->color = 0xffffff;
	else
		data->color = 0xff0000;
	sleep(1);
	return (0);
}

int	ft_handler(int keysym, t_mlx_data *data)
{
	if (keysym == XK_Escape)
	{
		printf("The %d key (ESC) has been pressed\n\n", keysym);
		mlx_destroy_window(data->mlx, data->window);
		mlx_destroy_display(data->mlx);
		free(data->mlx);
		exit (1);
	}
	printf("The %d key has been pressed\n\n", keysym);
	return (0);
}

int	ft_button(int button, int x, int y, t_mlx_data *data)
{
	if (button == 1)
	{
		printf("Left mouse button has been pressed at (%d, %d)!\n", x, y);
		if (WIDTH * 0.99 <= x && HEIGHT * 0.99 >= y)
		{
			printf("The X has been clicked, so bye!");
			mlx_destroy_window(data->mlx, data->window);
			mlx_destroy_display(data->mlx);
			free(data->mlx);
			exit (1);
		}
	}
	else if (button == 3)
		printf("Right mouse button has been pressed at (%d, %d)!\n", x, y);
	else if (button == 2)
		printf("Both mouse buttons have been pressed simultaneously at (%d, %d)!\n", x, y);
	else if (button == 4)
		printf("The user scrolled the display UP at (%d, %d)!\n", x, y);
	else if (button == 5)
		printf("The user scrolled the display DOWN at (%d, %d)!\n", x, y);
	return (0);
}

