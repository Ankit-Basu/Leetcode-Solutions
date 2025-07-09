### <h2><a href="https://leetcode.com/problems/reschedule-meetings-for-maximum-free-time-i/">3439. Reschedule Meetings for Maximum Free Time I</a></h2>

<h3>Medium</h3>  
<hr>

<p>You are given an integer <code>eventTime</code> representing the duration of an event, where the event runs from time <code>t = 0</code> to <code>t = eventTime</code>.</p>

<p>You are also given two integer arrays <code>startTime</code> and <code>endTime</code>, both of length <code>n</code>, representing <code>n</code> non-overlapping meetings. The <code>i<sup>th</sup></code> meeting occurs during the interval <code>[startTime[i], endTime[i]]</code>.</p>

<p>You may reschedule at most <code>k</code> meetings by adjusting their <strong>start times</strong> while keeping the same duration. Your goal is to maximize the longest continuous period of free time within the event duration.</p>

<p>The relative order of the meetings must remain the same, and meetings must remain non-overlapping and within the <code>[0, eventTime]</code> range.</p>

<p>Return the <strong>maximum free time</strong> achievable after rescheduling at most <code>k</code> meetings.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> eventTime = 5, k = 1, startTime = [1,3], endTime = [2,5]
<strong>Output:</strong> 2

<strong>Explanation:</strong>
Reschedule \[1,2] to \[2,3] ⇒ Free time is \[0,2]. </pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> eventTime = 10, k = 1, startTime = [0,2,9], endTime = [1,4,10]
<strong>Output:</strong> 6

<strong>Explanation:</strong>
Reschedule \[2,4] to \[1,3] ⇒ Free time is \[3,9]. </pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> eventTime = 5, k = 2, startTime = [0,1,2,3,4], endTime = [1,2,3,4,5]
<strong>Output:</strong> 0

<strong>Explanation:</strong>
All times are fully occupied by meetings. </pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= eventTime <= 10<sup>9</sup></code></li>
  <li><code>n == startTime.length == endTime.length</code></li>
  <li><code>2 <= n <= 10<sup>5</sup></code></li>
  <li><code>1 <= k <= n</code></li>
  <li><code>0 <= startTime[i] < endTime[i] <= eventTime</code></li>
  <li><code>endTime[i] <= startTime[i + 1]</code> for all <code>i</code> in <code>[0, n - 2]</code></li>
</ul>
