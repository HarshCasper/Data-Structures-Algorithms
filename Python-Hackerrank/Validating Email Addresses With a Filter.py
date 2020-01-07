def fun(s):
    s_prcocess = s.replace('@','.').split('.')
    order = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1357902468-_'
    if len(s_prcocess) == 3 and all(s_items != '' for s_items in s_prcocess):
        if len(s_prcocess[2]) <= 3 and s_prcocess[1].isalnum() and all(item in order for item in s_prcocess[0]):
            return True
    return False

def filter_mail(emails):
    return list(filter(fun, emails))

if __name__ == '__main__':
    n = int(input())
    emails = []
    for _ in range(n):
        emails.append(input())

filtered_emails = filter_mail(emails)
filtered_emails.sort()
print(filtered_emails)
