binary = gets.to_i.to_s(2)

bucket_of_1=[]

i=0
j=0
while i<binary.length() do
    if binary[i] == '1' then 
        j += 1 
    else 
        bucket_of_1.push(j)
        j = 0 
    end
    i += 1
end

if j>0 then bucket_of_1.push(j) end

l=0
bucket_of_1.each { |k| if l<k then l=k end }

puts l

