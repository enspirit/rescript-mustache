open Jest;

let () =
  describe(
    "mustache",
    ExpectJs.(
      () => {
        test("#render", () =>
          expect(
            Mustache.render("{{title}} spends {{calc}}",
/* TODO       {
                title: "Joe",
                calc: function () {
                  return 2 + 4;
                }
              }*/
            )
          )
          |> toBe("Joe spends 6")
        );
      }
    ),
  );
