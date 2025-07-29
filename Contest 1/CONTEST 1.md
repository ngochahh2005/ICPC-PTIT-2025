# **CONTEST 1**
## **1. Bài A**
Cho N điểm phân biệt trên mặt phẳng Oxy. Hãy đếm số cách chọn 3 điểm để tạo thành một tam giác.
### **Input:**
Dòng đầu tiên chứa số nguyên N (3 ≤ N ≤ 300)

N dòng tiếp theo, mỗi dòng gồm 2 số nguyên X[i] và Y[i] mô tả tọa độ của một điểm (-10<sup>9</sup>≤Xⅈ,Yⅈ≤10<sup>9</sup>)
### **Output:**
In ra một số nguyên là số lượng tam giác tìm được
### **Ví dụ:**

|**Input**|**Output**|
| :- | :- |
|<p>4</p><p>0 1</p><p>1 3</p><p>1 1</p><p>-1 -1</p>|3|
|<p>3</p><p>8 11</p><p>11 15</p><p>5 7</p>|0|

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
## **2. Bài B**
Cho xâu S độ dài N và K từ phân biệt trong từ điển. Tính số cách ghép các từ trong từ điển để tạo thành xâu S (Một từ có thể sử dụng nhiều lần).
### **Input:**
Dòng đầu nhập xâu S độ dài bằng N (1 ≤ N ≤ 5000).

Dòng thứ hai nhập số nguyên K (1 ≤ K ≤ 10<sup>5</sup>).

K dòng sau, mỗi dòng nhập một từ có trong từ điển.
### **Output:**
In ra số cách ghép từ chia dư cho 10<sup>9</sup> + 7.
### **Ví dụ:**


|**Input**|**Output**|
| :- | :- |
|<p>ababc</p><p>4</p><p>ab</p><p>abab</p><p>c</p><p>cb</p>|2|

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
## **3. Bài C**
Cho xâu S. Tìm xâu con dài nhất có thể của xâu S sao cho xâu con này có kí tự bắt đầu là ‘A’ và kí tự kết thúc là ‘Z’.
### **Input:**
Một xâu S có độ dài không quá 200000, chỉ gồm các chữ cái in hoa.
### **Output:** 
In ra độ dài xâu con dài nhất tìm được.
### **Ví dụ:**

|**Input**|**Output**|
| :- | :- |
|ZABCDZ|5|
|TXASDFZXCUV|5|

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
## **4. Bài D**
Cho dãy số A[] có N phần tử. Mỗi phần tử sẽ được gán một màu sắc sao cho tính chất sau luôn được thỏa mãn: Với 2 phần tử A[i] và A[j] (i < j) được tô cùng một màu thì bắt buộc A[i] < A[j]. Hỏi cần sử dụng ít nhất bao nhiêu màu để có thể tô màu được dãy số đã cho?
### **Input:**
Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 100000).

Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10<sup>9</sup>).
### **Output:**
In ra một số nguyên là số lượng màu sắc cần dùng ít nhất.
### **Ví dụ:**


|**Input**|**Output**|
| :- | :- |
|<p>5</p><p>3 1 4 5 2</p>|5|
|<p>4</p><p>1 1 1 1</p>|4|
### **Giải thích test:**
Giải thích test 1: (3, 4, 5) được tô cùng một màu, tương tự là (1, 2).

Giải thích test 2: Chúng ta cần sử dụng 4 màu khác nhau.

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
## **5. Bài E**
Tí và Tèo cùng chơi trò chơi đối kháng như sau:

\1) Có n viên sỏi trong rổ, mỗi lượt, người chơi sẽ bốc 1 số viên sỏi trong rổ (Ít nhất 1 viên và nhiều nhất là n viên)\. Tí là người đi trước, 2 người chơi luân phiên nhau\.

\2) Mỗi lượt, người chơi bốc ít nhất 1 viên, và nhiều nhất bằng 2 lần số viên sỏi mà người chơi trước vừa bốc\. Lượt chơi đầu tiên Tí có thể bốc bao nhiêu tùy ý\.

