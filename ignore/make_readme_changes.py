import os

def count_solutions(directory):
    count = 0
    lst = os.listdir(directory)
    igoreFiles = ['tempCodeRunnerFile.cpp', 'temp.cpp', 'test.cpp']

    for file in lst:
        if file in igoreFiles:
            lst.remove(file)

    for filename in lst:
        if filename.endswith('.cpp'):  # Check for C++ files
            count += 1
    return count

# def update_readme(count):
#     readme_path = 'README.md'
#     with open(readme_path, 'r') as file:
#         content = file.readlines()

#     for i, line in enumerate(content):
#         if "total of **" in line:
#             content[i] = f"As of now, a total of **{count}** problems have been solved.\n"
#             break

#     with open(readme_path, 'w') as file:
#         file.writelines(content)

if __name__ == "__main__":
    directory = '.'
    total_solved = count_solutions(directory)
    # update_readme(total_solved)
    print(f"Total problems solved: {total_solved}")