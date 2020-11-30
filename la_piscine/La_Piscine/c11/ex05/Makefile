CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
INC		= ./includes
SRCS	= $(wildcard ./srcs/*.c)
OBJS	= $(SRCS:.c=.o)
RM		= rm -f
TARGET	= do-op

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) -I$(INC)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INC)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(TARGET)

re : fclean all