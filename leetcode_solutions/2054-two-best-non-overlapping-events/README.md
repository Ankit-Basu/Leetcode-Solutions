<h2><a href="https://leetcode.com/problems/two-best-non-overlapping-events/">2054. Two Best Non-Overlapping Events</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>You are given a 0-indexed 2D integer array of events where <code>events[i] = [startTimei, endTimei, valuei]</code>. The <code>i<sup>th</sup></code> event starts at <code>startTimei</code> and ends at <code>endTimei</code>, and if you attend this event, you will receive a value of <code>valuei</code>. You can choose at most two non-overlapping events to attend such that the sum of their values is maximized.</p>

<p>Return this maximum sum.</p>

<p>Note that the start time and end time is inclusive: that is, you cannot attend two events where one of them starts and the other ends at the same time. More specifically, if you attend an event with end time <code>t</code>, the next event must start at or after <code>t + 1</code>.</p>

<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> events = [[1,3,2],[4,5,2],[2,4,3]]
<strong>Output:</strong> 4
<strong>Explanation:</strong> Choose the green events, 0 and 1 for a sum of 2 + 2 = 4.
</pre>

<p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> events = [[1,3,2],[4,5,2],[1,5,5]]
<strong>Output:</strong> 5
<strong>Explanation:</strong> Choose event 2 for a sum of 5.
</pre>

<p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> events = [[1,5,3],[1,5,1],[6,6,5]]
<strong>Output:</strong> 8
<strong>Explanation:</strong> Choose events 0 and 2 for a sum of 3 + 5 = 8.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
    <li><code>2 &lt;= events.length &lt;= 10<sup>5</sup></code></li>
    <li><code>events[i].length == 3</code></li>
    <li><code>1 &lt;= startTimei &lt;= endTimei &lt;= 10<sup>9</sup></code></li>
    <li><code>1 &lt;= valuei &lt;= 10<sup>6</sup></code></li>
</ul>
</div>
