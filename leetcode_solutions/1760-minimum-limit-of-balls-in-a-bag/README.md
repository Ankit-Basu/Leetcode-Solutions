<h2><a href="https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/">1760. Minimum Limit of Balls in a Bag</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an integer array <code>nums</code> where the <code>i<sup>th</sup></code> bag contains <code>nums[i]</code> balls. You are also given an integer <code>maxOperations</code>.</p>  
  
<p>You can perform the following operation at most <code>maxOperations</code> times:</p>  
  
<ul>  
  <li>Take any bag of balls and divide it into two new bags with a positive number of balls.</li>  
</ul>  
  
<p>For example, a bag of <code>5</code> balls can become two new bags of <code>1</code> and <code>4</code> balls, or two new bags of <code>2</code> and <code>3</code> balls.</p>  
  
<p>Your penalty is the maximum number of balls in a bag. You want to minimize your penalty after the operations.</p>  
  
<p>Return the minimum possible penalty after performing the operations.</p>  
  
<p><strong>Example 1:</strong></p>  
  
<pre><strong>Input:</strong> nums = [9], maxOperations = 2  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
- Divide the bag with 9 balls into two bags of sizes 6 and 3. <code>[9] -> [6,3]</code>.  
- Divide the bag with 6 balls into two bags of sizes 3 and 3. <code>[6,3] -> [3,3,3]</code>.  
The bag with the most number of balls has 3 balls, so your penalty is 3, and you should return 3.  
</pre>  
  
<p><strong>Example 2:</strong></p>  
  
<pre><strong>Input:</strong> nums = [2,4,8,2], maxOperations = 4  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
- Divide the bag with 8 balls into two bags of sizes 4 and 4. <code>[2,4,8,2] -> [2,4,4,4,2]</code>.  
- Divide the bag with 4 balls into two bags of sizes 2 and 2. <code>[2,4,4,4,2] -> [2,2,2,4,4,2]</code>.  
- Divide the bag with 4 balls into two bags of sizes 2 and 2. <code>[2,2,2,4,4,2] -> [2,2,2,2,2,4,2]</code>.  
- Divide the bag with 4 balls into two bags of sizes 2 and 2. <code>[2,2,2,2,2,4,2] -> [2,2,2,2,2,2,2,2]</code>.  
The bag with the most number of balls has 2 balls, so your penalty is 2, and you should return 2.  
</pre>  
  
<p><strong>Constraints:</strong></p>  
  
<ul>  
  <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>  
  <li><code>1 &lt;= maxOperations, nums[i] &lt;= 10<sup>9</sup></code></li>  
</ul>  
</div>  