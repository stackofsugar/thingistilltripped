(*
    Write a program to calculate the summation of an arithmetic sequence
    Will use function
*)
program summing_seq;

var
    seq_length : Integer;
    seq_array : array of Integer;

begin
    Write('How long is your sequence > ');
    ReadLn(seq_length);

    SetLength(seq_array, seq_length);
end.