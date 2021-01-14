@bs.module("mustache")
external render: (string, {..}, ~partials: Js.Dict.t<string>=?, unit) => string = "render"
