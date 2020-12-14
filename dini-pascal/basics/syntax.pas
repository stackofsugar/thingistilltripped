program syntax;

const message = 'Welcome!';

var firstname, surname : string;

begin
    writeln('Hello gimme name pls: ');
    readln(firstname);

    writeln('Hello gimme surname: ');
    readln(surname);

    writeln(message, ' ', firstname, ' ', surname);
end.