---
theme: neversink
routerMode: hash
title: \#3 MCU (Ⅱ)
class: text-center
transition: slide-left
comark: true
slide_info: false
neversink_slug: 'AI 概論與實作體驗 #3 MCU (Ⅱ)'
---

<h1 style="font-size: 2.5rem; font-weight: bold;">AI 概論與實作體驗</h1>
<h1 style="font-size: 5rem; margin-top: 0px; font-weight: bold;">#3 MCU (Ⅱ)</h1>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>演算法 (Algorithm)</span><span style="font-size: 2rem; color: gray;">解決問題的方法</span>
</h1>

::content::

<div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
    <div style="width: 34%; padding-right: 20px; display: flex; flex-direction: column; align-items: center; box-sizing: border-box;">
        <h2 style="width: 100%; text-align: left; margin-bottom: 10px;">
            <span style="background:#FFE45E; color:black;">演算法是 AI 的靈魂</span>，也是<span style="background:#FFE45E; color:black;">程式設計的基礎</span>，現今的生成式 AI 利用多模態輸入處理問題，靠的就是分析事件後利用演算法判斷並尋找解法。<br>
            人類處理事情時腦中其實也在跑演算法，<span style="background:#FFE45E; color:black;">專家系統</span>便是將人腦中的演算法具象化的成品。
        </h2>
    </div>
    <div style="width: 66%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
        <a href="https://youtu.be/i-wpzS9ZsCs?si=AaSiercHSYeEd4yF&t=2526" target="_blank" style="display: block; width: 100%; text-align: center;">
            <img src="./public/videoframe_2526019.png" style="width: 100%; height: auto; margin-top: 10px; margin-bottom: 10px;">
        </a>
        <span style="font-size: 12px; color: #666; text-align: center;">
            NVIDIA Keynote at COMPUTEX 2023 <a href="https://youtu.be/i-wpzS9ZsCs?si=AaSiercHSYeEd4yF&t=2526" target="_blank">Link</a>
        </span>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>補充：演算法能力的標準</span><span style="font-size: 2rem; color: gray;">程式能力檢測/檢定</span>
</h1>

::content::

<div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
    <div style="width: 50%; padding-right: 20px; display: flex; flex-direction: column; align-items: center; box-sizing: border-box;">
        <h2 style="width: 100%; text-align: left; margin-bottom: 10px;">
            已有明確分級的程式競賽題目來說，CPE 將 UVa 題庫分為 5 個星等，三星題需要能<span style="background:#FFE45E; color:black;">熟練使用進階演算法</span>才能解出，以上次 (2026/05/26) 來說，答題並答對約占考生 1%。<br>
            或以 APCS 為例，分數標準達到五級代表<span style="background:#FFE45E; color:black;">具備基礎演算法程序運用能力</span>。
        </h2>
    </div>
    <div style="width: 50%; display: flex; flex-direction: column; align-items: center; text-align: center; box-sizing: border-box;">
        <iframe 
    src="https://cpe.mcu.edu.tw/cpe/test_data/2026-05-26" 
    width="100%" 
    height="600px" 
    style="border: none;" 
    title="CPE 測試資料 - 2026-05-26">
</iframe>
    </div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>今天的目標</span><span style="font-size: 2rem; color: gray;">進階燈泡閃爍實作</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 66%; padding-right: 20px; box-sizing: border-box;">
            <h2>第奇數次點亮 LED 時，LED 長亮；<br>
            第偶數次點亮 LED 時，LED 閃爍。<br><br>
            要用到的新知識：<br>變數<br>邏輯判斷<br><span style="background:#FFE45E; color:black;">防彈跳</span></h2><br><br>
            <div v-click="1"><h2 style="font-size: 2.5rem;">先來學怎麼用按鈕點亮燈</h2></div>
		</div>
		<div style="width:50%; display: flex; flex-direction: column; align-items: center; text-align: left; box-sizing: border-box;">
			<img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgvdOknAOI7PQolLltkn61HNE55XUFd80KIwtv6z5rdywfxkNVym1A9cofsxYfQI0PEmPgW4UJhukMIGJOH1AzXZMBKUMxjxJFtKiUpGcQxSWNYvV9fKPCG06cIGtABNcXGnP2j2_py09qf/s800/saigai_kaichu_dentou_check.png">
    	</div>
	</div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>認識按鈕開關</span><span style="font-size: 2rem; color: gray;">認識基礎元件</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 50%; padding-right: 20px; box-sizing: border-box;">
            <h2>有兩根或四根針腳 (pins) 的版本，當按下按鈕時，兩根的按鈕開關兩根針腳互通，四根針腳的同向互通。<br>
            因為金屬<span style="background:#FFE45E; color:black;">彈性碰撞</span>與非自鎖式按鈕的特性，通常需要設定防彈跳 (Debounce) 機制解決彈跳問題。</h2>
		</div>
		<div style="width:40%; display: flex; flex-direction: column; align-items: center; text-align: left; box-sizing: border-box;">
			<img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgusooCU4dn9AfQhUuuqu0OfPeOP0EyGpKXfSG1BQJK6UD4poRwMA25tfABcEWjmRXBRS1Taa5tA8C8JOqhvEZgwneWaoSXHNvuknATJq5DwhIp-M-qAqfpl-rHs-1MPyU7M1yUsYOl7NQ/s800/pose_button_osu.png">
    	</div>
	</div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>按鈕開關開燈實作</span><span style="font-size: 2rem; color: gray;">簡單的實作 (Ⅱ)</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: center; box-sizing: border-box;">
        <div style="width: 100%; padding-right: 20px; box-sizing: border-box;">
			<video autoplay loop style="height: auto; width: auto;" src="./public/course2-1.mp4"></video> 
    	</div>
	</div>
</div>

---
transition: slide-left
layout: top-title
color: dark
---

::title::

<h1 style="font-size: 3rem; padding-top: 10px; padding-bottom: 10px; font-weight: bold;  display: flex; justify-content: space-between;">
   <span>按鈕開關開燈實作</span><span style="font-size: 2rem; color: gray;">進階按鈕開燈實作</span>
</h1>

::content::

<div style="margin-bottom: 10px;">
    <div style="width: 100%; display: flex; align-items: flex-start; box-sizing: border-box;">
        <div style="width: 100%; padding-right: 20px; box-sizing: border-box;">
			<video autoplay loop style="height: auto; width: auto;" src="./public/course2-1.mp4"></video> 
    	</div>
	</div>
</div>