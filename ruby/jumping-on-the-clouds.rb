#!/bin/ruby

gets.strip.to_i
c = gets.strip
c = c.split(' ').map(&:to_i)


a = []
a.push(1)
for i in (1..c.size-2)
    if c[i+1] == 1 then 
        a.push(1)
    else
        if c[i-1] == 1 then 
            a.push(1)
        else
            if c[i] == 0 then 
                if c[i-1] != 0 then
                    a.push(1)
                else
                    a[-1] += 1
                end
            end
        end
    end
end

b = []
a.each { |e| if e>1 then b.push((e/2) + e%2) else b.push(1) end }

sum = 0
b.each { |e| sum+=e }


puts sum


