<h2><a href="https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/">2593. Find Score of an Array After Marking All Elements</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an array <code>nums</code> consisting of positive integers.</p>  

<p>Starting with <code>score = 0</code>, apply the following algorithm:</p>  
<ol>  
<li>Choose the smallest integer of the array that is not marked. If there is a tie, choose the one with the smallest index.</li>  
<li>Add the value of the chosen integer to <code>score</code>.</li>  
<li>Mark the chosen element and its two adjacent elements if they exist.</li>  
<li>Repeat until all the array elements are marked.</li>  
</ol>  

<p>Return the score you get after applying the above algorithm.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> nums = [2,1,3,4,5,2]  
<strong>Output:</strong> 7  
<strong>Explanation:</strong>  
We mark the elements as follows:  
- 1 is the smallest unmarked element, so we mark it and its two adjacent elements: [2,1,3,4,5,2].  
- 2 is the smallest unmarked element, so we mark it and its left adjacent element: [2,1,3,4,5,2].  
- 4 is the only remaining unmarked element, so we mark it: [2,1,3,4,5,2].  
Our score is 1 + 2 + 4 = 7.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> nums = [2,3,5,1,3,2]  
<strong>Output:</strong> 5  
<strong>Explanation:</strong>  
We mark the elements as follows:  
- 1 is the smallest unmarked element, so we mark it and its two adjacent elements: [2,3,5,1,3,2].  
- 2 is the smallest unmarked element, since there are two of them, we choose the left-most one, so we mark the one at index 0 and its right adjacent element: [2,3,5,1,3,2].  
- 2 is the only remaining unmarked element, so we mark it: [2,3,5,1,3,2].  
Our score is 1 + 2 + 2 = 5.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= nums.length <= 10<sup>5</sup></code></li>  
<li><code>1 <= nums[i] <= 10<sup>6</sup></code></li>  
</ul>  
</div>  
