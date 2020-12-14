program enum_subrange;

type
    ex_enum = (Yellow, White, Blue, Red);

var 
    colors : ex_enum;
    subrange : 1 .. 100;

begin
    colors := Yellow;
    writeln('Choose 1 - 100');
    ReadLn(subrange);

    WriteLn('You''ve chosen range ', subrange, ' and color of ', colors);
end.