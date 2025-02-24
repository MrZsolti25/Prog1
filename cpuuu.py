import multiprocessing

def cpu_maxing(_):
    while True:
        pass

if __name__ == "__main__":
    num_cores = multiprocessing.cpu_count()

    with multiprocessing.Pool(num_cores) as pool:
        pool.map(cpu_maxing, [None] * num_cores)
