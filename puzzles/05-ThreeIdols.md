## Problem:  - to read 

Here's a classic:

Three gods A, B, and C are called, in some order, True, False, and Random.
  True always speaks truly, 
  False always speaks falsely, but 
  whether Random speaks truly or falsely is a completely random matter.

Your task is to determine the identities of A, B, and C by asking three yes-no questions; each question must be put to exactly one god. 
The gods understand English, but will answer all questions in their own language, in which the words for yes and no are 'da' and 'ja', in some order. You do not know which word means which.

## Solution 

Ask counterfactual questions. For example: "Will you always answer this question the same way?" Will put lies or random in an infinite loop, unable to answer. Here is the more organized method:

>> If I asked you Q, would you say 'ja'? results in the answer 'ja' if the truthful answer to Q is yes, and the answer 'da' if the truthful answer to Q is no. The reason this works can be seen by looking at the eight possible cases. 

Assume that 'ja' means yes and 'da' means no. 
(i) True is asked and responds with 'ja'. Since he is telling the truth the truthful answer to Q is 'ja', which means yes. 

(ii) True is asked and responds with 'da'. Since he is telling the truth the truthful answer to Q is 'da', which means no. 

(iii) False is asked and responds with 'ja'. Since he is lying it follows that if you asked him Q he would instead answer 'da'. He would be lying, so the truthful answer to Q is 'ja', which means yes. 

(iv) False is asked and responds with ‘da’. Since he is lying it follows that if you asked him Q he would in fact answer ‘ja’. He would be lying, so the truthful answer to Q is ‘da’, which means no. Assume ‘ja’ means no and ‘da’ means yes. 

(v) True is asked and responds with ‘ja’. Since he is telling the truth the truthful answer to Q is ‘da’, which means yes. 

(vi) True is asked and responds with ‘da’. Since he is telling the truth the truthful answer to Q is ‘ja’, which means no. 

(vii) False is asked and responds with ‘ja’. Since he is lying it follows that if you asked him Q he would in fact answer ‘ja’. He would be lying, so the truthful answer to Q is ‘da’, which means yes. 

(viii) False is asked and responds with ‘da’. Since he is lying it follows that if you asked him Q he would instead answer ‘da’. He would be lying, so the truthful answer to Q is ‘ja’, which means no. Using this fact, one may proceed as follows.

>> Ask god B, “If I asked you ‘Is A Random?’, would you say ‘ja’?”. 
If B answers ‘ja’, then either B is Random (and is answering randomly), or B is not Random and the answer indicates that A is indeed Random.  Either way, C is not Random. 
If B answers ‘da’, then either B is Random (and is answering randomly), or B is not Random and the answer indicates that A is not Random. Either way, A is not Random. Go to the god who was identified as not being Random by the previous question (either A or C), and ask him: “If I asked you ‘Are you True?’, would you say ‘ja’?”. 
Since he is not Random, an answer of ‘ja’ indicates that he is True and an answer of ‘da’ indicates that he is False. 

*Ask the same god the question: “If I asked you ‘Is B Random?’, would you say ‘ja’?”. If the answer is ‘ja’ then B is Random; if the answer is ‘da’ then the god you have not yet spoken to is Random. The remaining god can be identified by elimination.

