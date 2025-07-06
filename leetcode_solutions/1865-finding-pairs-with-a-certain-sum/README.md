### <h2><a href="https://leetcode.com/problems/finding-pairs-with-a-certain-sum/">1865. Finding Pairs With a Certain Sum</a></h2>

<h3>Medium</h3>  
<hr>

<p>You are given two integer arrays <code>nums1</code> and <code>nums2</code>. Your task is to implement a data structure that supports the following operations:</p>

<ul>
  <li><code>add(index, val)</code> — Add <code>val</code> to <code>nums2[index]</code>.</li>
  <li><code>count(tot)</code> — Count the number of pairs <code>(i, j)</code> such that <code>nums1[i] + nums2[j] == tot</code>.</li>
</ul>

<p>Implement the <code>FindSumPairs</code> class:</p>

<ul>
  <li><code>FindSumPairs(int[] nums1, int[] nums2)</code> Initializes the object with the arrays <code>nums1</code> and <code>nums2</code>.</li>
  <li><code>void add(int index, int val)</code> Adds <code>val</code> to <code>nums2[index]</code>.</li>
  <li><code>int count(int tot)</code> Returns the number of pairs <code>(i, j)</code> where <code>nums1[i] + nums2[j] == tot</code>.</li>
</ul>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong>
["FindSumPairs", "count", "add", "count", "count", "add", "add", "count"]
[[[1, 1, 2, 2, 2, 3], [1, 4, 5, 2, 5, 4]], [7], [3, 2], [8], [4], [0, 1], [1, 1], [7]]

<strong>Output:</strong>
\[null, 8, null, 2, 1, null, null, 11]

<strong>Explanation:</strong>
FindSumPairs findSumPairs = new FindSumPairs(\[1, 1, 2, 2, 2, 3], \[1, 4, 5, 2, 5, 4]);
findSumPairs.count(7);  // return 8
findSumPairs.add(3, 2); // nums2 becomes \[1,4,5,4,5,4]
findSumPairs.count(8);  // return 2
findSumPairs.count(4);  // return 1
findSumPairs.add(0, 1); // nums2 becomes \[2,4,5,4,5,4]
findSumPairs.add(1, 1); // nums2 becomes \[2,5,5,4,5,4]
findSumPairs.count(7);  // return 11 </pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= nums1.length <= 1000</code></li>
  <li><code>1 <= nums2.length <= 10<sup>5</sup></code></li>
  <li><code>1 <= nums1[i] <= 10<sup>9</sup></code></li>
  <li><code>1 <= nums2[i] <= 10<sup>5</sup></code></li>
  <li><code>0 <= index < nums2.length</code></li>
  <li><code>1 <= val <= 10<sup>5</sup></code></li>
  <li><code>1 <= tot <= 10<sup>9</sup></code></li>
  <li>At most 1000 calls are made to <code>add</code> and <code>count</code> each.</li>
</ul>
