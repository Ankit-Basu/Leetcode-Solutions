### <h2><a href="https://leetcode.com/problems/house-robber-iv/">2560. House Robber IV</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>There are several consecutive houses along a street, each of which has some money inside. There is also a robber, who wants to steal money from the homes, but he refuses to steal from adjacent homes.</p>  

<p>The <strong>capability</strong> of the robber is the maximum amount of money he steals from one house of all the houses he robbed.</p>  

<p>You are given an integer array <code>nums</code> representing how much money is stashed in each house. More formally, the <code>i<sup>th</sup></code> house from the left has <code>nums[i]</code> dollars.</p>  

<p>You are also given an integer <code>k</code>, representing the minimum number of houses the robber will steal from. It is always possible to steal at least <code>k</code> houses.</p>  

<p>Return the minimum <strong>capability</strong> of the robber out of all the possible ways to steal at least <code>k</code> houses.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [2,3,5,9], k = 2  
<strong>Output:</strong> 5  
<strong>Explanation:</strong>  
There are three ways to rob at least 2 houses:  
- Rob the houses at indices <code>0</code> and <code>2</code>. Capability is <code>max(nums[0], nums[2]) = 5</code>.  
- Rob the houses at indices <code>0</code> and <code>3</code>. Capability is <code>max(nums[0], nums[3]) = 9</code>.  
- Rob the houses at indices <code>1</code> and <code>3</code>. Capability is <code>max(nums[1], nums[3]) = 9</code>.  
Therefore, we return <code>min(5, 9, 9) = 5</code>.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> nums = [2,7,9,3,1], k = 2  
<strong>Output:</strong> 2  
<strong>Explanation:</strong>  
There are 7 ways to rob the houses. The way which leads to the minimum capability is to rob the house at index <code>0</code> and <code>4</code>.  
Return <code>max(nums[0], nums[4]) = 2</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 ≤ nums.length ≤ 10^5</code></li>  
<li><code>1 ≤ nums[i] ≤ 10^9</code></li>  
<li><code>1 ≤ k ≤ (nums.length + 1) / 2</code></li>  
</ul>  
</div>  
