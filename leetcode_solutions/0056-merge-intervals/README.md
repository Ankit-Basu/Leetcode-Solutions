<h2><a href="https://leetcode.com/problems/merge-intervals/">56. Merge Intervals</a></h2>
<h3>Medium</h3>
<hr>
<div>
<p>Given an array of intervals where <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code>, merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> intervals = [[1,3],[2,6],[8,10],[15,18]]
<strong>Output:</strong> [[1,6],[8,10],[15,18]]
<strong>Explanation:</strong> Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> intervals = [[1,4],[4,5]]
<strong>Output:</strong> [[1,5]]
<strong>Explanation:</strong> Intervals [1,4] and [4,5] are considered overlapping.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &le; intervals.length &le; 10<sup>4</sup></code></li>
  <li><code>intervals[i].length == 2</code></li>
  <li><code>0 &le; start<sub>i</sub> &le; end<sub>i</sub> &le; 10<sup>4</sup></code></li>
</ul>
</div>
