### <h2><a href="https://leetcode.com/problems/reschedule-meetings-for-maximum-free-time-ii/">3440. Reschedule Meetings for Maximum Free Time II</a></h2>

<h3>Medium</h3>  
<hr>

<p>You are given an integer <code>eventTime</code> representing the duration of an event. You are also given two integer arrays <code>startTime</code> and <code>endTime</code>, both of length <code>n</code>, representing <code>n</code> non-overlapping meetings.</p>

<p>The <code>i<sup>th</sup></code> meeting occurs during the interval <code>[startTime[i], endTime[i]]</code>, and all meetings occur between time <code>t = 0</code> and <code>t = eventTime</code>.</p>

<p>You may reschedule <strong>at most one meeting</strong> by moving its <strong>start time</strong> (while maintaining the same duration), such that the meetings remain non-overlapping. Your goal is to maximize the longest continuous period of free time during the event.</p>

<p>Unlike version I, the relative ordering of meetings can change after rescheduling.</p>

<p>Return the <strong>maximum free time</strong> achievable after rescheduling at most one meeting.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> eventTime = 5, startTime = [1,3], endTime = [2,5]
<strong>Output:</strong> 2

<strong>Explanation:</strong>
Reschedule \[1,2] to \[2,3] ⇒ Free time is \[0,2]. </pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> eventTime = 10, startTime = [0,7,9], endTime = [1,8,10]
<strong>Output:</strong> 7

<strong>Explanation:</strong>
Reschedule \[0,1] to \[8,9] ⇒ Free time is \[0,7]. </pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> eventTime = 10, startTime = [0,3,7,9], endTime = [1,4,8,10]
<strong>Output:</strong> 6

<strong>Explanation:</strong>
Reschedule \[3,4] to \[8,9] ⇒ Free time is \[1,7]. </pre>

<h4>Example 4:</h4>
<pre>
<strong>Input:</strong> eventTime = 5, startTime = [0,1,2,3,4], endTime = [1,2,3,4,5]
<strong>Output:</strong> 0

<strong>Explanation:</strong>
No free time is available in the event duration. </pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= eventTime <= 10<sup>9</sup></code></li>
  <li><code>n == startTime.length == endTime.length</code></li>
  <li><code>2 <= n <= 10<sup>5</sup></code></li>
  <li><code>0 <= startTime[i] < endTime[i] <= eventTime</code></li>
  <li><code>endTime[i] <= startTime[i + 1]</code> for all <code>i</code> in <code>[0, n - 2]</code></li>
</ul>
