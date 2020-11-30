CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
INC		= ./includes
SRCS	= $(wildcard ./srcs/*.c)
OBJS	= $(SRCS:.c=.o)
TARGET	= ft_display_file

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET) -I$(INC)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INC)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(TARGET)

re : fclean all