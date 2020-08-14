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

<div align="center"><img src="https://render.githubusercontent.com/render/math?math=\lfloor {N \over 2^k} \rfloor = \lfloor {N \over 2}\rfloor , \lfloor {N \over 4}\rfloor,\lfloor {N \over 8}\rfloor..."></div>

#### Sedgewick‘s A003462

<div align="center"><img src="https://render.githubusercontent.com/render/math?math=\frac{3^k - 1}{2} = 1, 4, 13, 40, 121, 364..."></div>


#### Sedgewick’s A036562


<div align="center"><img src="https://render.githubusercontent.com/render/math?math=4^{k+1} + 3\cdot(2^k) + 1 = 1, 8, 23, 77, 281, 1073..."></div>

#### Sedgewick's A033622

<!-- $$ \begin{cases}
   9\cdot(2^k - 2^{k/2}) + 1 &\text{k even,}  \\
   8\cdot(2^k) - 6\cdot(2^{(k+1)/2}) + 1 &\text{k odd}
\end{cases} = 1, 5, 19, 41, 109...$$ -->

<div align="center"><img src="https://render.githubusercontent.com/render/math?math=%20%20%209%5Ccdot(2%5Ek%20-%202%5E%7Bk%2F2%7D)%20%2B%201%20%26%5Ctext%7Bk%20even%2C%7D%20%20%5C%5C%0A%20%20%208%5Ccdot(2%5Ek)%20-%206%5Ccdot(2%5E%7B(k%2B1)%2F2%7D)%20%2B%201%20%26%5Ctext%7Bk%20odd%7D"></div>

#### Tokuda's A108870

<div align="center"><img src="https://render.githubusercontent.com/render/math?math=\lceil(\frac{1}{5}(9\cdot(\frac{9}{4})^k - 4))\rceil = 1, 3, 7, 15, 31, 63..."></div>

#### Ciura’s A102549

<div align="center"><img src="https://render.githubusercontent.com/render/math?math=1, 4, 10, 23, 57, 132, 301, 701, 1750 ..."></div>

### Result

|N|Shell|explicit|Sed(A003462)|Sed(A036562)|Sed(A033622)|Tokuda|Ciura
|---|---|---|---|---|---|---|---|
|500|0.000153s|0.000152s|0.000155s|0.000143s|0.000151s|0.000139s|0.000132s|
|1000|0.000337s|0.000305s|0.000231s|0.000260s|0.000266s|0.000267s|0.000280s|
|2000|0.001010s|0.000985s|0.001077s|0.000856s|0.000835s|0.000765s|0.000733s|
|3000|0.001270s|0.001277s|0.001648s|0.001149s|0.001148s|0.001134s|0.001104s|
|10000|0.00477s|0.00455s|0.00365s|0.00369s|0.00397s||0.00346s|
|50000|0.030417s|0.031259s|0.033023s|0.029688s|0.034595s||0.032365s|
|70000|0.045151s|0.050471s|0.046457s|0.043267s|0.041037s|0.039976s|0.041990s|


---

## References

[Tutorialspoint - Data Structure and Algorithms: Shell Sort](https://www.tutorialspoint.com/data_structures_algorithms/shell_sort_algorithm.htm)</br>

[Wikipedia - Shell Sort](https://en.wikipedia.org/wiki/Shellsort)</br>

[Shell sort](https://hbfs.wordpress.com/2011/03/01/shellsort/)</br>



---

## Author

- GitHub - [@jsmlau](https://github.com/jsmlau)

[Back To The Top](#read-me-template)