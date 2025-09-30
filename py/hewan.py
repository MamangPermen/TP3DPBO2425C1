from makanan import makanan

class hewan:
    def __init__(self, famili="", habitat="", jenis_makanan="", cara_berkembangbiak="", harapan_hidup=0, food=None):
        self.famili = famili
        self.habitat = habitat
        self.jenis_makanan = jenis_makanan
        self.cara_berkembangbiak = cara_berkembangbiak
        self.harapan_hidup = harapan_hidup
        self.food = food if food else makanan()

    # Setter
    def set_famili(self, f):
        self.famili = f

    def set_habitat(self, h):
        self.habitat = h

    def set_jenis_makanan(self, jm):
        self.jenis_makanan = jm

    def set_cara_berkembangbiak(self, cb):
        self.cara_berkembangbiak = cb

    def set_harapan_hidup(self, hh):
        self.harapan_hidup = hh

    def set_makanan(self, m):
        self.food = m

    # Getter
    def get_famili(self):
        return self.famili

    def get_habitat(self):
        return self.habitat

    def get_jenis_makanan(self):
        return self.jenis_makanan

    def get_cara_berkembangbiak(self):
        return self.cara_berkembangbiak

    def get_harapan_hidup(self):
        return self.harapan_hidup

    def get_makanan(self):
        return self.food

    def print(self):
        print(f"Famili             : {self.get_famili()}")
        print(f"Habitat            : {self.get_habitat()}")
        print(f"Jenis Makanan      : {self.get_jenis_makanan()}")
        print(f"Cara Berkembangbiak: {self.get_cara_berkembangbiak()}")
        print(f"Harapan Hidup      : {self.get_harapan_hidup()} tahun")
        self.get_makanan().print()