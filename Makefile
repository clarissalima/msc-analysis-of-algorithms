CC = gcc
CFLAGS = -Wall -O2

all: selection insertion

selection: sortingAlgorithms/selectionSort.c
	$(CC) $(CFLAGS) sortingAlgorithms/selectionSort.c -o selection

insertion: sortingAlgorithms/insertionSort.c
	$(CC) $(CFLAGS) sortingAlgorithms/insertionSort.c -o insertion

clean:
	rm -f selection insertion selection.exe insertion.exe