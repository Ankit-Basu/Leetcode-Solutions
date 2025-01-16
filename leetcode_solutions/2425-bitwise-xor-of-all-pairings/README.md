### <h2><a href="https://leetcode.com/problems/bitwise-xor-of-all-pairings/">2425. Bitwise XOR of All Pairings</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given two 0-indexed arrays, <code>nums1</code> and <code>nums2</code>, consisting of non-negative integers. There exists another array, <code>nums3</code>, which contains the bitwise XOR of all pairings of integers between <code>nums1</code> and <code>nums2</code> (every integer in <code>nums1</code> is paired with every integer in <code>nums2</code> exactly once).</p>  

<p>Return the bitwise XOR of all integers in <code>nums3</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> nums1 = [2,1,3], nums2 = [10,2,5,0]  
<strong>Output:</strong> 13  
<strong>Explanation:</strong>  
A possible <code>nums3</code> array is <code>[8,0,7,2,11,3,4,1,9,1,6,3]</code>.  
The bitwise XOR of all these numbers is <code>13</code>, so we return <code>13</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> nums1 = [1,2], nums2 = [3,4]  
<strong>Output:</strong> 0  
<strong>Explanation:</strong>  
All possible pairs of bitwise XORs are <code>nums1[0] ^ nums2[0]</code>, <code>nums1[0] ^ nums2[1]</code>, <code>nums1[1] ^ nums2[0]</code>,  
and <code>nums1[1] ^ nums2[1]</code>.  
Thus, one possible <code>nums3</code> array is <code>[2,5,1,6]</code>.  
<code>2 ^ 5 ^ 1 ^ 6 = 0</code>, so we return <code>0</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= nums1.length, nums2.length <= 10<sup>5</sup></code></li>  
<li><code>0 <= nums1[i], nums2[j] <= 10<sup>9</sup></code></li>  
</ul>  
</div>  
