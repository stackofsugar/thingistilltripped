program area_circle;
uses Math;

const PI = 3.141592654;

var r_value : Real;

begin
    WriteLn('Please enter radius: ');
    ReadLn(r_value);

    WriteLn('The circumference of a circle is ', (2 * PI * r_value):7:5);
    WriteLn('The area of circle is: ', (PI * power(r_value, 2)):7:5);
end.