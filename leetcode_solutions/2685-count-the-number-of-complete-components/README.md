### <h2><a href="https://leetcode.com/problems/find-all-possible-recipes-from-given-supplies/">2115. Find All Possible Recipes from Given Supplies</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You have information about <code>n</code> different recipes. You are given a string array <code>recipes</code> and a 2D string array <code>ingredients</code>. The <code>iᵗʰ</code> recipe has the name <code>recipes[i]</code>, and you can create it if you have all the needed ingredients from <code>ingredients[i]</code>. A recipe can also be an ingredient for other recipes, i.e., <code>ingredients[i]</code> may contain a string that is in <code>recipes</code>.</p>  

<p>You are also given a string array <code>supplies</code> containing all the ingredients that you initially have, and you have an infinite supply of all of them.</p>  

<p>Return a list of all the recipes that you can create. You may return the answer in any order.</p>  

<p>Note that two recipes may contain each other in their ingredients.</p>  

<p><strong>Example 1:</strong></p>  
<pre>  
<strong>Input:</strong> recipes = ["bread"], ingredients = [["yeast","flour"]], supplies = ["yeast","flour","corn"]  
<strong>Output:</strong> ["bread"]  
<strong>Explanation:</strong>  
We can create "bread" since we have the ingredients "yeast" and "flour".  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre>  
<strong>Input:</strong> recipes = ["bread","sandwich"], ingredients = [["yeast","flour"],["bread","meat"]], supplies = ["yeast","flour","meat"]  
<strong>Output:</strong> ["bread","sandwich"]  
<strong>Explanation:</strong>  
We can create "bread" since we have the ingredients "yeast" and "flour".  
We can create "sandwich" since we have the ingredient "meat" and can create the ingredient "bread".  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre>  
<strong>Input:</strong> recipes = ["bread","sandwich","burger"], ingredients = [["yeast","flour"],["bread","meat"],["sandwich","meat","bread"]], supplies = ["yeast","flour","meat"]  
<strong>Output:</strong> ["bread","sandwich","burger"]  
<strong>Explanation:</strong>  
We can create "bread" since we have the ingredients "yeast" and "flour".  
We can create "sandwich" since we have the ingredient "meat" and can create the ingredient "bread".  
We can create "burger" since we have the ingredient "meat" and can create the ingredients "bread" and "sandwich".  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>n == recipes.length == ingredients.length</code></li>  
<li><code>1 ≤ n ≤ 100</code></li>  
<li><code>1 ≤ ingredients[i].length, supplies.length ≤ 100</code></li>  
<li><code>1 ≤ recipes[i].length, ingredients[i][j].length, supplies[k].length ≤ 10</code></li>  
<li><code>recipes[i]</code>, <code>ingredients[i][j]</code>, and <code>supplies[k]</code> consist only of lowercase English letters.</li>  
<li>All the values of <code>recipes</code> and <code>supplies</code> combined are unique.</li>  
<li>Each <code>ingredients[i]</code> does not contain any duplicate values.</li>  
</ul>  
</div>  
