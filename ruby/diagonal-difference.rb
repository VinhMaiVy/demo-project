#!/bin/ruby

n = gets.strip.to_i

a = Array.new(n)
for a_i in (0..n-1)
    a_t = gets.strip
    a[a_i] = a_t.split(' ').map(&:to_i)
end

sum1 = 0
for a_i in (0..n-1)
    sum1 += a[a_i][a_i]
end

sum2 = 0
a_i = n-1
a_j = 0
while a_i >=0
    sum2 += a[a_i][a_j]
    a_i -= 1
    a_j += 1
end

puts (sum1 - sum2).abs
