#include "protein_translation.h"

namespace protein_translation {

// TODO: add your solution here
    std::vector<std::string> proteins(const std::string& input){
        std::vector<std::string> output;
        for(size_t i=0; i<input.length();i+=3){
            output.push_back(input.substr(i,3));
        }
        for (size_t i = 0; i < output.size(); ++i) {
            std::string& protein = output[i];
            if(protein=="AUG"){
                protein="Methionine";
            }else if(protein=="UUU"||protein=="UUC"){
                protein="Phenylalanine";
            }else if(protein=="UUA"||protein=="UUG"){
                protein="Leucine";
            }else if(protein=="UCU"||protein=="UCC"||protein=="UCA"||protein=="UCG"){
                protein="Serine";
            }else if(protein=="UAU"||protein=="UAC"){
                protein="Tyrosine";
            }else if(protein=="UGU"||protein=="UGC"){
                protein="Cysteine";
            }else if(protein=="UGG"){
                protein="Tryptophan";
            }else if(protein=="UAA"||protein=="UAG"||protein=="UGA"){
                output.resize(i);
                break;
            }
        }
        return output;
    }
}  // namespace protein_translation
