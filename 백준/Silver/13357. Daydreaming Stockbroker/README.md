# [Silver III] Daydreaming Stockbroker - 13357 

[문제 링크](https://www.acmicpc.net/problem/13357) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

그리디 알고리즘

### 제출 일자

2025년 3월 24일 19:57:00

### 문제 설명

<p>Gina Reed, the famous stockbroker, is having a slow day at work, and between rounds of solitaire she is daydreaming. Foretelling the future is hard, but imagine if you could just go back in time and use your knowledge of stock price history in order to maximize your profits!</p>

<p>Now Gina starts to wonder: if she were to go back in time a few days and bring a measly <span>$</span>100 with her, how much money could she make by just buying and selling stock in Rollercoaster Inc. (the most volatile stock in existence) at the right times? Would she earn enough to retire comfortably in a mansion on Tenerife?</p>

<p>Note that Gina can not buy fractional shares, she must buy whole shares in Rollercoaster Inc. The total number of shares in Rollercoaster Inc. is 100 000, so Gina can not own more than 100 000 shares at any time. In Gina’s daydream, the world is nice and simple: there are no fees for buying and selling stocks, stock prices change only once per day, and her trading does not influence the valuation of the stock.</p>

### 입력 

 <p>The first line of input contains an integer d (1 ≤ d ≤ 365), the number of days that Gina goes back in time in her daydream. Then follow d lines, the i’th of which contains an integer p<sub>i </sub>(1 ≤ p<sub>i</sub> ≤ 500) giving the price at which Gina can buy or sell stock in Rollercoaster Inc. on day i. Days are ordered from oldest to newest.</p>

### 출력 

 <p>Output the maximum possible amount of money Gina can have on the last day. Note that the answer may exceed 2<sup>32</sup>.</p>

