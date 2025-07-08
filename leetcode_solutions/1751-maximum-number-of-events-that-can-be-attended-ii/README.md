### <h2><a href="https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended/">1353. Maximum Number of Events That Can Be Attended</a></h2>

<h3>Medium</h3>  
<hr>

<p>You are given an array of events where <code>events[i] = [startDay<sub>i</sub>, endDay<sub>i</sub>]</code>. Every event <code>i</code> starts at <code>startDay<sub>i</sub></code> and ends at <code>endDay<sub>i</sub></code>.</p>

<p>You can attend an event <code>i</code> on any day <code>d</code> such that <code>startDay<sub>i</sub> <= d <= endDay<sub>i</sub></code>. You can only attend one event on any given day.</p>

<p>Return the <strong>maximum number of events</strong> you can attend.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> events = [[1,2],[2,3],[3,4]]
<strong>Output:</strong> 3

<strong>Explanation:</strong>
You can attend all three events:

* Attend the first event on day 1.
* Attend the second event on day 2.
* Attend the third event on day 3.

  </pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> events = [[1,2],[2,3],[3,4],[1,2]]
<strong>Output:</strong> 4
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= events.length <= 10<sup>5</sup></code></li>
  <li><code>events[i].length == 2</code></li>
  <li><code>1 <= startDay<sub>i</sub> <= endDay<sub>i</sub> <= 10<sup>5</sup></code></li>
</ul>
