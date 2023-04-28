## Solution 01
class Solution:
    def numUniqueEmails(self, emails: list[str]) -> int:
        unique_emails = set()
        for email in emails:
            local_name, domain_name = email.split('@')
            local_name = local_name.split('+')[0].replace('.', '')
            email = local_name + '@' + domain_name
            unique_emails.add(email)
            
        return len(unique_emails) 
    
## Solution 02 : Without Using Built In Functions   
 # class Solution:
#     def numUniqueEmails(self, emails: list[str]) -> int:  
#         unique = set()

#         for e in emails:
#             i, local = 0, ""
#             while e[i] not in ["@", "+"]:
#                 if e[i] != ".":
#                     local += e[i]
#                 i += 1

#             while e[i] != "@":
#                 i += 1
#             domain = e[i + 1: ] 
#             unique.add((local, domain))

#         return len(unique) 