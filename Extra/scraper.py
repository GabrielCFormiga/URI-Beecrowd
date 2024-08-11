from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time

def login(driver, user, password_str):
    login_input = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.ID, "email")))
    login_input.send_keys(user)
    password_input = driver.find_element(By.ID, "password")
    password_input.send_keys(password_str)
    time.sleep(2)
    submit_button = driver.find_element(By.ID, "submit-btn")
    submit_button.click()
    time.sleep(2)

def get_questions(driver):
    final_list = []
    while True: 
        time.sleep(2)
        try:
            table = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.TAG_NAME, "table")))
            questions = table.find_elements(By.TAG_NAME, "tr")

            for task in questions:
                try:
                    id_element = task.find_element(By.CSS_SELECTOR, "td.id a")
                    name_element = task.find_element(By.CSS_SELECTOR, "td.large a")
                    id = id_element.text
                    name = name_element.text
                    try:
                        img_element = task.find_element(By.CSS_SELECTOR, "td.tiny img")
                        img_src = img_element.get_attribute("src")
                        
                        if "not-solved.png" in img_src:
                            check = False
                        else:
                            check = True
                    except:
                        check = False
                    final_list.append([id, name, check])
                except Exception as e:
                    print(f"An error occurred while processing a question: {e}")
                    continue  # Continue to the next task if there's an error

            # Next page:
            try:
                next_button = WebDriverWait(driver, 10).until(EC.element_to_be_clickable((By.CSS_SELECTOR, "li.next a[rel='next']")))
                ActionChains(driver).move_to_element(next_button).click().perform()
            except:
                break  # Break the loop if no next page is found

        except Exception as e:
            print(f"An error occurred: {e}")
            break

    return final_list

def write(final_list, category_name, file_path):
    # Write to md:
    print(final_list)
    with open(file_path, "w", encoding="utf-8") as r:
        total = 0
        resolvidos = 0
        for item in final_list:
            total += 1
            if item[2]:
                resolvidos += 1

        r.write(f"# {category_name} ({resolvidos} / {total})\n\n")
        r.write("## Problemas resolvidos\n\n")
        for item in final_list:
            if item[2]:
                r.write(f"- [x]  [{item[0]}](https://www.beecrowd.com.br/repository/UOJ_{item[0]}.html) - {item[1]}\n")
                
        r.write("\n## Problemas não resolvidos\n\n")
        for item in final_list:
            if not item[2]:
                r.write(f"- [ ]  [{item[0]}](https://www.beecrowd.com.br/repository/UOJ_{item[0]}.html) - {item[1]}\n")

def process_category(user, password, category_num, category_name, file_path):
    driver = webdriver.Chrome()
    driver.maximize_window()
    
    # Fazer login e acessar a categoria
    driver.get(f"https://judge.beecrowd.com/en/login?redirect=%2Fen%2Fproblems%2Findex%2F{category_num}")
    login(driver, user, password)

    # Coletar questões e escrever o README
    questions = get_questions(driver)
    write(questions, category_name, file_path)

    # Fechar o navegador
    driver.quit()

if __name__ == "__main__":
    user = str(input("Enter username: "))
    password = str(input("Enter password: "))

    categories = [
        {"num": 1, "name": "Iniciante", "path": r"C:\Users\Gabri\OneDrive\Ambiente de Trabalho\URI-Beecrowd\Codigo\1 - Iniciante\README.md"},
        {"num": 2, "name": "Ad-Hoc", "path": r"C:\Users\Gabri\OneDrive\Ambiente de Trabalho\URI-Beecrowd\Codigo\2 - Ad-Hoc\README.md"},
        {"num": 3, "name": "Strings", "path": r"C:\Users\Gabri\OneDrive\Ambiente de Trabalho\URI-Beecrowd\Codigo\3 - Strings\README.md"},
        {"num": 4, "name": "Estruturas e Bibliotecas", "path": r"C:\Users\Gabri\OneDrive\Ambiente de Trabalho\URI-Beecrowd\Codigo\4 - Estruturas e Bibliotecas\README.md"},
        {"num": 5, "name": "Matemática", "path": r"C:\Users\Gabri\OneDrive\Ambiente de Trabalho\URI-Beecrowd\Codigo\5 - Matemática\README.md"},
        {"num": 6, "name": "Paradigmas", "path": r"C:\Users\Gabri\OneDrive\Ambiente de Trabalho\URI-Beecrowd\Codigo\6 - Paradigmas\README.md"},
        {"num": 7, "name": "Grafos", "path": r"C:\Users\Gabri\OneDrive\Ambiente de Trabalho\URI-Beecrowd\Codigo\7 - Grafos\README.md"}
    ]

    for category in categories:
        process_category(user, password, category["num"], category["name"], category["path"])
