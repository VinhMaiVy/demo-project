def count_multibyte_char(money)
    count = 0
    money.each_char { |x| count += 1 if x.bytesize > 1}
    return count
end

puts count_multibyte_char("¥1000")
puts count_multibyte_char("¥1000¥¥¥")