CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
SRCS	= $(wildcard ./srcs/*.c)
OBJS	= $(SRCS:.c=.o)
TARGET	= ft_cat
INC		= ./includes

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) -I$(INC)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INC)

.PHONY : clean
clean :
	$(RM) $(OBJS)

.PHONY : fclean
fclean : clean
	$(RM) $(TARGET)

.PHONY : re
re : fclean all