### <h2><a href="https://leetcode.com/problems/solving-questions-with-brainpower/">2140. Solving Questions With Brainpower</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a <code>0-indexed</code> 2D integer array <code>questions</code> where <code>questions[i] = [pointsi, brainpoweri]</code>.</p>  

<p>The array describes the questions of an exam, where you have to process the questions in order (i.e., starting from question <code>0</code>) and make a decision whether to solve or skip each question. Solving question <code>i</code> will earn you <code>pointsi</code> points but you will be unable to solve each of the next <code>brainpoweri</code> questions.</p>  

<p>For example, given <code>questions = [[3, 2], [4, 3], [4, 4], [2, 5]]</code>:</p>  
<ul>  
<li>If question <code>0</code> is solved, you will earn <code>3</code> points but you will be unable to solve questions <code>1</code> and <code>2</code>.</li>  
<li>If instead, question <code>0</code> is skipped and question <code>1</code> is solved, you will earn <code>4</code> points but you will be unable to solve questions <code>2</code> and <code>3</code>.</li>  
</ul>  

<p>Return the maximum points you can earn for the exam.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> questions = [[3,2],[4,3],[4,4],[2,5]]  
<strong>Output:</strong> 5  
<strong>Explanation:</strong> The maximum points can be earned by solving questions <code>0</code> and <code>3</code>.  
- Solve question <code>0</code>: Earn <code>3</code> points, will be unable to solve the next <code>2</code> questions  
- Unable to solve questions <code>1</code> and <code>2</code>  
- Solve question <code>3</code>: Earn <code>2</code> points  
Total points earned: <code>3 + 2 = 5</code>. There is no other way to earn <code>5</code> or more points.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> questions = [[1,1],[2,2],[3,3],[4,4],[5,5]]  
<strong>Output:</strong> 7  
<strong>Explanation:</strong> The maximum points can be earned by solving questions <code>1</code> and <code>4</code>.  
- Skip question <code>0</code>  
- Solve question <code>1</code>: Earn <code>2</code> points, will be unable to solve the next <code>2</code> questions  
- Unable to solve questions <code>2</code> and <code>3</code>  
- Solve question <code>4</code>: Earn <code>5</code> points  
Total points earned: <code>2 + 5 = 7</code>. There is no other way to earn <code>7</code> or more points.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 ≤ questions.length ≤ 10⁵</code></li>  
<li><code>questions[i].length == 2</code></li>  
<li><code>1 ≤ pointsi, brainpoweri ≤ 10⁵</code></li>  
</ul>  
</div>  
