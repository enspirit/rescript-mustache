# bs-mustache

[BuckleScript](https://bucklescript.github.io) bindings for [mustache](https://github.com/janl/mustache.js).

# Usage

```reasonml
Mustache.render("This is a {{adjective}} template", { adjective: "terrible" })
```

# Developers section

Specific BuckleScript aliases (`clean`, `build`, `watch`, `test`...) are defined
in the `package.json` file to be used with `npm run [alias]`.
