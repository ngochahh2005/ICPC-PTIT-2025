CONTEST 2
# A.
Cho dãy số A[] có N phần tử. Hãy xác định xem có tồn tại một đa giác (không nhất thiết phải lồi) có độ dài các cạnh tương ứng là tập hợp A[] hay không?

Gợi ý điều kiện cần và đủ: Một đa giác có N cạnh có tính chất: độ dài của cạnh dài nhất phải nhỏ hơn tổng của N-1 cạnh còn lại.

**Input:**

Dòng đầu tiên là số lượng cạnh N (1 ≤ N ≤ 100).

Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 100).

**Output:** 

In ra “Yes” nếu tồn tại đa giác, in “No” trong trường hợp ngược lại.

**Test ví dụ:**

|Input:|Output|
| - | - |
|<p>4</p><p>1 5 3 8</p>|Yes|
|<p>4</p><p>1 3 4 8</p>|No|

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# B.
Cho dãy số A[] có N phần tử. Cho dãy số B[] ban đầu rỗng. Hãy thực hiện N thao tác sau đây:

Thao tác thứ i, hãy thêm phần tử A[i] vào cuối của dãy số B[], rồi thực hiện đảo ngược dãy số B[].

Nhiệm vụ của bạn là hãy xác định dãy số B[] sau khi thực hiện N thao tác.

**Input**

Dòng đầu tiên là số nguyên dương N (N ≤ 200000).

Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10<sup>9</sup>).

**Output**

Hãy in ra dãy số B[] cuối cùng.

**Example:**            

|Input|Output|
| - | - |
|<p>3</p><p>1 2 3</p>|3 1 2|
|<p>4</p><p>1 2 3 4</p>|4 2 1 3|



Giải thích test 1:

Sau bước 1: (1)

Sau bước 2: (1 2) à (2 1)

Sau bước 3: (2 1 3) à (3 1 2)

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# C.
Cánh đồng của nông dân John gồm nhiều thửa ruộng. Mỗi thửa ruộng là một đa giác khép kín, được bao quanh bởi các hàng rào (đoạn thẳng), và chỉ giao nhau tại các đỉnh chung là đầu mút.

Ngoài yếu tố diện tích, anh John quan tâm tới yếu tố năng suất, được anh quy đổi theo tỉ lệ thuận 1:1 với bình phương diện tích của mỗi thửa ruộng.

Các bạn hãy giúp anh John tính tổng năng suất trên tất cả các thửa ruộng?

**Input:** 

Dòng đầu là số nguyên N (3 ≤ N ≤ 1000), là số lượng các hàng rào.

N dòng tiếp theo, mỗi dòng gồm 4 số nguyên x1, y1, x2, y2 (có tọa độ trong phạm vi [0, 1000]) mô tả một hàng rào.

Input đảm bảo rằng:

- Không có hai đoạn nào cắt nhau.
- Tất cả đoạn đều cần thiết để tạo thành các thửa ruộng.
- Toàn bộ hệ thống hàng rào là đồ thị phẳng, liên thông, không có cầu.

**Output:** 

In ra một số thực là tổng năng suất của cả cánh đồng, với độ chính xác 6 chữ số sau dấu phảy.

**Test ví dụ:**

|Input:|Output:|
| - | - |
|<p>4</p><p>0 0 0 1</p><p>0 1 1 1</p><p>0 0 2 0</p><p>1 1 2 0</p>|2\.250000|
|<p>6</p><p>0 0 0 1</p><p>0 1 1 1</p><p>0 0 1 0</p><p>1 0 2 0</p><p>1 1 2 0</p><p>1 0 1 1</p>|1\.250000|
|<p>16</p><p>5 1 6 2</p><p>5 4 6 2</p><p>2 2 5 4</p><p>2 2 4 5</p><p>2 6 4 5</p><p>2 6 6 7</p><p>6 7 8 4</p><p>8 4 8 6</p><p>8 6 10 4</p><p>10 4 10 7</p><p>10 7 11 4</p><p>10 1 11 4</p><p>8 1 10 1</p><p>5 1 8 1</p><p>6 2 8 4</p><p>10 1 10 4</p>|390\.250000|

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# D.
Một nhà hàng hiện đại có các món thức ăn chuyển động theo dây chuyền. Có tất cả N vị trí chỗ ngồi, đánh dấu từ 1, 2, …, N. Vì nhà hàng rất nổi tiếng, nhiều đoàn khách tới cần phải đúng giờ và có đủ slot trống thì nhà hàng mới phục vụ.

Trong một ngày nọ, có M sự kiện diễn ra, thuộc 1 trong 2 nhóm như sau:

