open Jest;

let () =
  describe(
    "mustache",
    ExpectJs.(
      () => {
        test("#render", () => {
            expect(
              Mustache.render("{{title}} spends {{calc}}",
                  { "title": "Joe", "calc": () => 2 + 4 }
                )
              )
            |> toBe("Joe spends 6")
          }
        );
      }
    ),
  );
