combination = -> (n) do
    -> (r) do
        one = (1..n).inject(:*) || 1
        two = (1..r).inject(:*) || 1
        three = (1..(n-r)).inject(:*) || 1
        one/(two*three)
    end
end
    
n = gets.to_i
r = gets.to_i
nCr = combination.(n) 
puts nCr.(r)
