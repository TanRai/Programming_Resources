import os

def delete_exe_files(directory):
  for root, dirs, files in os.walk(directory):
    for file in files:
      if file.endswith(".exe"):
        file_path = os.path.join(root, file)
        try:
          os.remove(file_path)
          print(f"Deleted: {file_path}")
        except Exception as e:
          print(f"Failed to delete {file_path}: {e}")

target_directory = r"C:/Users/Raiyan/Documents/Programming_Resources"
delete_exe_files(target_directory)