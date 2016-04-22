# Your code here
def serial_average(s)
    avg=((s[4,5].to_f+s[10,5].to_f)/2)
    s[0,4] + "%2.2f" % avg
end
puts serial_average('002-10.00-20.00')