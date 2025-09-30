from hewan import hewan #import kelas hewan

class kumbangBadak(hewan):
    # Constructor
    def __init__(self, famili="", habitat="", jenis_makanan="", cara_berkembangbiak="", harapan_hidup=0, food=None, spesies="", panjang_tanduk=0):
        super().__init__(famili, habitat, jenis_makanan, cara_berkembangbiak, harapan_hidup, food)
        self.spesies = spesies
        self.panjang_tanduk = panjang_tanduk

    # Setter
    def set_spesies(self, s):
        self.spesies = s

    def set_panjang_tanduk(self, p):
        self.panjang_tanduk = p

    # Getter
    def get_spesies(self):
        return self.spesies

    def get_panjang_tanduk(self):
        return self.panjang_tanduk

    # Method print
    def print(self):
        super().print()
        print(f"Spesies            : {self.get_spesies()}")
        print(f"Panjang Tanduk     : {self.get_panjang_tanduk()} mm\n")

    # Destructor
    def __del__(self):
        pass    