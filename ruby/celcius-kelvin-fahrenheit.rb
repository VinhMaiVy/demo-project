def convert_temp(temp, input_scale:, output_scale: 'celsius')
    if (input_scale == output_scale)
        return temp
    end
    if (input_scale == 'kelvin') && (output_scale == 'celsius')
        return temp - 273.15
    end
    if (input_scale == 'fahrenheit') && (output_scale == 'celsius')
        return (temp - 32.0) * (5.0/9.0)
    end
    if (input_scale == 'celsius') && (output_scale == 'kelvin')
        return temp + 273.15
    end
    if (input_scale == 'fahrenheit') && (output_scale == 'kelvin')
        return (temp - 32) * (5.0/9.0) + 273.15
    end
    if (input_scale == 'celsius') && (output_scale == 'fahrenheit')
        return temp*1.8+32.0
    end
    if (input_scale == 'kelvin') && (output_scale == 'fahrenheit')
        return (temp - 273.15) * (9.0/5.0) + 32.0
    end
end

