def factorial (n)
    if n == 0
        1
    else
        n * factorial(n-1)
    end
end

n = gets.to_i
puts factorial (n)

puts factorial (10)
