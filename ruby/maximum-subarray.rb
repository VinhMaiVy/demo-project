#!/bin/ruby

def kadane_max_subarray(a)
    max_so_far = -10000
    max_ending_here = -10000
    a.each do |i|
      max_ending_here = [i, max_ending_here + i].max
      max_so_far = [max_so_far, max_ending_here].max
    end
    return max_so_far
end

def max_subarray(a)
    if a.size() == 1 then return a[0] end
    max = 0
    a.each do |i|
        if (i>0) then max += i end
    end
    if max == 0 then
        max = -10000
       a.each do |i|
            if (i>max) then max = i end
        end 
    end
    return max
end

 t = gets.strip.to_i
 arr = Array.new
 max_arr = Array.new(t) { Array.new(2) }
 
 for i in (0..t-1)
    gets.strip.to_i
    arr = gets.strip
    arr = arr.split(' ').map(&:to_i)
    max_arr[i][0] = kadane_max_subarray(arr)
    max_arr[i][1] = max_subarray(arr)
 end
 
 for i in (0..t-1)
    puts "#{max_arr[i][0]} #{max_arr[i][1]}"
 end