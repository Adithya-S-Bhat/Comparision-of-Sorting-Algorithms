# Comparision of Various Sorting Algorithms

Comparison of Bubble, Insertion, Quick and Merge Sorting techniques which sort randomly generated elements through a range of size from 100 thousand to 1 M  

# File Structure
* Code -> Contains the C code for acheiving Problem Statement   
  * sort.h -> Header file which contains structures and function prototypes
  * sortclient.c -> Driver code which invokes functions
  * sortimp.c -> Contains function definitions
* Graphs -> Contains Graphs that were obtained
* Output Files -> Contains text file with data required to plot the graph
  

# Plotting Graph
Graph is plotted using "gnuplot" command line tool.   
Use the following commands on gnuplot command line to view the graph:  

For the graph of 'Size of list vs Execution Time':
>plot './time.txt' using 1:2 with linespoints title 'Bubble Sort', './time.txt' using 1:3 with linespoints title 'Merge Sort', './time.txt' using 1:4 with linespoints title 'Quick Sort', './time.txt' using 1:5 with linespoints title 'Selection Sort'  
>set xlabel 'Size'  
>set ylabel 'Execution Time (in seconds)'  
>set title 'Size of list Vs Execution time'  

For the graph of 'Size of list vs Number of element to element comparisons':
>plot './cmp.txt' using 1:2 with linespoints title 'Bubble Sort', './cmp.txt' using 1:3 with linespoints title 'Merge Sort', './cmp.txt' using 1:4 with linespoints title 'Quick Sort', './cmp.txt' using 1:5 with linespoints title 'Selection Sort'  
>set xlabel 'Size'  
>set ylabel 'Number of element to element comparisons'  
>set title 'Size of list Vs Number of element to element comparisons'  
