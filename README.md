# Gap Sequences Of Shell Sort Algorithms

> This is a project to compare some gap sequences of Shell Sort.

---

## Shell Sort Algorithms

1. Initialize the value of h
2. Divide the list into smaller sub-list of equal interval h
3. Sort these sub-lists using insertion sort
4. Repeat until complete list is sorted

### Gaps

#### Shell (1959)

*N* is array's size.

<img src=
"https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle+%5Clfloor+%7BN+%5Cover+2%5Ek%7D%5Crfloor+%3D+%5Clfloor+%7BN+%5Cover+2%7D%5Crfloor+%2C+%5Clfloor+%7BN+%5Cover+4%7D%5Crfloor%2C%5Clfloor+%7BN+%5Cover+8%7D%5Crfloor..." 
alt="\lfloor {N \over 2^k}\rfloor = \lfloor {N \over 2}\rfloor , \lfloor {N \over 4}\rfloor,\lfloor {N \over 8}\rfloor...">

#### Sedgewick‘s A003462

<img src=
"https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle+%5Cfrac%7B3%5Ek+-+1%7D%7B2%7D+%3D+1%2C+4%2C+13%2C+40%2C+121%2C+364..." 
alt="\frac{3^k - 1}{2} = 1, 4, 13, 40, 121, 364...">


#### Sedgewick’s A036562


<img src=
"https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle+4%5E%7Bk%2B1%7D+%2B+3%5Ccdot%282%5Ek%29+%2B+1+%3D+1%2C+8%2C+23%2C+77%2C+281%2C+1073...%0A" 
alt="4^{k+1} + 3\cdot(2^k) + 1 = 1, 8, 23, 77, 281, 1073...
">

#### Sedgewick's A033622

<!-- $$ \begin{cases}
   9\cdot(2^k - 2^{k/2}) + 1 &\text{k even,}  \\
   8\cdot(2^k) - 6\cdot(2^{(k+1)/2}) + 1 &\text{k odd}
\end{cases} = 1, 5, 19, 41, 109...$$ -->

<img src=
"https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle+%5Cbegin%7Bcases%7D%0A+++9%5Ccdot%282%5Ek+-+2%5E%7Bk%2F2%7D%29+%2B+1+%26%5Ctext%7Bk+even%2C%7D++%5C%5C%0A+++8%5Ccdot%282%5Ek%29+-+6%5Ccdot%282%5E%7B%28k%2B1%29%2F2%7D%29+%2B+1+%26%5Ctext%7Bk+odd%7D%0A%5Cend%7Bcases%7D+%3D+1%2C+5%2C+19%2C+41%2C+109...%0A" 
alt="\begin{cases}
   9\cdot(2^k - 2^{k/2}) + 1 &\text{k even,}  \\
   8\cdot(2^k) - 6\cdot(2^{(k+1)/2}) + 1 &\text{k odd}
\end{cases} = 1, 5, 19, 41, 109...
">

#### Tokuda's A108870

<img src=
"https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle+%5Clceil%28%5Cfrac%7B1%7D%7B5%7D%289%5Ccdot%28%5Cfrac%7B9%7D%7B4%7D%29%5Ek+-+4%29%29%5Crceil+%3D+1%2C+3%2C+7%2C+15%2C+31%2C+63...%0A" 
alt="\lceil(\frac{1}{5}(9\cdot(\frac{9}{4})^k - 4))\rceil = 1, 3, 7, 15, 31, 63...
">

#### Ciura’s A102549

<img src=
"https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle+1%2C+4%2C+10%2C+23%2C+57%2C+132%2C+301%2C+701%2C+1750+...%0A" 
alt="1, 4, 10, 23, 57, 132, 301, 701, 1750 ...
">

### Result

|N|Shell|explicit|Sed(A003462)|Sed(A036562)|Sed(A033622)|Tokuda|Ciura
|---|---|---|---|---|---|---|---|
|500|0.000153s|0.000152s|0.000155s|0.000143s|0.000151s|0.000139s|0.000132s|
|1000|0.000337s|0.000305s|0.000231s|0.000260s|0.000266s|0.000267s|0.000280s|
|2000|0.001010s|0.000985s|0.001077s|0.000856s|0.000835s|0.000765s|0.000733s|
|3000|0.001270s|0.001277s|0.001648s|0.001149s|0.001148s|0.001134s|0.001104s|
|10000|0.00477s|0.00455s|0.00365s|0.00369s|0.00397s|0.004821s|0.00346s|
|50000|0.030417s|0.031259s|0.033023s|0.029688s|0.034595s|0.026292s|0.032365s|
|70000|0.045151s|0.050979s|0.062938s|0.047039s|0.050759s|0.047599s|0.052934s|


---

## References

[Tutorialspoint - Data Structure and Algorithms: Shell Sort](https://www.tutorialspoint.com/data_structures_algorithms/shell_sort_algorithm.htm)</br>

[Wikipedia - Shell Sort](https://en.wikipedia.org/wiki/Shellsort)</br>

[Shell sort](https://hbfs.wordpress.com/2011/03/01/shellsort/)</br>



---

## Author

- GitHub - [@jsmlau](https://github.com/jsmlau)

[Back To The Top](#read-me-template)