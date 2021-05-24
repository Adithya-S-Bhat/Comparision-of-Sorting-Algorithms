Graph is plotted using gnuplot on linux. 
Please use the below commands on gnuplot command line to view the graph.

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