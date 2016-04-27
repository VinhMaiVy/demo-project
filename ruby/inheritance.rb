#! /bin/ruby

class Person
	def initialize(firstName, lastName, id)
		@firstName = firstName
		@lastName = lastName
		@id = id
	end
	def printPerson()
		print("Name: ",@lastName , ", " + @firstName ,"\nID: " , @id)
	end
end

class Student <Person
    
    @score = []
    attr_accessor :scores
    
    def initialize(firstName, lastName, id, scores)
		super(firstName, lastName, id)
		@scores = scores
	end
    
    def calculate
        sum = 0
        @scores.each { |s| sum += s.to_i }
        avg = (sum / @scores.size).to_i
        #  avg = @scores.inject(0.0) { |sum, el| sum + el.to_i } / @scores.size
        case avg
            when 90..100 then 'O'
            when 80..89  then 'E'
            when 70..79  then 'A'
            when 55..69  then 'P'
            when 40..54  then 'D'
            when 0..39   then 'T'
        end
    end
end

input = gets.split()
firstName = input[0]
lastName = input[1]
id = input[2].to_i
numScores = gets.to_i
scores = gets.split()

s = Student.new(firstName, lastName, id, scores)
s.printPerson           
print("\nGrade: " + s.calculate)