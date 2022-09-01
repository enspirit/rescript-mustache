# rescript-mustache

[ReScript](https://rescript-lang.org) bindings for [mustache](https://github.com/janl/mustache.js).

# Usage

```reasonml
Mustache.render("This is a {{adjective}} template", { "adjective" : "terrible" })
```

# Developers section

First and formost, configure your environment with `npm install`.

Specific ReScript aliases (`clean`, `build`, `watch`, `test`...) are defined
in the `package.json` file to be used with `npm run [alias]`.