- Một đoàn có K[i] khách đến và họ muốn ngồi liền kề nhau. Nhân viên phục vụ muốn xếp nhóm này vào một dãy liên tiếp K[i] ghế trống. Nếu có thể, nhóm được xếp vào vị trí thấp nhất trong dãy ghế. Nếu không thể, nhóm khách sẽ bị từ chối phục vụ.
- Các khách ở vị trí ghế từ A[i] đến B[i] đã ăn xong và họ rời đi, những vị trí còn lại sẽ trở thành ghế trống.

Nhiệm vụ của bạn là hãy đếm số lượng đoàn khách bị từ chối phục vụ trong ngày?

**Input:**

Dòng đầu tiên là hai số nguyên dương N và M (1 ≤ N, M ≤ 500000).

M dòng tiếp theo, mỗi dòng mô tả một sự kiện theo thứ tự thời gian tăng dần.

Sự kiện loại 1: “A K” là có một đoàn K khách tới nhà hàng.

Sự kiện lọai 2: “L a b” là tất cả các khách từ vị trí [a, b] (a ≤ b) sẽ rời đi.

**Output:** 

Hãy in ra một số nguyên là số lượng nhóm khách bị từ chối.

**Test ví dụ:**

|Input|Output|
| - | - |
|<p>12 4</p><p>A 6</p><p>L 2 5</p><p>A 7</p><p>A 3</p>|1|
|<p>10 10</p><p>L 2 9</p><p>A 2</p><p>L 3 4</p><p>L 4 9</p><p>A 11</p><p>L 5 6</p><p>L 2 5</p><p>A 3</p><p>A 10</p><p>A 1</p>|2|

Giải thích test 1:

Sự kiện 1: [1 1 1 1 1 1 0 0 0 0 0 0]

Sự kiên 2: [1 0 0 0 0 1 0 0 0 0 0 0]

Sự kiên 3: Không đủ chỗ, nhóm khách bị từ chối.

Sự kiện 4: [1 1 1 0 0 1 0 0 0 0 0 0]

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# E. 
Cho mảng A[] gồm N phần tử và một số nguyên dương K. Hãy đếm số dãy con khác rỗng trong A[] sao cho không có hai phần tử nào trong dãy con này có giá trị tuyệt đối hiệu của chúng bằng đúng K.

Vì kết quả có thể rất lớn, hãy in ra đáp án với modulo 998244353.

**Input:**

Dòng đầu là số lượng bộ test T (1 ≤ T ≤ 100).

Mỗi test bắt đầu bởi hai số nguyên N và K (1 ≤ N ≤ 200000, 1 ≤ k ≤ 10<sup>9</sup>).

Dòng thứ hai của mỗi test gồm số nguyên A[i] (1 ≤ A[i] ≤ 10<sup>9</sup>).

**Output:** 

Với mỗi test, hãy in ra số lượng dãy con tìm được trên một dòng.

**Test ví dụ:**

|Input|Output|
| - | - |
|<p>4</p><p>3 3</p><p>3 6 9</p><p>1 100</p><p>4</p><p>4 2</p><p>2 4 7 9</p><p>6 1</p><p>1 1 1 2 2 2</p>|<p>4</p><p>1</p><p>8</p><p>14</p>|



Giải thích test 3: Có 8 cặp thỏa mãn là (2), (4), (7), (9), (2 7), (4 9), (4 7), (2 9).

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# F.
Cho N chai soda. Chai thứ i hiện chứa A[i] đơn vị soda và có dung tích tối đa là B[i] (A[i] ≤ B[i]). Cần thực hiện thao tác đổ soda giữa các chai để dồn toàn bộ lượng soda hiện có vào số lượng chai ít nhất có thể. Mục tiêu cụ thể là:

- Sử dụng số lượng chai ít nhất có thể (gọi là K chai).
- Trong số các cách để đạt được K chai, hãy chọn cách tốn ít thời gian nhất (gọi là T).
- Biết rằng việc đổ X đơn vị soda từ một chai sang chai khác mất X giây.

Lưu ý:

Lượng soda trong mỗi chai sau khi đổ không được vượt quá dung tích B[i] của chai đó, và tổng lượng soda ban đầu phải được bảo toàn.

Nhiệm vụ của bạn là hãy xác định giá trị K và T.

**Input:**

Dòng đầu tiên chứa số nguyên dương N (1 ≤ N ≤ 100) - là số lượng chai.

Dòng thứ hai gồm N số nguyên dương A[i] (1 ≤ A[i] ≤ 100), trong đó A[i] là lượng soda còn lại trong chai thứ i.

Dòng thứ ba chứa N số nguyên dương B[i] (1 ≤ B[i] ≤ 100), trong đó B[i] là dung tích của chai thứ i.

**Output:** 

In ra hai số nguyên K và T, trong đó K là số lượng chai tối thiểu có thể chứa tất cả soda và T là thời gian tối thiểu để đổ soda vào K chai đó.

**Test ví dụ:**

