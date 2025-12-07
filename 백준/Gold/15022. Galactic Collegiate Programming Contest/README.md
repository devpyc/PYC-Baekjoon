# [Gold II] Galactic Collegiate Programming Contest - 15022 

[문제 링크](https://www.acmicpc.net/problem/15022) 

### 성능 요약

메모리: 9152 KB, 시간: 168 ms

### 분류

자료 구조, 세그먼트 트리, 트리를 사용한 집합과 맵, 집합과 맵

### 제출 일자

2025년 12월 7일 23:14:44

### 문제 설명

<p>One hundred years from now, in 2117, the International Collegiate Programming Contest (of which the NCPC is a part) has expanded significantly and it is now the Galactic Collegiate Programming Contest (GCPC).</p>

<p>This year there are n teams in the contest. The teams are numbered 1, 2, . . . , n, and your favorite team has number 1.</p>

<p>Like today, the score of a team is a pair of integers (a, b) where a is the number of solved problems and b is the total penalty of that team. When a team solves a problem there is some associated penalty (not necessarily calculated in the same way as in the NCPC – the precise details are not important in this problem). The total penalty of a team is the sum of the penalties for the solved problems of the team.</p>

<p>Consider two teams t<sub>1</sub> and t<sub>2</sub> whose scores are (a<sub>1</sub>, b<sub>1</sub>) and (a<sub>2</sub>, b<sub>2</sub>). The score of team t<sub>1</sub> is better than that of t<sub>2</sub> if either a<sub>1</sub> > a<sub>2</sub>, or if a<sub>1</sub> = a<sub>2</sub> and b<sub>1</sub> < b<sub>2</sub>. The rank of a team is k + 1 where k is the number of teams whose score is better.</p>

<p>You would like to follow the performance of your favorite team. Unfortunately, the organizers of GCPC do not provide a scoreboard. Instead, they send a message immediately whenever a team solves a problem.</p>

### 입력 

 <p>The first line of input contains two integers n and m, where 1 ≤ n ≤ 10<sup>5</sup> is the number of teams, and 1 ≤ m ≤ 10<sup>5</sup> is the number of events.</p>

<p>Then follow m lines that describe the events. Each line contains two integers t and p (1 ≤ t ≤ n and 1 ≤ p ≤ 1000), meaning that team t has solved a problem with penalty p. The events are ordered by the time when they happen.</p>

### 출력 

 <p>Output m lines. On the i’th line, output the rank of your favorite team after the first i events have happened.</p>

