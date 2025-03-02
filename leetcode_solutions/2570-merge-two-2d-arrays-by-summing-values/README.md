### <h2><a href="https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/">2570. Merge Two 2D Arrays by Summing Values</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given two 2D integer arrays <code>nums1</code> and <code>nums2</code>.</p>  

<ul>  
<li><code>nums1[i] = [idi, vali]</code> indicates that the number with the id <code>idi</code> has a value equal to <code>vali</code>.</li>  
<li><code>nums2[i] = [idi, vali]</code> indicates that the number with the id <code>idi</code> has a value equal to <code>vali</code>.</li>  
</ul>  

<p>Each array contains unique ids and is sorted in ascending order by <code>id</code>.</p>  

<p>Merge the two arrays into one array that is sorted in ascending order by <code>id</code>, respecting the following conditions:</p>  

<ul>  
<li>Only ids that appear in at least one of the two arrays should be included in the resulting array.</li>  
<li>Each <code>id</code> should be included only once, and its value should be the sum of the values of this <code>id</code> in the two arrays. If the <code>id</code> does not exist in one of the two arrays, then assume its value in that array to be <code>0</code>.</li>  
</ul>  

<p>Return the resulting array. The returned array must be sorted in ascending order by <code>id</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums1 = [[1,2],[2,3],[4,5]], nums2 = [[1,4],[3,2],[4,1]]  
<strong>Output:</strong> [[1,6],[2,3],[3,2],[4,6]]  
<strong>Explanation:</strong> The resulting array contains the following:  
- id = 1, the value of this id is 2 + 4 = 6.  
- id = 2, the value of this id is 3.  
- id = 3, the value of this id is 2.  
- id = 4, the value of this id is 5 + 1 = 6.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums1 = [[2,4],[3,6],[5,5]], nums2 = [[1,3],[4,3]]  
<strong>Output:</strong> [[1,3],[2,4],[3,6],[4,3],[5,5]]  
<strong>Explanation:</strong> There are no common ids, so we just include each id with its value in the resulting list.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 ≤ nums1.length, nums2.length ≤ 200</code></li>  
<li><code>nums1[i].length == nums2[j].length == 2</code></li>  
<li><code>1 ≤ idi, vali ≤ 1000</code></li>  
<li>Both arrays contain unique ids.</li>  
<li>Both arrays are in strictly ascending order by <code>id</code>.</li>  
</ul>  
</div>  
