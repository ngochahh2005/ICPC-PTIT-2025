CONTEST 4
# A.
Cho hai số nguyên N và M. Hãy đếm số lượng các dãy số thỏa mãn:

- Độ dài dãy số đúng bằng N.
- Mỗi phần tử có giá trị trong đoạn [1 M].
- Độ dài dãy con tăng dài nhất đúng bằng 3.

**Input:**

Gồm 2 số nguyên dương N và M (3 ≤ N ≤ 1000, 3 ≤ M ≤ 10).

**Output:** 

In ra số lượng dãy số tìm được theo modulo 10<sup>9</sup>+7.

**Test ví dụ:**

|Input:|Output|
| - | - |
|3 4|4|
|4 5|135|



Giải thích test 1:

Các dãy số thỏa mãn là: (1 2 3), (1 2 4), (1, 3, 4) và (2 3 4).

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# B
Cho dãy số A[] có N phần tử và dãy số B[] có M phần tử. Nhiệm vụ của các bạn là hãy tìm 2 chỉ số i và j sao cho |A[i] – B[j]| là nhỏ nhất có thể.

**Input**

Dòng đầu tiên gồm hai số nguyên N và M (1 ≤ N, M ≤ 200000).

Dòng thứ hai gồm N số nguyên A[i].

Dòng thứ ba gồm M số nguyên B[j]. Các phần tử đều không âm và có giá trị không vượt quá 10<sup>9</sup>.

**Output**

In ra một số nguyên là hiệu nhỏ nhất của hai phần tử trong hai dãy số đã cho.

**Test ví dụ:**

|Input|Output|
| - | - |
|<p>2 2</p><p>1 5</p><p>4 9</p>|1|
|<p>1 1</p><p>5</p><p>5</p>|0|



Giải thích test 1: |5-4| = 1.

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# C
Cho một bảng kích thước N x N chỉ gồm các kí tự ‘#’ và ‘.’

Nhiệm vụ của bạn là hãy chọn tối đa 2 ô ‘.’ rồi chuyển chúng sang ‘#’ sao cho tồn tại một dãy 6 kí tự liên tiếp theo hàng ngang, hàng dọc hoặc đường chéo.

**Input:** 

Dòng đầu tiên là số nguyên dương N (N ≤ 1000).

N dòng tiếp theo, mỗi dòng là một xâu có N kí tự mô tả một hàng của bảng.

**Output:** 

In ra “Yes” nếu có thể tạo ra được dãy 6 kí tự ‘#’ liên tiếp, in ra “No” trong trường hợp ngược lại.

**Test ví dụ:**

|Input:|Output:|
| - | - |
|<p>6</p><p>......</p><p>#.###.</p><p>......</p><p>......</p><p>......</p><p>.....#</p>|Yes|
|<p>6</p><p>######</p><p>######</p><p>######</p><p>######</p><p>######</p><p>######</p>|Yes|
|<p>8</p><p>........</p><p>#..##...</p><p>........</p><p>........</p><p>....#...</p><p>....#...</p><p>.#...#..</p><p>.......#</p>|No|

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# D
Cho một cây N đỉnh và có gốc tại đỉnh 1. Mỗi đỉnh i có giá trị A[i]. Kích thước của một cây con là số lượng nút thuộc cây con đó.

Đặt <i>son<sub>x</sub></i> là nút con trực tiếp của <i>x</i> có kích thước lớn nhất. Nếu có nhiều nút con cùng kích thước lớn nhất thì <i>son<sub>x</sub></i> là chỉ số nhỏ nhất trong tất cả các nút con đó.

Có Q truy vấn gồm 2 dạng:

- *1 x*: Tính tổng giá trị của các nút trong cây con gốc u.
- <i>2 x</i>: Gọi <i>p<sub>x</sub></i> là cha trực tiếp của <i>x</i>. Truy vấn này sẽ xóa cạnh (<i>x, p<sub>x</sub></i>) và nối cạnh (<i>son<sub>x</sub></i>, <i>p<sub>x</sub></i>). Nếu <i>x</i> là nút gốc hay nút lá thì bỏ qua truy vấn này.

Hãy tính kết quả với mỗi truy vấn loại 1.

