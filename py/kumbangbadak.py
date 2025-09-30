from hewan import hewan

class kumbangBadak(hewan):
    def __init__(self, famili="", habitat="", jenis_makanan="", cara_berkembangbiak="", harapan_hidup=0, food=None, spesies="", panjang_tanduk=0):
        super().__init__(famili, habitat, jenis_makanan, cara_berkembangbiak, harapan_hidup, food)
        self.spesies = spesies
        self.panjang_tanduk = panjang_tanduk

    def set_spesies(self, s):
        self.spesies = s

    def set_panjang_tanduk(self, p):
        self.panjang_tanduk = p

    def get_spesies(self):
        return self.spesies

    def get_panjang_tanduk(self):
        return self.panjang_tanduk

    def print(self):
        super().print()
        print(f"Spesies            : {self.get_spesies()}")
        print(f"Panjang Tanduk     : {self.get_panjang_tanduk()} mm\n")