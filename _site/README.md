# 601.220 Intermediate Programming at JHU

This is the public website Github repository for 601.220 Intermediate Programming,
Fall 2026, at [Johns Hopkins University](https://www.jhu.edu).

The actual website (generated from the contents of this repository) is
<https://jhu-ip.github.io/cs220-f26/>.

## Editing and updating the course website

This information is for CS220 staff who will be editing and updating the website.

The website uses [Jekyll](https://jekyllrb.com/), which in turn is the
engine for [Github pages](https://pages.github.com/).

All of the webpages are written in Markdown.

### Installing Jekyll

You may want to first check the [Jekyll website] (https://jekyllrb.com/docs/installation/) for install instructions particular to your laptop. It will require a (recent) version of Ruby and RubyGems. The instructions below are a few years old and the versions referenced are no longer supported.

The best way to install Jekyll is to first install [rbenv](https://github.com/rbenv/rbenv).
I (DH) generally use the [Basic GitHub Checkout](https://github.com/rbenv/rbenv#basic-github-checkout)
approach to installing rbenv, but you'll want to determine the best approach for your particular laptop.

Once rbenv is installed, install [ruby-build](https://github.com/rbenv/ruby-build#readme),
which will allow you to compile a Ruby runtime from source.

Once ruby-build is installed, install the [latest Ruby](https://www.ruby-lang.org/en/documentation/installation/) for your system.

For example, you can install Ruby 2.7.0 and make it the default using the commands:

```
rbenv install 2.7.0
rbenv global 2.7.0
```

At this point the command `ruby --version` should produce output similar to

```
ruby 2.7.0p0 (2019-12-25 revision 647ee6f091) [x86_64-linux]
```

At this point you can install Jekyll using the command

```
gem install jekyll
```

**NOTE:** Aug 2025 on an Apple Arm64, after installing rbenv had to add the following lines to the bottom of `~/.zshrc` file:

```
export PATH="$HOME/.rbenv/bin:$PATH"
export PATH="$HOME/.rbenv/shims:$PATH"
eval "$(rbenv init -)"
```


### Using Jekyll for a local preview of the website

As you make changes to the website, you can preview the site by running the
command

```
jekyll serve --baseurl ''
```

Enter the url [`http://localhost:4000/`](http://localhost:4000/) in a web browser, and you should be
previewing the website.  As you make changes to the website files, the
web browser will *not* automatically update to reflect those changes, so
you'll need to refresh manually.

### Publishing changes

Once you're ready to publish your changes, `git add` and `git commit` them,
and then `git push`.  Within a few minutes, the site should be rebuilt
remotely to reflect your changes.

### Updating the Course Materials page

To add information to the Course Materials page, edit the markdown file `material.md` directly. We have not used material.csv in recent years. (Refer to a prior semester or comment at the start of the file for how that was previously configured.) We comment out the weeks that are not yet ready for release as the semester progresses. Also make sure to update the `active_week_id` with the current week `id`.

The file [semester.csv](semester.csv) is a "full semester" schedule of
course material. In general, when adding one week of course material,
it should be possible to just copy it from `semester.csv`.

### Porting web content from previous semester website(s)

In previous semesters, we used [Yarn](https://yarnpkg.com/) and
[Docusaurus](https://docusaurus.io/) to build the course website.
Because the previous websites used
[admonitions](https://docusaurus.io/docs/markdown-features/admonitions),
which are a nonstandard Markdown extension, the Markdown files will
need to be converted to standard syntax.

You can use the [convert\_docusaurus\_markdown.rb](convert_docusaurus_markdown.rb)
script to convert the admonition blocks to HTML.  (This will require that
you have [pandoc](https://pandoc.org/) installed.)

Run this script something like the following:

```
./convert_docusaurus_markdown.rb < ORIG.md > RESULT.md
```

where `ORIG.md` is the file you want to convert, and `RESULT.md`
is the updated file to generate.

Note that you will probably need to fix links to image files and other documents,
since the new website uses a different directory structure.