**Input:**

Dòng đầu tiên nhập hai số nguyên N và Q (1 ≤ N, Q ≤ 100000).

Dòng thứ hai nhập N số nguyên A[1], A[2], …, A[N] (-10<sup>9</sup> ≤ A[i] ≤ 10<sup>9</sup>).

N – 1 tiếp theo, mỗi dòng nhập hai số nguyên u và v mô tả một cạnh của cây.

Q dòng tiếp theo nhập các truy vấn. Mỗi truy vấn có dạng *t x* (1 ≤ *t* ≤ 2, 1 ≤ *x* ≤ N).

**Output:**

In ra kết quả của các truy vấn loại 1 trên một dòng.

**Test ví dụ:**

|Input|Output|
| - | - |
|<p>7 4</p><p>1 1 1 1 1 1 1</p><p>1 2</p><p>1 3</p><p>2 4</p><p>2 5</p><p>3 6</p><p>6 7</p><p>1 6</p><p>2 3</p><p>1 6</p><p>1 2</p>|<p>2</p><p>3</p><p>3</p>|



Giải thích test 1:

Truy vấn 1: subtree[6] = a[6] + a[7]

Truy vấn 3: subtree[6] = a[3] + a[6] + a[7]

Truy vấn 4: subtree[2] = a[2] + a[4] + a[5]

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# E
Căn phòng của Alice là một đa giác lồi có N đỉnh, các đỉnh được đánh số lần lượt từ 1 tới N. Bức tường thứ nhất của phòng nối đỉnh thứ nhất với đỉnh thứ hai, bức tường thứ hai nối đỉnh thứ hai với đỉnh thứ ba, v.v. và bức tường thứ N nối đỉnh thứ N với đỉnh thứ nhất. Một số bức tường làm bằng thủy tinh trong suốt, cho phép ánh sáng đi qua.

Ở bên ngoài căn phòng có L chiếc đèn. Hãy tính diện tích của căn phòng sẽ được chiếu sáng khi L bóng đèn bật sáng?

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test bắt đầu bởi chứa 3 số N, W, L lần lượt là số bức tường, số bức tường bằng thủy tinh, và số bóng đèn (N ≤ 15, W, L ≤ 3).

Dòng tiếp theo chứa W số là các bức tường làm bằng thủy tinh.

L dòng tiếp theo, mỗi dòng chứa 2 số là tọa độ (x, y) của các bóng đèn.

N dòng tiếp theo, mỗi dòng chứa 2 số là tọa độ (x, y) là tọa độ các đỉnh căn phòng.

Các tọa độ là các số nguyên có trị tuyệt đối nhỏ hơn 1000.

**Output:** 

Với mỗi test, in ra trên một dòng diện tích của phòng sẽ được chiếu sáng, với độ chính xác 5 chữ số sau dấu phảy.

**Test ví dụ:**

|Input|Output|
| - | - |
|<p>1</p><p>4 1 2</p><p>3</p><p>2 2</p><p>-1 2</p><p>0 0</p><p>1 0</p><p>1 1</p><p>0 1</p>|<p>0\.75000</p><p> </p>|

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# F
Cho số nguyên *abc* có 3 chữ số, trong đó cả 3 chữ số đều khác 0.

Hãy tính tổng *abc + bca + cab.*

**Input:**

Đầu vào chứa một số nguyên có ba chữ số.

**Output:**

In ra một số nguyên là đáp án tìm được.

**Test ví dụ:**

|Input|Output|
| - | - |
|123|666|
|888|2664|



Giải thích test 1: 123 + 231 + 312 = 666.

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# G
Cho 4 số nguyên A, B, C, D. Hãy đếm số lượng số K thỏa mãn tính chất:

Không có một số nguyên nào trong đoạn [A + B\*K, A + C\*K] là bội của của D?

**Input:** 

Dòng đầu tiên là số lượng bộ test T (1 ≤ T ≤ 10000).

Mỗi bộ test gồm 4 số nguyên A, B, C, D (1 ≤ A < D, 0 ≤ B < C < D, 2 ≤ D ≤ 10<sup>8</sup>).

Input đảm bảo số lượng số K thỏa mãn là hữu hạn.

