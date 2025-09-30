from hewan import hewan #import kelas hewan

class kucing(hewan):
    # Constructor
    def __init__(self, famili="", habitat="", jenis_makanan="", cara_berkembangbiak="", harapan_hidup=0, food=None, ras="", warna_bulu=""):
        super().__init__(famili, habitat, jenis_makanan, cara_berkembangbiak, harapan_hidup, food)
        self.ras = ras
        self.warna_bulu = warna_bulu

    # Setter
    def set_ras(self, r):
        self.ras = r

    def set_warna_bulu(self, w):
        self.warna_bulu = w

    # Getter
    def get_ras(self):
        return self.ras

    def get_warna_bulu(self):
        return self.warna_bulu

    # Method print
    def print(self):
        super().print()
        print(f"Ras                : {self.get_ras()}")
        print(f"Warna Bulu         : {self.get_warna_bulu()}\n")

    # Destructor
    def __del__(self):
        pass