\3) Người chơi nào lấy được viên sỏi cuối cùng sẽ là người chiến thắng\.

Tính số viên sỏi ít nhất Tí có thể bốc ở lượt đầu tiên để đảm bảo mình chắc chắn chiến thắng.
### **Input:** 
Một số nguyên dương duy nhất n (n ≤ 1015) là số viên sỏi có ban đầu.
### **Output:** 
In ra số viên sỏi nhỏ nhất Tí bốc ở lượt đầu tiên để đảm bảo mình sẽ thắng cuộc.
### **Ví dụ:**

|**Input**|**Output**|
| :- | :- |
|4|1|
|7|2|
|8|8|
### **Giải thích test 1:**
Lượt đầu tiên, Tí có thể bốc 1, 2, 3, 4 viên sỏi.

- Tí có thể lấy luôn cả 4 viên sỏi, và kết thúc cuộc chơi, nhưng đây không phải là con số nhỏ nhất có thể.
- Lượt 1, Tí bốc 1 viên, trong rổ còn 3 viên. Đến lượt Tèo, Tèo có thể bốc 1 viên hoặc 2 viên, nhưng đều không thể chiến thắng được. Vì:
- Nếu Tèo bốc 1 viên, lượt sau Tí sẽ bốc 2 viên và giành chiến thắng
- Nếu Tèo bốc 2 viên, lượt sau Tí bốc nốt 1 viên còn lại và giành chiến thắng.

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
## **6. Bài F**
Cho hai số a và b trong đó a ≤ 10<sup>12</sup>, b ≤ 10<sup>250</sup>. Tìm ước số chung lớn nhất của chúng.
### **Input:**
- Dòng đầu tiên đưa vào T (1 ≤ T ≤ 100)là số lượng bộ test.
- T dòng tiếp đưa các bộ test. Mỗi bộ test gồm hai dòng lần lượt là 2 số a và b
### **Output:** 
Đưa ra kết quả mỗi test theo từng dòng.
### **Ví dụ:**

|**Input**|**Output**|
| :- | :- |
|<p>1</p><p>1221</p><p>1234567891011121314151617181920212223242526272829</p>|3|

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 65536 Kb
## **7. Bài G**
Cho dãy số A[] gồm N số nguyên A[1], A[2],...,A[N]. Mỗi số nguyên có giá trị từ 0 đến M−1 với M là một số cho trước.

Trong một thao tác, bạn có thể chọn một số nguyên K và K chỉ số i<sub>1</sub>,i<sub>2</sub>,...,i<sub>K</sub> (với 1 ≤ i<sub>1</sub> < i<sub>2</sub> <...< i<sub>K</sub> ≤ N). Sau đó, với mỗi chỉ số i<sub>x</sub> đã chọn, bạn thay đổi giá trị A[i<sub>x</sub>] thành (A[i<sub>x</sub>]+1) (mod M).

Tìm số thao tác tối thiểu để biến dãy số A[] thành một dãy số không giảm (tức là A[1] ≤ A[2] ≤ ... ≤ A[N]).
### **Input:**
Dòng đầu tiên gồm hai số nguyên N và M (1 ≤ N, M ≤ 300000).

Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] < M).
### **Output:**
In ra một số nguyên là số thao tác tối thiểu cần được thực hiện. Nếu không cần thao tác nào, hãy in ra 0.
### **Ví dụ:**

|**Input**|**Output**|
| :- | :- |
|<p>5 3</p><p>0 0 1 3 4</p>|0|
|<p>5 7</p><p>0 6 1 3 2</p>|1|
|<p>10 10</p><p>5 0 5 9 4 6 4 5 0 0</p>|6|
### **Giải thích test:**
Test 2: Chọn bộ chỉ số (2, 5) và thực hiện 1 thao tác, dãy số mới thu được là 0 0 1 3 3 là một dãy tăng dần.

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 500000 Kb
## **8. Bài H**
Cho hai số nguyên A và B. Bạn có thể thực hiện một chuỗi các phép tính: trong phép tính đầu tiên, chọn một số và tăng nó lên 1; trong phép tính thứ hai, chọn một số và tăng nó lên 2, v.v.

