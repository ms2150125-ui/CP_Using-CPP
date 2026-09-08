#include<iostream>
using namespace std;
int main()
{
    /*1. Repo clone করা

GitHub থেকে project প্রথমবার PC-তে আনতে:

git clone https://github.com/USERNAME/REPO.git

তারপর repo folder-এ ঢুকতে:

cd REPO
2. Current অবস্থা check করা
git status

এটা সবচেয়ে বেশি ব্যবহার করবে। কোন file change হয়েছে, staged হয়েছে কিনা—সব দেখাবে।

3. GitHub থেকে latest code আনা

কাজ শুরু করার আগে:

git pull

Team project হলে এটা খুব important।

4. সব changed file stage করা
git add .

একটা specific file:

git add main.cpp
5. Commit করা
git commit -m "Added binary search solution"

ভালো commit message example:

git commit -m "Fix array indexing bug"
git commit -m "Add linked list implementation"
git commit -m "Update README"

খারাপ commit:

git commit -m "update"
6. GitHub-এ upload করা
git push

Daily basic workflow:

git status
git add .
git commit -m "Your message"
git push
সবচেয়ে useful commands
git status

Repo-এর current condition দেখায়।

git log

Previous commits দেখায়।

Short version:

git log --oneline
git diff

কি change করেছো সেটা দেখায়।

git remote -v

কোন GitHub repo-এর সাথে connected আছো সেটা দেখায়।

git branch

Current branch দেখায়।

git branch -a

সব branch দেখায়।

Branch ব্যবহার

নতুন branch:

git branch feature-name

Branch change:

git switch feature-name

আরও common shortcut:

git switch -c feature-name

এতে branch create + switch দুটোই হবে।

Main branch-এ ফিরে যেতে:

git switch main

Branch merge:

git merge feature-name
ভুল হলে useful commands

Stage করে ফেলেছো কিন্তু commit করতে চাও না:

git restore --staged file.cpp

সব staged file unstaged:

git restore --staged .

File-এর local changes বাদ দিতে:

git restore file.cpp

⚠️ এটা দিলে uncommitted changes হারিয়ে যাবে।

Last commit message change:

git commit --amend -m "New commit message"
নতুন repo হলে প্রথমবার
git init
git add .
git commit -m "Initial commit"
git branch -M main
git remote add origin https://github.com/USERNAME/REPO.git
git push -u origin main

কিন্তু তুমি যদি git clone করো, সাধারণত এগুলো লাগবে না।

তোমার জন্য best daily routine

তুমি যখন C++ problem solve করবে:

cd CP_Using-CPP
git pull

তারপর VS Code-এ code করো।

কাজ শেষ হলে:

git status
git add .
git commit -m "Solve basic problem 01"
git push

এই ৫টা command ভালোভাবে জানলেই daily Git/GitHub-এর প্রায় সব basic কাজ করতে পারবে:

git status
git pull
git add .
git commit -m "message"
git push
*/
}