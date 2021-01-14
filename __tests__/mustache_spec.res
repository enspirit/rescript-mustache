open Jest

let () = describe(
  "mustache",
  {
    open ExpectJs
    () => {
      test("#render works without partials", () =>
        expect(
          Mustache.render("{{title}} spends {{calc}}",
            {"title": "Joe", "calc": () => 2 + 4},
            ()
          )
        )
        |> toBe("Joe spends 6")
      )

      test("#render works with partials", () =>
        expect(
          Mustache.render("{{title}} spends {{calc}} and then {{> loaded}}",
            {"title": "Joe", "calc": () => 2 + 4, "then": "lol"},
            ~partials=Js.Dict.fromList(list{("loaded", "{{then}}")}),
            ()
          )
        )
        |> toBe("Joe spends 6 and then lol")
      )
    }
  }
)
