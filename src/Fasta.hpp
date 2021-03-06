#ifndef FASTA_HPP
#define FASTA_HPP

#include <cstdint>

namespace Fasta {

	inline bool IsValidAA( char aa ) {
			switch ( aa ) {
				case 'A': case 'R': case 'N': case 'D': case 'C': case 'Q': case 'E': case 'G':
				case 'H': case 'I': case 'L': case 'K': case 'M': case 'F': case 'P': case 'S':
				case 'T': case 'W': case 'Y': case 'V': case 'B': case 'J': case 'Z': case 'X':
				case '*':
						return true;
				default:
						return false;
			}
	}

	typedef int8_t AAIndex;

	inline AAIndex Char2Index( char aa ) {
			if ( aa >= 'a' && aa <= 'z' ) {
					aa += 'A' - 'a';
			}

			switch ( aa ) {
				case 'A': {   return  0;    }
				case 'R': {   return  1;    }
				case 'N': {   return  2;    }
				case 'D': {   return  3;    }
				case 'C': {   return  4;    }
				case 'Q': {   return  5;    }
				case 'E': {   return  6;    }
				case 'G': {   return  7;    }
				case 'H': {   return  8;    }
				case 'I': {   return  9;    }
				case 'L': {   return  10;   }
				case 'K': {   return  11;   }
				case 'M': {   return  12;   }
				case 'F': {   return  13;   }
				case 'P': {   return  14;   }
				case 'U': {   return  -2;   }
				case 'S': {   return  15;   }
				case 'T': {   return  16;   }
				case 'W': {   return  17;   }
				case 'Y': {   return  18;   }
				case 'V': {   return  19;   }

				case 'B': {   return  20;   }
				case 'Z': {   return  21;   }

				case 'X': {   return  22;   }

				case '*': {   return  23;   }

				case '-': {   return  -3;   }

				default:  {   return -1;    }
			}
	}

	inline char Index2Char( AAIndex i ) {
			switch ( i ) {
				case  0 : {   return 'A';   }
				case  1 : {   return 'R';   }
				case  2 : {   return 'N';   }
				case  3 : {   return 'D';   }
				case  4 : {   return 'C';   }
				case  5 : {   return 'Q';   }
				case  6 : {   return 'E';   }
				case  7 : {   return 'G';   }
				case  8 : {   return 'H';   }
				case  9 : {   return 'I';   }
				case  10: {   return 'L';   }
				case  11: {   return 'K';   }
				case  12: {   return 'M';   }
				case  13: {   return 'F';   }
				case  14: {   return 'P';   }
				case  -2: {   return 'U';   }
				case  15: {   return 'S';   }
				case  16: {   return 'T';   }
				case  17: {   return 'W';   }
				case  18: {   return 'Y';   }
				case  19: {   return 'V';   }

				case  20: {   return 'B';   }
				case  21: {   return 'Z';   }

				case  22: {   return 'X';   }

				case	23: {   return '*';   }

				case  -3: {   return '-';   }

				default:  {   return -1;    }
			}
	}

	inline char const * Char2String( char aa ) {
			if ( aa >= 'a' && aa <= 'z' ) {
					aa += 'A' - 'a';
			}

			switch (aa) {
				case 'A': {   return "Alanine";                       }
				case 'R': {   return "Arginine";                      }
				case 'N': {   return "Asparagine";                    }
				case 'D': {   return "Aspartic Acid";                 }
				case 'C': {   return "Cysteine";                      }
				case 'Q': {   return "Glutamine";                     }
				case 'E': {   return "Glutamic Acid";                 }
				case 'G': {   return "Glycine";                       }
				case 'H': {   return "Histidine";                     }
				case 'I': {   return "Isoleucine";                    }
				case 'L': {   return "Leucine";                       }
				case 'K': {   return "Lysine";                        }
				case 'M': {   return "Methionine";                    }
				case 'F': {   return "Phenylalanine";                 }
				case 'P': {   return "Proline";                       }
				case 'U': {   return "Selenocysteine";                }
				case 'S': {   return "Serine";                        }
				case 'T': {   return "Threonine";                     }
				case 'W': {   return "Tryptophan";                    }
				case 'Y': {   return "Tyrosine";                      }
				case 'V': {   return "Valine";                        }

				case 'B': {   return "Aspartic Acid or Asparagine";   }
				case 'Z': {   return "Glutamic Acid or Glutamine";    }

				case 'X': {   return "Any";                           }

				case '*': {   return "Translation stop";              }

				case '-': {   return "Gap of indeterminate length";   }

				default:  {   return nullptr;                         }
			}
	}

	inline char const * Index2String( AAIndex i ) {
			return Char2String( Index2Char( i ) );
	}

} // namespace Fasta

#endif
