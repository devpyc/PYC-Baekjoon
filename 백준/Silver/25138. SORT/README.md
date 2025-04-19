# [Silver III] SORT - 25138 

[문제 링크](https://www.acmicpc.net/problem/25138) 

### 성능 요약

메모리: 5156 KB, 시간: 24 ms

### 분류

구현, 파싱, 정렬, 문자열

### 제출 일자

2025년 4월 19일 09:34:16

### 문제 설명

<p>Mirko je prihvatio posao sortiranja hrvatskog riječnika uz uvjet da nikada neće imati doticaja sa slovima s kvačicama i crticama. Ono na što nije mislio su slova digrafi <strong>lj</strong> i <strong>nj</strong>, sastavljena od dva znaka, koja mu zadaju glavobolje iako nemaju kvačice i crtice. Tako je poredak hrvatskih slova koja se mogu pojaviti u riječima:</p>

<table class="table table-bordered td-center">
	<tbody>
		<tr>
			<td>a</td>
			<td>b</td>
			<td>c</td>
			<td>d</td>
			<td>e</td>
			<td>f</td>
			<td>g</td>
			<td>h</td>
			<td>i</td>
			<td>j</td>
			<td>k</td>
			<td>l</td>
		</tr>
		<tr>
			<td>lj</td>
			<td>m</td>
			<td>n</td>
			<td>nj</td>
			<td>o</td>
			<td>p</td>
			<td>r</td>
			<td>s</td>
			<td>t</td>
			<td>u</td>
			<td>v</td>
			<td>z</td>
		</tr>
	</tbody>
</table>

<p>Primijetite kako riječ “<strong>njegov</strong>” ima 6 znakova, ali 5 slova i u riječniku dolazi nakon riječi “<strong>novine</strong>” budući da slovo <strong><nj></strong> dolazi nakon slova <strong><n></strong>. Da je prvo slovo bilo jednako u obje riječi, sljedeće slovo bi odlučivalo o njihovom poretku, itd. Ako se uspoređuju riječi koje su nastale kao dodatak jedne na drugu, kao “<strong>pas</strong>” i “<strong>pasijans</strong>” tada kraća riječ dolazi prije duže riječi. Ovakav poredak naziva se <strong>leksikografskim</strong> budući da ga nalazimo u riječnicima i leksikonima.</p>

<p>Odredi ispravan <strong>leksikografski</strong> poredak zadanih hrvatskih riječi.</p>

### 입력 

 <p>U prvom retku nalazi se prirodan broj N, broj riječi. U sljedećih N redaka nalazi se po jedna riječ sastavljena od gore navedenih znakova. Svaka riječ sadržavati će barem jedan znak i ukupan broj znakova u svim riječima <strong>neće biti veći od 100 000</strong>.</p>

### 출력 

 <p>U N redaka ispiši ispravan <strong>leksikografski</strong> poredak zadanih riječi.</p>