Bạn được phép tự chọn số lượng các phép tính này.

Ví dụ, nếu A = 1 và B = 3, bạn có thể thực hiện chuỗi ba phép tính sau:

1\. Cộng 1 vào A, khi đó A = 2 và B = 3

2\. Cộng 2 vào B, khi đó A = 2 và B = 5

3\. Cộng 3 vào A, khi đó A = 5 và B = 5

Hãy tính số phép tính tối thiểu cần thiết để làm cho A và B bằng nhau.
### **Input:**
Dòng đầu tiên chứa số lượng bộ test T (T ≤ 100).

Mỗi test gồm hai số nguyên A và B (1 ≤ A, B ≤ 10<sup>9</sup>).
### **Output:**
Với mỗi test, hãy in ra một số nguyên là số lượng phép tính tối thiểu để biến đổi cho A và B bằng nhau trên một dòng
### **Ví dụ:**

|**Input**|**Output**|
| :- | :- |
|<p>3</p><p>1 3</p><p>11 11</p><p>30 20</p>|<p>3</p><p>0</p><p>4</p>|
### **Giải thích test:**
Test 1: Đã giải thích ở đề bài

Test 2: Hai số A và B bằng nhau nên không cần biến đổi

Test 3: Cộng từ 1 đến 4 vào B (B trở thành 20 + 1 + 2 + 3 + 4 = 30)

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 524288 Kb
## **9. Bài I**
Cho hai số tự nhiên N và K (K < N). Đếm số ước của C(K, N), với C(K, N) là số tổ hợp chập K của N phần tử
### **Input:**
Có vô số test (Yêu cầu đọc hết tất cả các dòng trong dữ liệu vào).

Mỗi test ghi trên một dòng hai số N và K (0 ≤ K ≤ N < 500).
### **Output:**
Với mỗi test, ghi kết quả trên một dòng.

Dữ liệu vào đảm bảo kết quả không vượt quá kiểu số nguyên 64 bít.
### **Ví dụ:**

|**Input**|**Output**|
| :- | :- |
|<p>5 1</p><p>6 3</p><p>10 4</p>|<p>2</p><p>6</p><p>16</p>|

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 200000 Kb
## **10. Bài J**
Một khu du lịch có n hòn đảo, hòn đảo i có độ cao hi. Để di chuyển từ hòn đảo i đến hòn đảo j, du khách có thể sử dụng tàu lượn với chi phí là max(0, h<sub>j</sub> – h<sub>i</sub>). Tuy nhiên, sau một thời gian cho thuê tàu lượn, các nhà thầu đã áp giá sàn cho đảo thứ i là pi, cụ thể để di chuyển từ đảo i đến đảo j, chi phí tính mới là max (p<sub>i</sub>, h<sub>j</sub> – h<sub>i</sub>):

Một du khách muốn đi thăm tất cả n hòn đảo bằng tàu lượn theo cách: bắt đầu từ hòn đảo 1, sử dụng tàu lượn để tới các hòn đảo khác, mỗi hòn đảo thăm đúng một lần rồi quay lại hòn đảo 1.

Yêu cầu: Hãy giúp du khách tìm hành trình di chuyển với tổng chi phí nhỏ nhất.
### **Input:**
Dòng đầu chứa số nguyên dương n (n ≤ 10<sup>5</sup>); n dòng tiếp theo, mỗi dòng gồm hai số nguyên không âm h<sub>i</sub>, p<sub>i</sub> (h<sub>i</sub>, p<sub>i</sub> ≤ 10<sup>9</sup>);
### **Output:**
Ghi ra một số là tổng chi phí nhỏ nhất tìm được.
### **Ví dụ:**

|**Input**|**Output**|
| :- | :- |
|<p>4</p><p>1 1</p><p>2 2</p><p>3 2</p><p>4 1</p>|6|

2

[ref1]: Aspose.Words.b9869112-d113-4692-b996-0f0f6e2deb4f.001.png
