### <h2><a href="https://leetcode.com/problems/apply-operations-to-maximize-score/">2818. Apply Operations to Maximize Score</a></h2>  
<h3>Hard</h3>  
<hr>  
<div>  
<p>You are given an array <code>nums</code> of <code>n</code> positive integers and an integer <code>k</code>.</p>  

<p>Initially, you start with a score of <code>1</code>. You have to maximize your score by applying the following operation at most <code>k</code> times:</p>  

<ul>  
<li>Choose any non-empty subarray <code>nums[l, ..., r]</code> that you haven't chosen previously.</li>  
<li>Choose an element <code>x</code> of <code>nums[l, ..., r]</code> with the highest prime score. If multiple such elements exist, choose the one with the smallest index.</li>  
<li>Multiply your score by <code>x</code>.</li>  
</ul>  

<p>Here, <code>nums[l, ..., r]</code> denotes the subarray of <code>nums</code> starting at index <code>l</code> and ending at index <code>r</code>, both ends being inclusive.</p>  

<p>The prime score of an integer <code>x</code> is equal to the number of distinct prime factors of <code>x</code>. For example, the prime score of <code>300</code> is <code>3</code> since <code>300 = 2 × 2 × 3 × 5 × 5</code>.</p>  

<p>Return the maximum possible score after applying at most <code>k</code> operations.</p>  

<p>Since the answer may be large, return it modulo <code>10⁹ + 7</code>.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [8,3,9,3,8], k = 2  
<strong>Output:</strong> 81  
<strong>Explanation:</strong>  
To get a score of 81, we can apply the following operations:  
- Choose subarray nums[2, ..., 2]. nums[2] is the only element in this subarray. Hence, we multiply the score by nums[2]. The score becomes <code>1 × 9 = 9</code>.  
- Choose subarray nums[2, ..., 3]. Both nums[2] and nums[3] have a prime score of <code>1</code>, but nums[2] has the smaller index. Hence, we multiply the score by nums[2]. The score becomes <code>9 × 9 = 81</code>.  
It can be proven that <code>81</code> is the highest score one can obtain.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [19,12,14,6,10,18], k = 3  
<strong>Output:</strong> 4788  
<strong>Explanation:</strong>  
To get a score of <code>4788</code>, we can apply the following operations:  
- Choose subarray nums[0, ..., 0]. nums[0] is the only element in this subarray. Hence, we multiply the score by nums[0]. The score becomes <code>1 × 19 = 19</code>.  
- Choose subarray nums[5, ..., 5]. nums[5] is the only element in this subarray. Hence, we multiply the score by nums[5]. The score becomes <code>19 × 18 = 342</code>.  
- Choose subarray nums[2, ..., 3]. Both nums[2] and nums[3] have a prime score of <code>2</code>, but nums[2] has the smaller index. Hence, we multiply the score by nums[2]. The score becomes <code>342 × 14 = 4788</code>.  
It can be proven that <code>4788</code> is the highest score one can obtain.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 ≤ nums.length == n ≤ 10⁵</code></li>  
<li><code>1 ≤ nums[i] ≤ 10⁵</code></li>  
<li><code>1 ≤ k ≤ min(n × (n + 1) / 2, 10⁹)</code></li>  
</ul>  
</div>  
