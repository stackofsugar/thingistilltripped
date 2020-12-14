(*
    1. Write a program to calculate the area and perimeter of a shape. Provide a choice
    to choose a rectangle or a square.

    Will use procedure
*)

program area_perimeter;

var
    op_choice : ShortInt;
    side1_value, side2_value, res : Integer;

procedure operate_rect(side1, side2 : Integer);
begin
    WriteLn('The area of your rectangle is ', (side1 * side2));
    WriteLn('The perimeter of your rectangle is ', (2 * (side1 + side2)));
end;

procedure operate_square(side : Integer);
begin
    WriteLn('The area of your square is ', (side * side));
    WriteLn('The perimeter of your square is ', (4 * side));
end;

begin
    WriteLn('What will be calculated?');
    WriteLn('[1] Rectangle ');
    WriteLn('[2] Square ');
    Write('Your Choice: ');
    ReadLn(op_choice);

    if (op_choice = 1) then
    begin
        Write('Enter a side: ');
        ReadLn(side1_value);
        Write('Enter the other side: ');
        ReadLn(side2_value);
        operate_rect(side1_value, side2_value);
    end
    else
    begin
        Write('Enter the side: ');
        ReadLn(side1_value);
        operate_square(side1_value);
    end;
end.