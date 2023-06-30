/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_tree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhechoy <tkhechoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:50:18 by tkhechoy          #+#    #+#             */
/*   Updated: 2023/06/30 18:58:58 by tkhechoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void struct_tree(t_base *obj)
{
    printf("obj->amb->rgb->r = %d\n", obj->a_amb->rgb->r);
    printf("obj->a_sphere->sphere_diameter = %f\n", obj->a_sphere->sphere_diameter);
    printf("obj->a_cylinder->cy_diameter, %f\n", obj->a_cylinder->cy_diameter);
}