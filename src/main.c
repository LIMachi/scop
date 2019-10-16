/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartzol <hmartzol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 09:18:08 by hmartzol          #+#    #+#             */
/*   Updated: 2019/10/16 09:18:11 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <scop.h>

int	init_glfw(GLFWwindow **win)
{
	if (!glfwInit())
		return (-1);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	if ((*win = glfwCreateWindow(1920, 1080, "test", NULL, NULL)) == NULL)
		return (-2);
	glfwMakeContextCurrent(*win);
	return (0);
}

int	main(int argc, char **argv)
{
	GLFWwindow	*win;

	if (init_glfw(&win))
		return (-1);
	while (!glfwWindowShouldClose(win))
		;
	(void)argc;
	(void)argv;
	return (0);
}
