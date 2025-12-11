# [Platinum V] Balanced Photo - 14449 

[문제 링크](https://www.acmicpc.net/problem/14449) 

### 성능 요약

메모리: 9932 KB, 시간: 104 ms

### 분류

자료 구조, 세그먼트 트리

### 제출 일자

2025년 12월 11일 19:49:31

### 문제 설명

<p>Farmer John is arranging his N cows in a line to take a photo (1 ≤ N ≤ 100,000). The height of the ith cow in sequence is h<sub>i</sub>, and the heights of all cows are distinct.</p>

<p>As with all photographs of his cows, FJ wants this one to come out looking as nice as possible. He decides that cow i looks "unbalanced" if L<sub>i </sub>and R<sub>i </sub>differ by more than factor of 2, where L<sub>i </sub>and R<sub>i</sub> are the number of cows taller than i on her left and right, respectively. That is, i is unbalanced if the larger of L<sub>i</sub> and R<sub>i</sub> is strictly more than twice the smaller of these two numbers. FJ is hoping that not too many of his cows are unbalanced.</p>

<p>Please help FJ compute the total number of unbalanced cows.</p>

### 입력 

 <p>The first line of input contains N. The next N lines contain h<sub>1</sub>…h<sub>N</sub>, each a nonnegative integer at most 1,000,000,000.</p>

### 출력 

 <p>Please output a count of the number of cows that are unbalanced.</p>

<p> </p>

