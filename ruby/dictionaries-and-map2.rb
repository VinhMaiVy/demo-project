N = gets.chomp.to_i
phonebook = Hash.new { "Not found" } # set a default value for undefined keys

N.times do
  name = gets.chomp
  number = gets.chomp
  phonebook[name] = "#{name}=#{number}" # set the entire output string
end

# Will print the name=number string or "Not found"
puts phonebook[gets.chomp] until STDIN.eof?
