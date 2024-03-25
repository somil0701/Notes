# GIT
Git is a free and open source distributed version control system that's responsible for everything GitHub related that happens locally on your computer.

## SETUP
Configuring user information used across all local repositories

```bash
git config --global user.name "[firstname lastname]"
# set a name that is identifiable for credit when review version history
```
```bash
git config --global user.email "[valid-email]"
# set an email address that will be associated with each history marker
```
```bash
git config --global color.ui auto
set automatic command line coloring for Git for easy reviewing
```

## SETUP & INIT
Configuring user information, initializing and cloning repositories

```bash
git init
# initialize an exisiting directory as a Git repository
```
```bash
git clone [url]
# retrieve an entire repository from a hosted location via URL
```

## STAGE & SNAPSHOT
Working with snapshots and the Git staging area

```bash
git status
# show modified files in working directory, staged for your next commit
```
```bash
git add [file]
# add a file as it looks now to your next commit(stage)
```
```bash
git reset [file]
# unstage a file while retaining the changes in working directory
```
```bash
git diff
# diff of what is changed but not staged
```
```bash
git diff --staged
# diff of what is staged but not yet committed
```
```bash
git commit -m "[descriptive message]"
# commit your staged content as a new commit snapshot
```

## BRANCH & MERGE
Isolating work in branches, changing context, and integrating changes
```bash
git branch
# list your branches, a * will appear next to the currently active branch
```
```bash
git branch [branch-name]
# create a new branch at the current commit
```
```bash
git checkout
# switch to another branch andd check it out into your working directory
```
```bash
git merge [branch]
# merge the specified branch's history into the current one
```
```bash
git log
# show all commits in the current branch's history
```

## SHARE & UPDATE
Retrieving updates from another repository and updating local repos
```bash
git remote add [alias] [url]
# add a git URL as an alias
```
```bash
git fetch [alias]
# fetch down all the branches from that Git remote
```
```bash
git merge [alias]/[branch]
# merge a remote branch into your current branch to bring it up to date
```
```bash
git push [alias] [branch]
# Transmit local branch commits to the remote repository branch
```
```bash
git pull
# fetch and merge any commits from the tracking reomte branch
```

## REWRITE HISTORY
Rewriting branches, updating commits and clearing history
```bash
git rebase [branch]
# apply any commits of current branch ahead of specified one
```
```bash
git reset --hard [commit]
# clear staging area, rewrite working tree fro specified commit
```