# trial code for checking factory pattern 
def suffix_string_factory(prefix):
    def add_suffix_to_prefix(suffix):
        return (prefix+suffix)
    return add_suffix_to_prefix

prefix_list = ["demo","hello","trial"]
suffix_list = [".cpp",".java",".py"]

if __name__ == "__main__":
    for x in prefix_list:
        for y in suffix_list:
            print(suffix_string_factory(x)(y) ,end = "\t")
        print()

