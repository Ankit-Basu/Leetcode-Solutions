<h2><a href="https://leetcode.com/problems/maximize-subarrays-after-removing-one-conflicting-pair/">3480. Maximize Subarrays After Removing One Conflicting Pair</a></h2>
<h3>Hard</h3>
<hr>
<div>
<p>You are given an integer <code>n</code> which represents an array <code>nums</code> containing the numbers from <code>1</code> to <code>n</code> in order. Additionally, you are given a 2D array <code>conflictingPairs</code>, where <code>conflictingPairs[i] = [a, b]</code> indicates that <code>a</code> and <code>b</code> form a conflicting pair.</p>

<p>Remove exactly one element from <code>conflictingPairs</code>. Afterward, count the number of non-empty subarrays of <code>nums</code> which do not contain both <code>a</code> and <code>b</code> for any remaining conflicting pair <code>[a, b]</code>.</p>

<p>Return the <strong>maximum number</strong> of such subarrays possible after removing exactly one conflicting pair.</p>

<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> n = 4, conflictingPairs = [[2,3],[1,4]]
<strong>Output:</strong> 9
<strong>Explanation:</strong> Remove [2, 3] from conflictingPairs. Now, conflictingPairs = [[1, 4]].
There are 9 subarrays in nums where [1, 4] do not appear together. 
They are: [1], [2], [3], [4], [1,2], [2,3], [3,4], [1,2,3], [2,3,4].
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> n = 5, conflictingPairs = [[1,2],[2,5],[3,5]]
<strong>Output:</strong> 12
<strong>Explanation:</strong> Remove [1, 2] from conflictingPairs. Now, conflictingPairs = [[2, 5], [3, 5]].
There are 12 subarrays in nums where neither [2, 5] nor [3, 5] appear together.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>2 &le; n &le; 10<sup>5</sup></code></li>
  <li><code>1 &le; conflictingPairs.length &le; 2 * n</code></li>
  <li><code>conflictingPairs[i].length == 2</code></li>
  <li><code>1 &le; conflictingPairs[i][j] &le; n</code></li>
  <li><code>conflictingPairs[i][0] != conflictingPairs[i][1]</code></li>
</ul>
</div>