|Input|Output|
| - | - |
|<p>4</p><p>2 4 4 3</p><p>5 7 6 4</p>|<p>2 5</p><p> </p>|
|<p>2</p><p>1 1</p><p>99 99</p>|1 1|
|<p>10</p><p>18 42 5 1 26 8 40 34 8 29</p><p>18 71 21 67 38 13 99 37 47 76</p>|3 100|



Giải thích test 1: Dồn chai thứ nhất sang chai thứ hai (mất 2 đơn vị thời gian), đổ từ chai thứ tư 2 đơn vị sang chai thứ ba và 1 đơn vị sang chai thứ hai (mất 3 đơn vị thời gian).

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# G. 
Số Lucas được định nghĩa một cách đệ quy như sau:

L[0] = 2

L[1] = 1

L[i] = L[i-1] + L[i-2] (với i ≥ 2).

Nhiệm vụ của bạn là hãy xác định số Lucas thứ N. Input đảm bảo đáp án nằm trong phạm vi số tự nhiên int64 bit.

**Input:** 

Dữ liệu đầu vào chứa một số nguyên N (1 ≤ N ≤ 86).

**Output:** 

In ra một số nguyên là số Lucas thứ N.

**Test ví dụ:**

|Input:|Output:|
| - | - |
|5|11|
|20|15127|

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# H.
Lớp học Cấu trúc dữ liệu & giải thuật có N sinh viên, trong đó có một số nhóm sinh viên chơi thân với nhau. Nếu X và Y là bạn, Y và Z là bạn, theo tính chất bắc cầu, X và Z cũng là bạn.

Để tránh việc trao đổi bài, các thầy cô đã sắp xếp phòng thi cho các bạn sinh viên sao cho không có bất kì 2 sinh viên nào là bạn của nhau ở cùng một phòng. Các bạn hãy thử tính xem các thầy cô cần sử dụng ít nhất bao nhiêu phòng thi?

**Input:** 

Dòng đầu tiên chứa hai số nguyên N và M (N, M ≤ 200000).

M dòng tiếp theo, mỗi dòng gồm 2 số nguyên A[i] và B[i], cho biết A[i] và B[i] là bạn của nhau (A[i] khác B[i]).

**Output:** 

In ra một số nguyên duy nhất là số phòng thi tìm được.

**Test ví dụ:**

|Input:|Output:|
| - | - |
|<p>5 3</p><p>1 2</p><p>3 4</p><p>5 1</p>|3|
|<p>8 4</p><p>2 1</p><p>4 1</p><p>5 8</p><p>3 6</p>|3|



Giải thích test 1: Chia các bạn sinh viên thành 3 nhóm (1, 3), (2, 4) và (5).

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
# I.
Cho 3 số nguyên A, B và K. Trong các xâu có độ dài bằng A + B, gồm A kí tự ‘a’ và B kí tự ‘b’, hãy tìm xâu có thứ tự từ điển bằng K.

**Input**

Dữ liệu đầu vào gồm 3 số nguyên A, B và K (1 ≤ A, B ≤ 30, 1 ≤ K ≤ S với S là số lượng xâu có A kí tự ‘a’ và B kí tự ‘b’, S có giá trị không vượt quá phạm vi số nguyên 64 bit).

**Output**

In ra xâu tìm được

**Test ví dụ:**

|**Input**|**Output**|
| - | - |
|2 2 4|baab|
|2 2 6|bbaa|
|26 26 371326006850843| |
|babbbbbaaaaabbbaabbabbbbbbaaabaababbaaababbaaabaaaab||



*Giải thích test 1 và 2: Thứ tự 6 xâu lần lượt là*

aabb, abab, abba, baab, baba, bbaa.

Giới hạn thời gian: 1s

Giới hạn bộ nhớ: 524288 Kb
# J. 
Một bộ ba số (a,b,c) được gọi là bộ ba số Pytago nếu a<sup>2</sup> = b<sup>2</sup> + c<sup>2</sup>.

Người ta mở rộng thêm khái niệm mới, bộ ba số được gọi là “siêu Pytago” nếu 2\*a<sup>2</sup> = b<sup>2</sup> + c<sup>2</sup>. Trong đó (a,b,c) từng đôi một khác nhau.

Bài toán đặt ra là cho số nguyên dương a, hãy kiểm tra xem liệu có tồn tại các giá trị b,c để tạo ra bộ ba số “siêu Pytago” hay không. Chú ý: 1 ≤ a, b, c ≤ 10<sup>5</sup>

**Input**

Chỉ có một số nguyên dương a (1 ≤ a ≤ 10<sup>5</sup>)

**Output**

Ghi ra YES hoặc NO tuỳ thuộc kết quả kiểm tra.

**Ví dụ**

|**Input**|**Output**|
| - | - |
|2|NO|
|1005|YES|

Giới hạn thời gian: 1s

Giới hạn bộ nhớ: 200000 Kb

