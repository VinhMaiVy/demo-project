# Enter your code here. Read input from STDIN. Print output to STDOUT
def factorial (n)
    return 1 if n==1 
    n*factorial(n-1)
end


puts factorial(1)
puts factorial(5)
puts factorial(10)
