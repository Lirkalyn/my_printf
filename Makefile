##
## EPITECH PROJECT, 2019
## Day_10
## File description:
## makefile
##
.PHONY : clean fclean re

NAME	=	libmy.a

$(NAME):
		make -C lib/my

clean:
		make clean -C lib/my

fclean:
		make fclean -C lib/my

re:
	make re -C lib/my
