CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
INC		= ./includes
SRCS	= ./srcs/ft_putchar.c ./srcs/ft_strlen.c ./srcs/ft_swap.c ./src/ft_strcmp.c ./src/ft_putstr.c
OBJS	= ./srcs/ft_putchar.o ./srcs/ft_strlen.o ./srcs/ft_swap.o ./src/ft_strcmp.o ./src/ft_putstr.o
AR		= ar rc
TARGET	= libft.a
RM		= rm -f

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(AR) $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@  -I$(INC)

.PHONY : clean
clean :
	$(RM) $(OBJS)

.PHONY : fclean
fclean : clean
	$(RM) $(TARGET)

.PHONY : re
re : fclean all