class Solution
  
  def initialize
    @stack = []
    @queue = []
  end
  
  def pushCharacter(c)
      @stack.push(c)
  end
  
  def enqueueCharacter(c)
      @queue.push(c)
  end
  
  def popCharacter
    return @stack.shift
  end
  
  def dequeueCharacter
    return @queue.pop
  end
  
end


# read the string s
s=gets.strip
#Create the Solution class object
obj=Solution.new()   
l=s.length
# push/enqueue all the characters of string s to stack
for i in 0...l
    obj.pushCharacter(s[i])
    obj.enqueueCharacter(s[i])
end



isPalindrome=true

# pop the top character from stack
# dequeue the first character from queue
# compare both the characters


for i in 0...(l / 2)   
    if obj.popCharacter()!=obj.dequeueCharacter()   
        
        isPalindrome=false
        break
    end
end

#finally print whether string s is palindrome or not.
if isPalindrome
    puts("The word, "+s+", is a palindrome.")
else
   puts("The word, "+s+", is not a palindrome.")    
end  