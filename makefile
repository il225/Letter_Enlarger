CC = g++
CFLAGS = -Wall -g

letter_enlarginator.out : main.cc letter_functions.h letters.h 
	$(CC) $(CFLAGS) main.cc -o letter_enlarginator.out 

clean :
	rm -rf *.o
	rm -rf *.out