**Output:** 

Với mỗi truy vấn loại 2, hãy in ra đáp án tìm được trên một dòng.

**Test ví dụ:**

|Input:|Output:|
| - | - |
|<p>2</p><p>3 1 2 5</p><p>90 91 92 93</p>|<p>1</p><p>45</p>|



Giải thích test 1:

i = 1, đoạn [4, 5]

i = 2, đoạn [5, 7]

i = 3, đoạn [6, 9], chỉ có đoạn này thỏa mãn.

i = 4, đoạn [7, 11]

i = 5, đoạn [8, 13]

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# H
Cho ba xâu s<sub>1</sub>​,s<sub>2</sub>​,s<sub>3</sub>​. Tìm độ dài ngắn nhất của một xâu sao cho xâu đó chứa cả s<sub>1</sub>​, s<sub>2</sub> và s<sub>3</sub>​.

**Input**

Gồm 3 dòng, mỗi dòng mô tả một xâu.

Tất cả các xâu đều không rỗng, chỉ bao gồm các chữ cái Latinh viết thường.

Độ dài của mỗi chuỗi không vượt quá 10<sup>5</sup>.

**Output**

In ra một số duy nhất — là độ dài tối thiểu của một xâu mà chứa cả s<sub>1</sub>​,s<sub>2</sub>​ và s<sub>3</sub>​.

**Test ví dụ:**

|Input|Output|
| - | - |
|<p>ab</p><p>bc</p><p>cd</p>|4|
|<p>abacaba</p><p>abaaba</p><p>d</p>|11|



Test 1: Xâu tổng là abcd

Test 2: Xâu tổng là abacabaabad

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# I
Cho số nguyên dương N. Tại mỗi bước, bạn có thể tăng N thêm 1 đơn vị (gán N = N + 1).

Hãy tìm số bước tối thiểu để biến tổng các chữ số của N nhỏ hơn hoặc bằng giá trị S cho trước.

**Input:**

Dòng đầu ghi số lượng bộ test T (T ≤ 20000).

Mỗi bộ test gồm 2 số nguyên N và S (1 ≤ N ≤ 10<sup>18</sup>, 1 ≤ S ≤ 162).

**Output:**

Với mỗi test, trên một dòng, in ra một số duy nhất là số bước tối thiểu để biến tổng các chữ số của N nhỏ hơn hoặc bằng S.

**Test ví dụ:**

|Input|Output|
| - | - |
|<p>5</p><p>2 1</p><p>1 1</p><p>500 4</p><p>217871987498122 10</p><p>100000000000000001 1</p>|<p>8</p><p>0</p><p>500</p><p>2128012501878</p><p>899999999999999999</p>|

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# J
Trên mỗi ô của vùng diện tích có kích thước MxN, các khối vuông đơn vị (kích thước 1x1x1) được xếp chồng lên nhau để tạo thành một khối lớn có chiều cao bằng H[i, j]. Các khối lớn khi được đặt cạnh nhau sẽ che phủ một phần mặt bên của chúng.

Nhiệm vụ của bạn là hãy tính diện tích toàn phần của khối thể tích thu được, bao gồm cả phần bề mặt trên, mặt đáy và bốn mặt xung quanh.

**Dữ liệu vào:**

- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test bắt đầu bởi hai số nguyên M và N. (0 ≤ M, N ≤ 1000).
- M dòng tiếp theo, mỗi dòng gồm N số nguyên mô tả chiều cao của ô (i, j). Chiều cao của mỗi ô không vượt quá 1000.

**Kết quả:** 

- Với mỗi test, in ra diện tích toàn phẩn của khối thể tích được tạo thành.

**Ví dụ:**                  

|**Input**|**Output**|
| - | - |
|<p>5</p><p>1 1</p><p>1</p><p>1 2</p><p>1 2</p><p>1 1</p><p>2</p><p>3 3</p><p>1 1 1</p><p>1 1 1</p><p>1 1 1</p><p>3 3</p><p>1 1 1</p><p>1 2 0</p><p>1 0 2</p>|<p>6</p><p>14</p><p>10</p><p>30</p><p>38</p><p> </p><p> </p>|

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 65536 Kb



