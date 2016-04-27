n = gets.to_i

i = 0
dic = {}
while i<n do
    line = gets
    name, phone = line.split
    dic[name] = phone
    i+=1
end

query = []
while line = gets do
    query.push(line.chomp)
end

query.each do |q|
    if dic.has_key? q then puts "#{q}=#{dic[q]}" else puts "Not Found" end 
end


