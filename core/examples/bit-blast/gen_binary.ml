(* Time-stamp: <modified the 29/11/2018 (at 18:28) by Erwan Jahier> *)

let usage = "ocaml gen_binary.ml n
will generate a binary<n>.lus file encoding integer with int arrays of size n
"
  
let (int_to_bin:int -> int -> int list) = fun i n ->
  let rec aux i n acc =
    let r = i mod 2 in
    let i = i / 2 in
    let acc = r::acc in
    if n = 1  then acc else aux i (n-1) acc
  in
  List.rev (aux i n [])

let bstring_of_int = function
  | 0 -> "false"
  | 1 -> "true"
  | _  -> assert false
    
let (do_const:int -> int -> out_channel -> unit) = fun n i oc ->
  let l = int_to_bin i n in
  let body = String.concat "," (List.map bstring_of_int l) in
  Printf.fprintf oc "const UsrInt_%i = [%s];\n" i body;
  flush oc

let rec pow2 n = if n=0 then 1 else 2*(pow2 (n-1))

let _ =
  try 
    let n = int_of_string Sys.argv.(1) in
    let fn = Printf.sprintf "binary%i.lus" n in
    let oc = open_out fn in
    let n2 = pow2 n in 
    Printf.fprintf oc "-- to be included BEFORE binary.lus\n" ;
    Printf.fprintf oc "const BIN_SZ=%i;\n" n;
    flush oc;
    for i=0 to n2-1 do
      do_const n i oc
    done;
    flush oc;
    close_out oc;
    Printf.printf "%s has been generated\n" fn
  with _ -> print_string usage

