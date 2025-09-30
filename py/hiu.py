from hewan import hewan

class hiu(hewan):
    def __init__(self, famili="", habitat="", jenis_makanan="", cara_berkembangbiak="", harapan_hidup=0, food=None, spesies="", jumlah_gigi=0):
        super().__init__(famili, habitat, jenis_makanan, cara_berkembangbiak, harapan_hidup, food)
        self.spesies = spesies
        self.jumlah_gigi = jumlah_gigi

    def set_spesies(self, s):
        self.spesies = s

    def set_jumlah_gigi(self, j):
        self.jumlah_gigi = j

    def get_spesies(self):
        return self.spesies

    def get_jumlah_gigi(self):
        return self.jumlah_gigi

    def print(self):
        super().print()
        print(f"Spesies            : {self.get_spesies()}")
        print(f"Jumlah Gigi        : {self.get_jumlah_gigi()}\n")