function createClass(dict)
   f = open("BilSoz.cpp","w")
   print(f,"//BilSoz.cpp\n#include \"bilsoz/BilSoz.hpp\"\nunordered_map<string,string> BilSoz::dict = {\n")
   i=1
   for (i,(k,w)) in enumerate(dict)
      print(f,"{\"",k,"\",\"",w, "\"}")
      i != length(dict) ? println(f,",") : println(f)
      i+=1
   end
   println(f,"};")
   close(f)
end

dict = Dict(split.(readlines(open("../bilsoz.tsv")),"\t"))
createClass(dict)
